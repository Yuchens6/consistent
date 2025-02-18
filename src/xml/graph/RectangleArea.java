package xml.graph;

import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

import java.util.LinkedList;
import java.util.regex.*;

public class RectangleArea extends Usual {
    private String enable;
    private String pointerId;
    private Point firstPoint;
    private Point thirdPoint;

    public RectangleArea(String pathFromRoot, String enable, String pointerId, Point firstPoint, Point thirdPoint) {
        super(pathFromRoot);
        this.enable = enable;
        this.pointerId = pointerId;
        this.firstPoint = firstPoint;
        this.thirdPoint = thirdPoint;
    }

    public RectangleArea() {
    }

    public String getEnable() {
        return enable;
    }

    public void setEnable(String enable) {
        this.enable = enable;
    }

    public String getPointerId() {
        return pointerId;
    }

    public void setPointerId(String pointerId) {
        this.pointerId = pointerId;
    }

    public Point getFirstPoint() {
        return firstPoint;
    }

    public void setFirstPoint(Point firstPoint) {
        this.firstPoint = firstPoint;
    }

    public Point getThirdPoint() {
        return thirdPoint;
    }

    public void setThirdPoint(Point thirdPoint) {
        this.thirdPoint = thirdPoint;
    }

    public RectangleArea generateRectangleArea(Node node) {
        RectangleArea rectangle = new RectangleArea();
        NodeList nodeList = node.getChildNodes();
        Element element = (Element) nodeList.item(1);
        String pathFromRoot = element.getAttribute("value");
        rectangle.setPathFromRoot(pathFromRoot);
        rectangle = absProperties(nodeList.item(3), rectangle);
        System.out.println(nodeList.item(3).getNodeName());
        return rectangle;
    }

    public RectangleArea absProperties(Node node, RectangleArea rectangle) {
        NodeList nodeList = node.getChildNodes();
        Point point = new Point();
        for (int i = 0; i < nodeList.getLength(); i++) {
            Node child = nodeList.item(i);
            if(child.getNodeName().equals("enable")){
                rectangle.setEnable(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("pointerId")){
                rectangle.setPointerId(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("firstPoint")){
                rectangle.setFirstPoint(point.genPoint(child));
            }else if(child.getNodeName().equals("thirdPoint")){
                rectangle.setThirdPoint(point.genPoint(child));
            }
        }
        return rectangle;
    }

    @Override
    public String toString() {
        return "RectangleArea{" +
                "enable='" + getEnable() + '\'' +
                ", pointerId='" + getPointerId() + '\'' +
                ", firstPoint=" + firstPoint +
                ", thirdPoint=" + thirdPoint +
                '}';
    }


}
