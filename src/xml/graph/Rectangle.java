package xml.graph;

import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

import java.util.LinkedList;
import java.util.Objects;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

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
        return rectangle;
    }

    public Rectangle generateRectangle(LinkedList<String> node) {
        Rectangle rectangle = new Rectangle();
        rectangle = absProperties(node, rectangle);
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

    private Rectangle absProperties(LinkedList<String> node, Rectangle rectangle){
        int len = node.size();
        Texture texture = new Texture();
        for (int i = 0; i < len; i++) {
            String[] child = node.get(i).split(" ");
            if(child.length>2){
                if(child[1].startsWith("firstPoint")){
                    Point point = new Point();
                    LinkedList<String> strs = absNum(child[3]);
                    System.out.println(child[3]);
                    point.setX(strs.get(0));
                    point.setY(strs.get(1));
                    rectangle.setFirstPoint(point);
                }
                else if(child[1].startsWith("thirdPoint")){
                    Point point = new Point();
                    LinkedList<String> strs = absNum(child[3]);
                    point.setX(strs.get(0));
                    point.setY(strs.get(1));
                    rectangle.setThirdPoint(point);
                }
                else if(child[0].endsWith("lineStipple")){
                    rectangle.setLineStipple(child[2].replace(";", ""));
                }
                else if(child[0].endsWith("lineCap")){

                    rectangle.setLineCap(child[2].replace("\"", "").replace(";", ""));
                }
                else if(child[0].endsWith("haloing")){
                    rectangle.setHaloing(child[2].replace(";", ""));
                }
                else if(child[0].endsWith("haloColor")){
                    rectangle.setHaloColor(child[2].replace(";", ""));
                }
                else if(child[0].endsWith("outlineColor")){
                    rectangle.setOutlineColor(child[2].replace(";", ""));
                }
                else if(child[0].endsWith("outlineOpacity")){
                    rectangle.setOutlineOpacity(child[2].replace(";", ""));
                }
                else if(child[0].endsWith("fillColor")){
                    rectangle.setFillColor(child[2].replace(";", ""));
                }
                else if(child[0].endsWith("fillOpacity")){
                    rectangle.setFillOpacity(child[2].replace(";", ""));
                }
                else if(child[0].endsWith("polygonSmooth")){
                    rectangle.setPolygonSmooth(child[2].replace(";", ""));
                }
                else if(child[0].endsWith("horizAlign")){
                    texture.setHorizAlign(child[2].replace("\"", "").replace(";", ""));
                }
                else if(child[0].endsWith("vertAlign")){
                    texture.setVertAlign(child[2].replace("\"", "").replace(";", ""));
                }
                else if(child[0].endsWith("horizPattern")){
                    texture.setHorizPattern(child[2].replace(";", ""));
                }
                else if(child[0].endsWith("vertPattern")){
                    texture.setVertPattern(child[2].replace(";", ""));
                }
                else if(child[0].endsWith("id")){
                    texture.setTextureId(child[2].replace(";", "").trim());
                }
                else if(child[0].endsWith("texture")){
                    rectangle.setTexture(texture);
                }
                else if(child[0].endsWith("modulate")){
                    rectangle.setModulate(child[2].replace(";", ""));
                }
                else if(child[0].endsWith("tessellate")){
                    rectangle.setTessellate(child[2].replace(";", ""));
                }
                else if(child[0].endsWith("lineWidth")){
                    rectangle.setLineWidth(child[2].replace(";", ""));
                }
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

    @Override
    public boolean equals(Object o) {
        if (!super.equals(o)) return false;
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Rectangle rectangle = (Rectangle) o;
        if(!firstPoint.equals(rectangle.firstPoint)){
            System.out.println("firstPoint is wrong"+firstPoint+rectangle.firstPoint);
            return false;
        }
        if(!thirdPoint.equals(rectangle.thirdPoint)){
            System.out.println("thirdPoint is wrong");
            return false;
        }
//        if(!fillColor.equals(rectangle.fillColor)){
//            System.out.println("fillColor is wrong");
//            return false;
//        }
        if(!fillOpacity.equals(rectangle.fillOpacity)){
            System.out.println("fillOpacity is wrong");
            return false;
        }
        if(!polygonSmooth.equals(rectangle.getPolygonSmooth())){
            System.out.println("polygonSmooth is wrong");
            return false;
        }
        if(!texture.equals(rectangle.texture)){
            System.out.println("texture is wrong");
            return false;
        }
        if (!modulate.equals(rectangle.modulate)){
            System.out.println("modulate is wrong");
            return false;
        }
        if(!tessellate.equals(rectangle.tessellate)){
            System.out.println("tessellate is wrong");
            return false;
        }
        return true;
    }

    @Override
    public int hashCode() {
        return Objects.hash(firstPoint, thirdPoint, fillColor, fillOpacity, polygonSmooth, texture, textureControl, modulate, tessellate);
    }

    private LinkedList<String> absNum(String str){
        Pattern pattern = Pattern.compile("(\\d+)");  // 匹配一个或多个数字
        Matcher matcher = pattern.matcher(str);
        LinkedList<String> list = new LinkedList<>();
        while (matcher.find()) {
            list.add(matcher.group(1));
        }
        return list;
    }
}
