package xml.graph;

import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

public class Rectangle extends Usual {
    private Point firstPoint;
    private Point thirdPoint;
    private String fillColor;
    private String fillOpacity;
    private String polygonSmooth;
    private Texture texture;
    private String textureControl;
    private String modulate;
    private String tessellate;

    public Rectangle(String pathFromRoot, String visible, String lineWidth, String lineStipple,
                     String lineCap, String haloing, String haloColor, String outlineColor,
                     String outlineOpacity, Point firstPoint, Point thirdPoint,
                     String fillColor, String fillOpacity, String polygonSmooth,
                     String textureControl, String tessellate, String modulate) {
        super(pathFromRoot, visible, lineWidth, lineStipple, lineCap, haloing, haloColor, outlineColor, outlineOpacity);
        this.firstPoint = firstPoint;
        this.thirdPoint = thirdPoint;
        this.fillColor = fillColor;
        this.fillOpacity = fillOpacity;
        this.polygonSmooth = polygonSmooth;
        this.textureControl = textureControl;
        this.tessellate = tessellate;
        this.modulate = modulate;
    }

    public Rectangle() {
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

    public String getFillColor() {
        return fillColor;
    }

    public void setFillColor(String fillColor) {
        this.fillColor = fillColor;
    }

    public String getFillOpacity() {
        return fillOpacity;
    }

    public void setFillOpacity(String fillOpacity) {
        this.fillOpacity = fillOpacity;
    }

    public String getPolygonSmooth() {
        return polygonSmooth;
    }

    public void setPolygonSmooth(String polygonSmooth) {
        this.polygonSmooth = polygonSmooth;
    }

    public String getTextureControl() {
        return textureControl;
    }

    public void setTextureControl(String textureControl) {
        this.textureControl = textureControl;
    }

    public String getModulate() {
        return modulate;
    }

    public void setModulate(String modulate) {
        this.modulate = modulate;
    }

    public String getTessellate() {
        return tessellate;
    }

    public void setTessellate(String tessellate) {
        this.tessellate = tessellate;
    }

    public Texture getTexture() {
        return texture;
    }

    public void setTexture(Texture texture) {
        this.texture = texture;
    }

    public Rectangle generateRectangle(Node node) {
        Rectangle rectangle = new Rectangle();
        NodeList nodeList = node.getChildNodes();
        Element element = (Element) nodeList.item(1);
        String pathFromRoot = element.getAttribute("value");
        rectangle.setPathFromRoot(pathFromRoot);
        rectangle = absProperties(nodeList.item(3), rectangle);
        System.out.println(nodeList.item(3).getNodeName());
        return rectangle;
    }

    public Rectangle absProperties(Node node, Rectangle rectangle) {
        NodeList nodeList = node.getChildNodes();
        Point point = new Point();
        Texture texture1 = new Texture();
        for (int i = 0; i < nodeList.getLength(); i++) {
            Node child = nodeList.item(i);
            if (child.getNodeName().equals("visible")){
                rectangle.setVisible(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("firstPoint")){
                rectangle.setFirstPoint(point.genPoint(child));
            }else if(child.getNodeName().equals("thirdPoint")){
                rectangle.setThirdPoint(point.genPoint(child));
            }else if(child.getNodeName().equals("lineWidth")){
                rectangle.setLineWidth(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("lineStipple")){
                rectangle.setLineStipple(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("lineCap")){
                rectangle.setLineCap(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("haloing")){
                rectangle.setHaloing(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("haloColor")){
                rectangle.setHaloColor(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("outlineColor")){
                rectangle.setOutlineColor(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("outlineOpacity")){
                rectangle.setOutlineOpacity(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("tessellate")){
                rectangle.setTessellate(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("fillColor")){
                rectangle.setFillColor(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("fillOpacity")){
                rectangle.setFillOpacity(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("polygonSmooth")){
                rectangle.setPolygonSmooth(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("textureControl")){
                rectangle.setTextureControl(child.getChildNodes().item(1).getTextContent());
            }else if(child.getNodeName().equals("texture")){
                rectangle.setTexture(texture1.genTexture(child));
            }else if(child.getNodeName().equals("modulate")){
                rectangle.setModulate(child.getChildNodes().item(1).getTextContent());
            }
        }

        return rectangle;
    }

    @Override
    public String toString() {
        return "Rectangle{" + getPathFromRoot() +
                "firstPoint=" + getFirstPoint() +
                ", thirdPoint=" + getThirdPoint() +
                ", fillColor='" + getFillColor() + '\'' +
                ", fillOpacity='" + getFillOpacity() + '\'' +
                ", polygonSmooth='" + getPolygonSmooth() + '\'' +
                ", texture=" + getTexture() +
                ", textureControl='" + getTextureControl() + '\'' +
                ", modulate='" + getModulate() + '\'' +
                ", tessellate='" + getTessellate() + '\'' +
                '}';
    }
}
