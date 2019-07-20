package arya.aut.ac.ServiceList;


import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

class RadioButtonSelectMenu extends JFrame implements ActionListener {
    JRadioButton rb1, rb2, rb3, rb4, rb5, rb6;
    JButton b;
    ServiceNode firstNode = new ServiceNode();
   ServiceNode currentNode = new ServiceNode();
    boolean mojod;


    RadioButtonSelectMenu() {
        rb1 = new JRadioButton("1. add service <Service_Name>");
        rb1.setBounds(100, 50, 400, 30);
        rb2 = new JRadioButton("2. add subservice <Subservice_Name> to <Service_Name>");
        rb2.setBounds(100, 100, 400, 30);
        rb3 = new JRadioButton("3. delete <Service_Name> from <Agency_Name>");
        rb3.setBounds(100, 150, 400, 30);
        rb4 = new JRadioButton("4. list services");
        rb4.setBounds(100, 200, 400, 30);
        rb5 = new JRadioButton("5. list services from <Service_Name>");
        rb5.setBounds(100, 250, 400, 30);
        rb6 = new JRadioButton("Exit");
        rb6.setBounds(100, 300, 400, 30);

        ButtonGroup bg = new ButtonGroup();
        bg.add(rb1);
        bg.add(rb2);
        bg.add(rb3);
        bg.add(rb4);
        bg.add(rb5);
        bg.add(rb6);
        b = new JButton("Select");
        b.setBounds(600, 150, 160, 60);
        b.addActionListener(this);
        add(rb1);
        add(rb2);
        add(rb3);
        add(rb4);
        add(rb5);
        add(rb6);
        add(b);
        setSize(800, 500);
        setLayout(null);
        setVisible(true);
    }

    public static void main(String args[]) {
        new RadioButtonSelectMenu();
    }

    private boolean searchServices1(String ServicesSearch, ServiceNode firstNode) {

        if (currentNode == null) {
            return mojod;
        }
        if (ServicesSearch.equals(currentNode.getFeatures()[0])) {
            mojod = true;

            System.out.println(mojod);

            return mojod;

        } else if (currentNode.getChild() != null) {
            return searchServices1(ServicesSearch, currentNode.getChild());
        } else if (currentNode.getLink() != null) {

            return searchServices1(ServicesSearch, currentNode.getLink());
        }
        mojod = false;
        System.out.println(mojod);
        return mojod;

    }

    public void searchServices(String ServicesSearch) {
        searchServices1(ServicesSearch, firstNode);
    }

    public void actionPerformed(ActionEvent e) {
        if (rb1.isSelected()) {

            JOptionPane.showMessageDialog(this, "add service");


            JFrame f2 = new JFrame("Servicechoice");
            String addFService = JOptionPane.showInputDialog(f2,
                    "What's Service Name?\n",
                    "Enter Service Name");

            ArrayList<String> servArrayList = new ArrayList<>();


            ServiceNode ptrNode = new ServiceNode();
            servArrayList.add(addFService);
            servArrayList.toArray().toString();

            if (firstNode.getLink() == null) {
                firstNode.features[0] = addFService;

                System.out.println(firstNode.features[0] + "," + firstNode.features[1]);
            }

            if (firstNode.getLink() != null) {
                firstNode.setLink(currentNode);
                currentNode.features[0] = addFService;
                System.out.println(currentNode.features[0]);


            }

            ServiceNode nodePtr = new ServiceNode(addFService, null, null);


//            public void insertAtStart(String val) {
//                Node nptr = new Node(val, null);
//                size++;
//                if (start == null) {
//                    start = nptr;
//                    end = start;
//                } else {
//                    nptr.setLink(start);
//                    start = nptr;
//                }
//            }
//        }


//            if (firstNode.getLink() == null) {
//                firstNode.setLink(currentNode);
//                currentNode.features[0] = addFService;
//                System.out.println(currentNode.features[0]);
//            } else {
//                ServiceNode tempNode = new ServiceNode();
//                currentNode.setLink(tempNode);
//
//                if (currentNode != null) {
//                    tempNode.setLink(currentNode.getLink());
//                    currentNode.setLink(tempNode);
//                    tempNode.setFeatures(currentNode.getFeatures());
//                    currentNode.features[0] = addFService;
//                    System.out.println(currentNode.features[0]);
//
//                    ServiceNode
//                    System.out.println(firstNode.features[0]+"->");
//                    currentNode = firstNode.getLink();
//                    while (currentNode.getLink()!=null){
//                        System.out.println(currentNode.features[0]);
//                        currentNode=currentNode.getLink();
//                    }


//                    Node ptr = start;
//                    System.out.print(start.getData()+ "->");
//                    ptr = start.getLink();
//                    while (ptr.getLink() != null)
//                    {
//                        System.out.print(ptr.getData()+ "->");
//                        ptr = ptr.getLink();
//                    }
//                    System.out.print(ptr.getData()+ "\n");}

            if (rb2.isSelected()) {
                JOptionPane.showMessageDialog(this, "ServicesSearch");
//            JFrame f3 = new JFrame("Servicechoice");
//            String ServicesSearch = JOptionPane.showInputDialog(f3,
//                    "What's Service Name?\n",
//                    "Enter Service Name");
//            if (firstNode == null) {
//                JOptionPane.showMessageDialog(this, "Null list");
//            }
//            if (currentNode.getFeatures()[0] == ServicesSearch) {
//                mojod = true;
//            }
//            if (ServicesSearch.equalsIgnoreCase(currentNode.getFeatures()[0])) {
//                mojod = true;
//            } else if (currentNode.getLink() != null) {
//
//            } else if (currentNode.getChild() != null) {
//            }
//


            }
            if (rb3.isSelected()) {
                JOptionPane.showMessageDialog(this, "You are 3");
                JFrame f3 = new JFrame("Servicechoice");
                String ServicesSearch = JOptionPane.showInputDialog(f3,
                        "What's Service Name?\n",
                        "Enter Service Name");
                searchServices(ServicesSearch);
            }


            if (rb4.isSelected()) {
                JOptionPane.showMessageDialog(this, "You are 4");


            }
            if (rb5.isSelected()) {
                JOptionPane.showMessageDialog(this, "You are 5");

            }
            if (rb6.isSelected()) {
                JOptionPane.showMessageDialog(this, "You are 6");

            }


        }
    }}