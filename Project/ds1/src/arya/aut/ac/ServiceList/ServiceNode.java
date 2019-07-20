package arya.aut.ac.ServiceList;


public class ServiceNode<T> {
    public ServiceNode firstNode;
    protected String[] features = new String[5];
    int size;
    private int parentsNum;
    private int tag;
    private String name;
    private ServiceNode child;
    private ServiceNode link;

    ServiceNode(String name,ServiceNode link, ServiceNode child) {
        this.parentsNum = parentsNum;
        this.tag = tag;
        this.features = features;
        this.child = child;
        this.link = link;
        this.size = size;
    }

    public ServiceNode() {

    }

    public int getParentsNum() {
        return parentsNum;
    }

    public void setParentsNum(int parentsNum) {
        this.parentsNum = parentsNum;
    }

    public int getTag() {
        return tag;
    }

    public void setTag(int tag) {
        this.tag = tag;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String[] getFeatures() {
        return features;
    }

    public void setFeatures(String[] features) {
        this.features = features;
    }

    public ServiceNode getChild() {
        return child;
    }

    public void setChild(ServiceNode child) {
        this.child = child;
    }

    public ServiceNode getLink() {
        return link;
    }

    public void setLink(ServiceNode link) {
        this.link = link;
    }

    public int getSize() {
        return size;
    }

    public void setSize(int size) {
        this.size = size;
    }
}
