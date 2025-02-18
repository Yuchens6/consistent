package xml;

import xml.graph.Rectangle;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.LinkedList;

public class cAna {
    public static Rectangle re;
    public static void analysis(String cPath) {
        try (BufferedReader reader = new BufferedReader(new FileReader(cPath))) {
            String line;
            while ((line = reader.readLine()) != null) {  // 逐行读取
                line = line.trim();
                String[] strings = line.split(" ");  // 输出每一行
                if (strings.length == 6) {
                    if(strings[5].equals("rectangle*/")){
                        LinkedList<String> node = new LinkedList<>();
                        while (true){
                            line = reader.readLine();
                            line = line.trim();
                            strings = line.split(" ");
                            if (strings[0].startsWith("sgpi_rectangle(")){
                                break;
                            }
                            node.add(line);
                        }
                        Rectangle rectangle = new Rectangle();
                        rectangle = rectangle.generateRectangle(node);
                        re = rectangle;
                    }

                }
            }
        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }

}
