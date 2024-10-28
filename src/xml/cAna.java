package xml;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class cAna {
    public static void analysis(String cPath) {
        try (BufferedReader reader = new BufferedReader(new FileReader(cPath))) {
            String line;
            while ((line = reader.readLine()) != null) {  // 逐行读取
                String[] strings = line.split(" ");  // 输出每一行
                if (strings.length == 4) {
                    
                }
            }
        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
