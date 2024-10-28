package xml.graph;

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
}
