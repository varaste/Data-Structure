package arya.aut.ac.PMain;

import javax.swing.*;

public class Main {

    public static void main(String[] args) {
        System.out.println("1 add service <Service_Name>");
        System.out.println("2 add subservice <Subservice_Name> to <Service_Name>");
        System.out.println("3 add offer <Service_Name> to <Agency_Name>");
        System.out.println("4 delete <Service_Name> from <Agency_Name>");
        System.out.println("5 add agency <Agency_Name>");
        System.out.println("6 list agencies");
        System.out.println("7 list services");
        System.out.println("8 list services from <Service_Name>");
        System.out.println("9 order <Service_Name> to <Agency_Name> by \n" + "<Customer_Name> with <Immediacy_Level>");
        System.out.println("10 list orders <Agency_Name>");
        System.out.println("11 Exit");
        String selectMenu;
        selectMenu = JOptionPane.showInputDialog("Enter an integer: \n");
        int x1 = Integer.parseInt(selectMenu);
        System.out.println("You select " + selectMenu + ".");


        switch (selectMenu) {
            case "1":// Statements
                       addService();


                break; // optional


            case "2":// Statements
                break; // optional

            case "3":// Statements
                break; // optional

            case "4":// Statements
                break; // optional

            case "5":// Statements

                addAgancy();
                break; // optional

            case "6":// Statements
                break; // optional

            case "7":// Statements
                break; // optional

            case "8":// Statements
                break; // optional

            case "9":// Statements
                break; // optional

            case "10":// Statements
                break; // optional

            case "11":// Statements
                break; // optional

            // You can have any number of case statements.
            default: // Optional
                // Statements
        }

//        System.out.println("Enter an integer: " );
//        int menuNum=menu.nextInt();
//        System.out.println("You select "+ menuNum + ".");


    }

    private static void addService() {
    }

    private static void addAgancy() {
    }


}

