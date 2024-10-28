package xml.graph;

import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

public class Point {
    private String x;
    private String y;

    public Point(String x, String y) {
        this.x = x;
        this.y = y;
    }

    public Point() {
    }

    public String getX() {
        return x;
    }

    public void setX(String x) {
        this.x = x;
    }

    public String getY() {
        return y;
    }

    public void setY(String y) {
        this.y = y;
    }

    public Point genPoint(Node node) {
        Point point = new Point();
        NodeList nodeList = node.getChildNodes();
        for (int i = 0; i < nodeList.getLength(); i++) {
            if(nodeList.item(i).getNodeName().equals("x")){
                String x = nodeList.item(i).getChildNodes().item(1).getTextContent();
                point.setX(x);
            }else if(nodeList.item(i).getNodeName().equals("y")){
                String y = nodeList.item(i).getChildNodes().item(1).getTextContent();
                point.setY(y);
            }
        }

        return point;
    }
}
