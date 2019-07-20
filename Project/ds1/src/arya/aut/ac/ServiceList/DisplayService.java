package arya.aut.ac.ServiceList;

import javax.swing.*;
import java.util.Scanner;

public class DisplayService {

    public static void main(String[] args) {

        new RadioButtonSelectMenu();




        JFrame f;

            f=new JFrame();
            JRadioButton r1=new JRadioButton("A) Male");
            JRadioButton r2=new JRadioButton("B) Female");
            r1.setBounds(75,50,100,30);
            r2.setBounds(75,100,100,30);
            ButtonGroup bg=new ButtonGroup();
            bg.add(r1);bg.add(r2);
            f.add(r1);f.add(r2);
            f.setSize(300,300);
            f.setLayout(null);
            f.setVisible(true);


//////////////////////////////////////////////////////////////////////////////////////////////////////////////
        char ch;
     //     Perform list operations
        do {
        System.out.println("\nService List\n ");
        System.out.println("1. add service <Service_Name>");
        System.out.println("2. add subservice <Subservice_Name> to <Service_Name>");
        System.out.println("3. delete <Service_Name> from <Agency_Name>");
        System.out.println("4. list services");
        System.out.println("5. list services from <Service_Name>");


        JFrame f1 = new JFrame("Servicechoice");
        String Servicechoice = JOptionPane.showInputDialog(f1,
                "What's your Choice?\n",
                "Enter Number");
        System.out.println("you select : " + Servicechoice);


        switch (Servicechoice) {
            case "1":
                JFrame f2 = new JFrame("Servicechoice");
                String addFService = JOptionPane.showInputDialog(f2,
                        "What's Service Name?\n",
                        "Enter Service Name");
                ServiceNode firstNode = new ServiceNode();
                ServiceNode currentNode = new ServiceNode();
                if (firstNode.getLink() == null) {
                    firstNode.setLink(currentNode);
                    currentNode.features[0] = addFService;
                    System.out.println(currentNode.features[0]);
                } else {
                    ServiceNode tempNode = new ServiceNode();
                    currentNode.setLink(tempNode);
                    if (currentNode != null) {
                        tempNode.setLink(currentNode.getLink());
                        currentNode.setLink(tempNode);
                        tempNode.setFeatures(currentNode.getFeatures());
                        currentNode.features[0] = addFService;
                        System.out.println(currentNode.features[0]);
                    }
                }
//                JFrame f2 = new JFrame("Servicechoice");
//                String addFService = JOptionPane.showInputDialog(f2,
//                        "What's Service Name?\n",
//                        "Enter Service Name");
//                addFirst.features[0] = addFService;
//                System.out.println();
//
//
//                System.out.println(addFirst.getName());
//                System.out.println(addFirst.getFeatures()[0]);
            case "2":


        }
            Scanner scan=new Scanner(System.in);
            System.out.println("\nDo you want to continue (Type y or n) \n");
            ch = scan.next().charAt(0);
        } while (ch == 'Y' || ch == 'y');
        /////////////////////////////////////////////////////////////////////////////////////////////////////////
    }


}
