package arya.aut.ac.PMain;


public class Service11 {

    private String name;
    private String model;
    private String des;
    private String techDes;
    private int cost;

    public String getName() {
        return name;
    }

    public String getModel() {
        return model;
    }

    public String getDes() {
        return des;
    }

    public String getTechDes() {
        return techDes;
    }

    public int getCost() {
        return cost;
    }

    public Service11(String n, String m, String d, String td, int c) {

        name = n;
        model = m;
        des = d;
        techDes = td;
        cost = c;

    }

//ArrayList<Service> services = new ArrayList<>();
//
//    private void addService(Service s) {
//
//        class Node {
//
//            String ServiceName;
//            String CarModel;
//            String DescriptionForCustomer;
//            String TechnicalDescriptionsForDealers;
//            String CompanyFees;
//            Node next;
//            Node child;
//
//            Node(String d) {
//                ServiceName = d;
//                next = child = null;
//            }
//        }
//        services.add(s);
//    }







}
