package xml;

import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;
import org.xml.sax.SAXException;
import xml.graph.Rectangle;
import xml.graph.RectangleArea;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import java.io.File;
import java.io.IOException;

public class xmlAna {
    public static void analysis(String xmlPath) throws IOException, SAXException, ParserConfigurationException {
        DocumentBuilderFactory factory=DocumentBuilderFactory.newInstance();
        DocumentBuilder builder=factory.newDocumentBuilder();
        Document doc=builder.parse(new File(xmlPath));
        Element root=doc.getDocumentElement();
        NodeList nodelist=root.getChildNodes();
        int length=nodelist.getLength();
        for(int i=0;i<length;i++){
            Node node=nodelist.item(i);
            dfsXML(node);
        }
    }
    private static void dfsXML(Node node){
//        System.out.println(node.getNodeName());
        if(node.getNodeName().equals("rectangleArea")){
            RectangleArea rectangle=new RectangleArea();
            rectangle = rectangle.generateRectangleArea(node);
            System.out.println(rectangle.toString());
        }

        if( node.getChildNodes().getLength() > 0 ){
            for(int i=0;i<node.getChildNodes().getLength();i++){
                Node childNode=node.getChildNodes().item(i);
                dfsXML(childNode);
            }
        }
    }
    public static void main(String[] args) throws IOException, SAXException, ParserConfigurationException {
        analysis("src/xml/xmlPath/page.sgfx");
    }
}
