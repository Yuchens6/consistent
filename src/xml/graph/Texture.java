package xml.graph;

import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

import java.util.Objects;

public class Texture {
    private String horizAlign;
    private String horizPattern;
    private String vertAlign;
    private String vertPattern;
    private String textureId;

    public Texture(String horizAlign, String horizPattern, String vertAlign, String vertPattern, String textureId) {
        this.horizAlign = horizAlign;
        this.horizPattern = horizPattern;
        this.vertAlign = vertAlign;
        this.vertPattern = vertPattern;
        this.textureId = textureId;
    }

    public Texture() {
    }

    public String getHorizAlign() {
        return horizAlign;
    }

    public void setHorizAlign(String horizAlign) {
        this.horizAlign = horizAlign;
    }

    public String getHorizPattern() {
        return horizPattern;
    }

    public void setHorizPattern(String horizPattern) {
        this.horizPattern = horizPattern;
    }

    public String getVertAlign() {
        return vertAlign;
    }

    public void setVertAlign(String vertAlign) {
        this.vertAlign = vertAlign;
    }

    public String getVertPattern() {
        return vertPattern;
    }

    public void setVertPattern(String vertPattern) {
        this.vertPattern = vertPattern;
    }

    public String getTextureId() {
        return textureId;
    }

    public void setTextureId(String textureId) {
        this.textureId = textureId;
    }

    public Texture genTexture(Node node) {
        Texture texture = new Texture();
        Element element = (Element) node;
        texture.setHorizAlign(element.getAttribute("horizAlign"));
        texture.setHorizPattern(element.getAttribute("horizPattern"));
        texture.setVertAlign(element.getAttribute("vertAlign"));
        texture.setVertPattern(element.getAttribute("vertPattern"));
        NodeList children = element.getChildNodes();
        for (int i = 0; i < children.getLength(); i++) {
            if (children.item(i).getNodeName().equals("textureId")) {
                texture.setTextureId(children.item(i).getTextContent().trim());
            }
        }

        return texture;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Texture texture = (Texture) o;
        if (!horizAlign.equals(texture.horizAlign)){
            System.out.println("horizAlign is wrong");
            return false;
        }
        if (!horizPattern.equals(texture.horizPattern)){
            System.out.println("horizPattern is wrong");
            return false;
        }
        if (!vertAlign.equals(texture.vertAlign)){
            System.out.println("vertAlign is wrong");
            return false;
        }
        if (!vertPattern.equals(texture.vertPattern)){
            System.out.println("vertPattern is wrong");
            return false;
        }
        if (!textureId.equals(texture.textureId)){
            System.out.println("textureId is wrong"+textureId+texture.textureId);
            return false;
        }
        return true;
    }

    @Override
    public int hashCode() {
        return Objects.hash(horizAlign, horizPattern, vertAlign, vertPattern, textureId);
    }
}
