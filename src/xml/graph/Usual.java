package xml.graph;

import java.util.Objects;

public class Usual {
    private String pathFromRoot;
    private String visible;
    private String lineWidth;
    private String lineStipple;
    private String lineCap;
    private String haloing;
    private String haloColor;
    private String outlineColor;
    private String outlineOpacity;

    public Usual(String pathFromRoot, String visible, String lineWidth,
                 String lineStipple, String lineCap, String haloing,
                 String haloColor, String outlineColor, String outlineOpacity) {
        this.pathFromRoot = pathFromRoot;
        this.visible = visible;
        this.lineWidth = lineWidth;
        this.lineStipple = lineStipple;
        this.lineCap = lineCap;
        this.haloing = haloing;
        this.haloColor = haloColor;
        this.outlineColor = outlineColor;
        this.outlineOpacity = outlineOpacity;
    }

    public Usual(String pathFromRoot) {
        this.pathFromRoot = pathFromRoot;
    }

    public Usual() {
    }

    public String getPathFromRoot() {
        return pathFromRoot;
    }

    public void setPathFromRoot(String pathFromRoot) {
        this.pathFromRoot = pathFromRoot;
    }

    public String getVisible() {
        return visible;
    }

    public void setVisible(String visible) {
        this.visible = visible;
    }

    public String getLineWidth() {
        return lineWidth;
    }

    public void setLineWidth(String lineWidth) {
        this.lineWidth = lineWidth;
    }

    public String getLineStipple() {
        return lineStipple;
    }

    public void setLineStipple(String lineStipple) {
        this.lineStipple = lineStipple;
    }

    public String getLineCap() {
        return lineCap;
    }

    public void setLineCap(String lineCap) {
        this.lineCap = lineCap;
    }

    public String getHaloing() {
        return haloing;
    }

    public void setHaloing(String haloing) {
        this.haloing = haloing;
    }

    public String getHaloColor() {
        return haloColor;
    }

    public void setHaloColor(String haloColor) {
        this.haloColor = haloColor;
    }

    public String getOutlineColor() {
        return outlineColor;
    }

    public void setOutlineColor(String outlineColor) {
        this.outlineColor = outlineColor;
    }

    public String getOutlineOpacity() {
        return outlineOpacity;
    }

    public void setOutlineOpacity(String outlineOpacity) {
        this.outlineOpacity = outlineOpacity;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Usual usual = (Usual) o;
        if(!lineStipple.equals(usual.lineStipple)){
            System.out.println("lineStipple is wrong"+lineStipple+usual.lineStipple);
            return false;
        }
        if(!lineCap.equals(usual.lineCap)){
            System.out.println("lineCap is wrong");
            return false;
        }
        if(!haloColor.equals(usual.haloColor)){
            System.out.println("haloColor is wrong");
            return false;
        }
        if(!haloing.equals(usual.haloing)){
            System.out.println("haloing is wrong");
            return false;
        }
        if(!outlineOpacity.equals(usual.outlineOpacity)){
            System.out.println("outlineOpacity is wrong");
            return false;
        }
        if (!lineWidth.equals(usual.lineWidth)){
            System.out.println("lineWidth is wrong");
            return false;
        }
        return true;
//        return
//                Objects.equals(lineWidth, usual.lineWidth) &&
//                Objects.equals(lineStipple, usual.lineStipple) &&
//                Objects.equals(lineCap, usual.lineCap) &&
//                Objects.equals(haloing, usual.haloing) &&
//                Objects.equals(haloColor, usual.haloColor) &&
//                Objects.equals(outlineColor, usual.outlineColor) &&
//                Objects.equals(outlineOpacity, usual.outlineOpacity);
    }

    @Override
    public int hashCode() {
        return Objects.hash(pathFromRoot, visible, lineWidth, lineStipple, lineCap, haloing, haloColor, outlineColor, outlineOpacity);
    }
}
