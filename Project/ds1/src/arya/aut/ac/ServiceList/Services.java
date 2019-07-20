package arya.aut.ac.ServiceList;


public class Services {
    ServiceNode first;


    public static void main(String[] args) {

        /*System.out.println("\nService List\n ");
        System.out.println("1. add service <Service_Name>");
        System.out.println("2. add subservice <Subservice_Name> to <Service_Name>");
        System.out.println("3. delete <Service_Name> from <Agency_Name>");
        System.out.println("4. list services");
        System.out.println("5. list services from <Service_Name>");


        JFrame f1 = new JFrame("Servicechoice");
        String Servicechoice = JOptionPane.showInputDialog(f1,
                "What's your Choice?\n",
                "Enter Number");
        System.out.println("you select : "+ Servicechoice);



        switch (Servicechoice){
            case "1":
                ServiceNode asd = new ServiceNode(1,1,sasa,as,)



        }*/


//        Scanner scanner1 = new Scanner(System.in);
//        String scan=scanner1.next();
//        ServiceNode.features=scan;
//        System.out.println(ServiceNode.features[1]);


//        switch (Servicechoice) {
//            case "1":
//                if (first == null) {
//                    JFrame addS1 = new JFrame("gui");
//                    String namefeatures = JOptionPane.showInputDialog(addS1,
//                            "add service ",
//                            "<Service_Name>");
//
//
//                }
//
//                break;
//            case "2":
//                break;
////
//            case "3":
//
//                break;
//            case "4":
//
//                break;
//            default:
//
//        }


//        if(first!=null){
//
//        }


    }

    public void addService_subService(ServiceNode serviceNode, ServiceNode first1) {
        ServiceNode addFirst = first1;
        if (first1 == null) {
            first1 = serviceNode;
        } else {
            ServiceNode template = null;
            while (addFirst != null) {
                template = addFirst;
                addFirst = addFirst.getLink();
            }
            template.setLink(serviceNode);
            serviceNode.setLink(null);
        }
    }

    private ServiceNode searchServices1(String service_subService_name, ServiceNode current) {
        if (current == null) {
            return null;
        }
        if (service_subService_name.equals(current.getFeatures()[0])) {
            return current;
        } else if (current.getChild() != null) {
            return searchServices1(service_subService_name, current.getChild());
        } else if (current.getLink() != null) {
            return searchServices1(service_subService_name, current.getLink());
        }
        return null;

    }


    public void searchServices(String service_subService_name) {
        searchServices1(service_subService_name, first);
    }

    public void deleteService(String serviceName) {
        ServiceNode currentNode = first;
        ServiceNode template = null;
        while (currentNode != null) {
            if (serviceName.equals(currentNode.getFeatures()[0])) {
                if (template != null) template.setLink(currentNode.getLink());
                else first = currentNode.getLink();
                currentNode = null;
                return;
            }
        }
    }

    public void addSubService(String subServiceName, String mainServiceName) {
        ServiceNode currentNode = first;
        ServiceNode template = null;
//        while (currentNode != null) {
//            if (mainServiceName.equals(currentNode.getFeatures()[0])) {
//                break;
//            }
//            template = currentNode;
//            currentNode = currentNode.getLink();
//        }
//        String[] features = {subServiceName, "car_model", "customerDefenitions", "agency_descriptions", "1000"};
//        ServiceNode subServiceNode = new ServiceNode(1, features, null, null);
//        if (currentNode.getChild() == null) {
//            currentNode.setChild(subServiceNode);
//        }
//        if (currentNode.getChild() != null) {
//            addService_subService(subServiceNode, currentNode.getChild());
//        }
//
//        return;
        searchServices(mainServiceName);
    }

//    public ServiceNode display(ServiceNode) {
//        System.out.println("\nService List\n ");
//        System.out.println("1. add service <Service_Name>");
//        System.out.println("2. add subservice <Subservice_Name> to <Service_Name>");
//        System.out.println("3. delete <Service_Name> from <Agency_Name>");
//        System.out.println("4. list services");
//        System.out.println("5. list services from <Service_Name>");
//
//
//        JFrame f1 = new JFrame("Servicechoice");
//        String Servicechoice = JOptionPane.showInputDialog(f1,
//                "What's your Choice?\n",
//                "Enter Number");
//        System.out.println("you select : " + Servicechoice);
//
//
//        switch (Servicechoice) {
//            case "1":
//
//
//        }
//
//return first;
//
//    }
}