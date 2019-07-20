package arya.aut.ac.AgencyLinkedList;

/*
 *  Java Program to Implement Singly Linked List
 */

import javax.swing.*;
import java.util.ArrayList;
import java.util.Scanner;

/*  Class Node  */
class Node {
    protected String data;
    protected ArrayList<ArrayList> service;
    protected Node link;

    /*  Constructor  */
    public Node(String val, Object n) {
        link = null;
        data = val;
    }

    /*  Constructor  */
    public Node(String val, Node n) {
        data = val;
        link = n;

    }

    public void adToAgencyServices(ArrayList serviceName) {
        service.add(serviceName);
    }

    public ArrayList<ArrayList> getService() {
        return service;
    }

    public void setService(ArrayList<ArrayList> service) {
        this.service = service;
    }

    /*  Function to get link to next node  */
    public Node getLink() {
        return link;
    }

    /*  Function to set link to next Node  */
    public void setLink(Node n) {
        link = n;
    }

    /*  Function to get data from current Node  */
    public String getData() {
        return data;
    }

    /*  Function to set data to current Node  */
    public void setData(String d) {
        data = d;
    }
}

/* Class linkedList */
class linkedList {
    public int size;
    protected Node start;
    protected Node end;

    /*  Constructor  */
    public linkedList() {
        start = null;
        end = null;
        size = 0;
    }

    /*  Function to check if list is empty  */
    public boolean isEmpty() {
        return start == null;
    }

    /*  Function to get size of list  */
    public int getSize() {
        return size;
    }


    /*  Function to insert an element at begining  */
    public void insertAtStart(String val) {
        Node nptr = new Node(val, null);
        size++;
        if (start == null) {
            start = nptr;
            end = start;
        } else {
            nptr.setLink(start);
            start = nptr;
        }
    }

    /*  Function to insert an element at end  */
    public void insertAtEnd(String val) {
        Node nptr = new Node(val, null);
        size++;
        if (start == null) {
            start = nptr;
            end = start;
        } else {
            end.setLink(nptr);
            end = nptr;
        }
    }
    public void insertAtPos(String val , int pos)
    {
        Node nptr = new Node(val, null);
        Node ptr = start;
        pos = pos - 1 ;
        for (int i = 1; i < size; i++)
        {
            if (i == pos)
            {
                Node tmp = ptr.getLink() ;
                ptr.setLink(nptr);
                nptr.setLink(tmp);
                break;
            }
            ptr = ptr.getLink();
        }
        size++ ;
    }
    /*  Function to delete an element at position  */
    public void deleteAtPos(int pos)
    {
        if (pos == 1)
        {
            start = start.getLink();
            size--;
            return ;
        }
        if (pos == size)
        {
            Node s = start;
            Node t = start;
            while (s != end)
            {
                t = s;
                s = s.getLink();
            }
            end = t;
            end.setLink(null);
            size --;
            return;
        }
        Node ptr = start;
        pos = pos - 1 ;
        for (int i = 1; i < size - 1; i++)
        {
            if (i == pos)
            {
        Node tmp = ptr.getLink();
                tmp = tmp.getLink();
                ptr.setLink(tmp);
                break;
            }
            ptr = ptr.getLink();
        }
        size-- ;
    }
    public void display() {

        System.out.print("\nAgency List = ");
        if (size == 0) {
            JFrame empty = new JFrame("empty");
            JLabel empty1;
            empty1 = new JLabel("Empty");
            empty1.setBounds(30, 30, 200, 30);
            empty.add(empty1);
            empty1.setSize(200, 150);
            empty.setVisible(true);
            System.out.print("empty\n");
            return;
        }
        if (start.getLink() == null) {
            System.out.println(start.getData() + "\n" + start.getService());
            return;
        }
        Node ptr = start;
        System.out.print(start.getData() + "(" + start.getService() + ")" + "->");
        ptr = start.getLink();
        while (ptr.getLink() != null) {
            System.out.print(ptr.getData() + "(" + start.getService() + ")" + "->");
            ptr = ptr.getLink();
        }
        System.out.print(ptr.getData() + "(" + start.getService() + ")" + "\n");
    }
}

/*  Class SinglyLinkedList  */


