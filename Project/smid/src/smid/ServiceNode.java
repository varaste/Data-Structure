package smid;


public class ServiceNode<T> {

    private ServiceNode next;
    private ServiceNode dlink;
    private String name;
    private String model;
    private String des;
    private String techDes;
    private int cost;

    public ServiceNode(){

    }

    public ServiceNode getNext() {
        return next;
    }

    public void setNext(ServiceNode next) {
        this.next = next;
    }

    public ServiceNode getDlink() {
        return dlink;
    }

    public void setDlink(ServiceNode dlink) {
        this.dlink = dlink;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public String getDes() {
        return des;
    }

    public void setDes(String des) {
        this.des = des;
    }

    public String getTechDes() {
        return techDes;
    }

    public void setTechDes(String techDes) {
        this.techDes = techDes;
    }

    public int getCost() {
        return cost;
    }

    public void setCost(int cost) {
        this.cost = cost;
    }
}