class SinglyLinkedList {
    public static void main(String[] args) {

        // a jframe here isn't strictly necessary, but it makes the example a little more real
        JFrame frame = new JFrame("gui");
        // prompt the user to enter their name
        String name = JOptionPane.showInputDialog(frame, "What's your name?");
        // get the user's input. note that if they press Cancel, 'name' will be null
        System.out.printf("The user's name is '%s'.\n", name);


        Scanner scan = new Scanner(System.in);
        /* Creating object of class linkedList */
        linkedList list = new linkedList();
        System.out.println("Agency List \n");
        char ch;
        /*  Perform list operations  */
        do {
            System.out.println("\nAgency List Operations\n");
            System.out.println("1. insert agency at begining");
            System.out.println("2. insert agency at end");
            System.out.println("3. check empty");
            System.out.println("4. Number of Dealers");
            System.out.println("5. Insert At Pos");
            System.out.println("6. Delete At Pos");
            int choice = scan.nextInt();
            switch (choice) {
                case 1:

                    // a jframe here isn't strictly necessary, but it makes the example a little more real
                    JFrame insert = new JFrame("gui");
                    // prompt the user to enter their name
                    String insertAgencyAtBegining = JOptionPane.showInputDialog(frame, "Insert agency At Begining");
                    // get the user's input. note that if they press Cancel, 'name' will be null
                    //System.out.println("Enter agency name to insert");
                    list.insertAtStart(insertAgencyAtBegining);


                    break;
                case 2:
                    JFrame insertE = new JFrame("gui");
                    String insertAgencyAtEnd = JOptionPane.showInputDialog(frame, "Insert agency At End");
                    //System.out.println("Enter agency element to insert At End");
                    list.insertAtEnd(insertAgencyAtEnd);
                    break;
//
                case 3:
                    JFrame EmptyStatus = new JFrame("Empty Status");
                    JLabel EmptyStatus1;
                    JLabel EmptyStatus2;
                    EmptyStatus1 = new JLabel("Empty status :");
                    //EmptyStatus;
                    EmptyStatus1.setBounds(30, 30, 200, 30);
                    EmptyStatus2 = new JLabel(String.valueOf(list.isEmpty()));
                    EmptyStatus2.setBounds(30, 80, 200, 30);
                    EmptyStatus.add(EmptyStatus1);
                    EmptyStatus.add(EmptyStatus2);
                    EmptyStatus.setSize(300, 200);
                    EmptyStatus.setLayout(null);
                    EmptyStatus.setVisible(true);

                    //System.out.println("Empty status = " + list.isEmpty());
                    break;
                case 4:
                    JFrame NumberOfDealers = new JFrame("Number of Dealers");
                    JLabel NumberOfDealers1;
                    JLabel NumberOfDealers2;
                    NumberOfDealers1 = new JLabel("Number of Dealers :");
                    NumberOfDealers1.setBounds(30, 30, 200, 30);
                    NumberOfDealers2 = new JLabel(String.valueOf(list.getSize()));
                    NumberOfDealers2.setBounds(30, 80, 200, 30);
                    NumberOfDealers.add(NumberOfDealers1);
                    NumberOfDealers.add(NumberOfDealers2);
                    NumberOfDealers.setSize(300, 200);
                    NumberOfDealers.setLayout(null);
                    NumberOfDealers.setVisible(true);

                    System.out.println("Size = " + list.getSize() + " \n");
                    break;

                case 5:
                    System.out.println("Enter integer element to insert");
                    String num = scan.next() ;
                    System.out.println("Enter position");
                    int pos = scan.nextInt() ;
                    if (pos <= 1 || pos > list.getSize() )
                        System.out.println("Invalid position\n");
                    else
                        list.insertAtPos(num, pos);
                    break;
                case 6:
                    System.out.println("Enter position");
                    int p = scan.nextInt() ;
                    if (p < 1 || p > list.getSize() )
                        System.out.println("Invalid position\n");
                    else
                        list.deleteAtPos(p);
                    break;
                default:
                    JFrame WrongEntry = new JFrame("Wrong Entry");
                    JLabel WrongEntry1;
                    WrongEntry1 = new JLabel("Number of Dealers :");
                    WrongEntry1.setBounds(30, 30, 200, 30);
                    WrongEntry.add(WrongEntry1);
                    WrongEntry1.setSize(200, 150);
                    WrongEntry.setVisible(true);

                    //System.out.println("Wrong Entry \n ");
                    break;
            }
            /*  Display List  */
            list.display();
            System.out.println("\nDo you want to continue (Type y or n) \n");
            ch = scan.next().charAt(0);
        } while (ch == 'Y' || ch == 'y');
    }
}