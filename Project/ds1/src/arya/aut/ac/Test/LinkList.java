package arya.aut.ac.Test;
 //Java program to flatten linked list with next and child pointers

class LinkedList {

    static Node head;

    class Node {

        String ServiceName;
        String CarModel;
        String DescriptionForCustomer;
        String TechnicalDescriptionsForDealers;
        String CompanyFees;
        Node next;
        Node child;

        Node(String d) {
            ServiceName = d;
            next = child = null;
        }
    }

    // A utility function to create a linked list with n nodes. The data
    // of nodes is taken from arr[]. All child pointers are set as NULL
    Node createList(String arr[], int n) {
        Node node = null;
        Node p = null;

        int i;
        for (i = 0; i < n; ++i) {
            if (node == null) {
                node = p = new Node(arr[i]);
            } else {
                p.next = new Node(arr[i]);
                p = p.next;
            }
            p.next = p.child = null;
        }
        return node;
    }

    // A utility function to print all nodes of a linked list
    void printList(Node node) {
        while (node != null) {
            System.out.print(node.ServiceName + " \n");
            node = node.next;
        }
        System.out.println("");
    }

    Node createList() {
        String MainServices[] = new String[]{"EngineService\n", "InsideTheCarService\n",
                "CarBodyServices\n", "ControlAndMovement\n", "RinseAndClean\n"};

        String EngineService[] = new String[]{"ReplacingEngineOil", "AirFilterReplacement", "SwapCandles"};

        String InsideTheCarService[] = new String[]{"c1", "c2"};
        String CarBodyServices[] = new String[]{"d1", "d2"};
        String ControlAndMovement[] = new String[]{"e1", "e2"};
        String RinseAndClean[] = new String[]{"f1"};
//        String ReplacingEngineOil[] = new String[]{"g1"};
//        String AirFilterReplacement[] = new String[]{"h1"};

		/* create 8 linked lists */
        Node m0 = createList(MainServices, MainServices.length);
        Node m1 = createList(EngineService, EngineService.length);
        Node m2 = createList(InsideTheCarService, InsideTheCarService.length);
        Node m3 = createList(CarBodyServices, CarBodyServices.length);
        Node m4 = createList(ControlAndMovement, ControlAndMovement.length);
        Node m5 = createList(RinseAndClean, RinseAndClean.length);
//        Node s1m1 = createList(ReplacingEngineOil, ReplacingEngineOil.length);
//        Node s2m1 = createList(AirFilterReplacement, AirFilterReplacement.length);

		/* modify child pointers to create the list shown above */

        m0.child = m1;
        m1.child= m2;




//        m0.next.child = m2;
//        m0.next.next.child = m3;
//        m0.next.next.next.child = m4;
//        m0.next.next.next.next.child = m5;
//        m1.child =s1m1;
//        m0.next.next.next.child = m2;
//        m2.child = m3;
//        m3.child = m4;
//        m1.next.child = m5;


		/* Return head pointer of first linked list. Note that all nodes are
		reachable from m0 */
        return m0;
    }

    /* The main function that flattens a multilevel linked list */
    void flattenList(Node node) {

		/*Base case*/
        if (node == null) {
            return;
        }

        Node tmp = null;

		/* Find tail node of first level linked list */
        Node tail = node;
        while (tail.next != null) {
            tail = tail.next;
        }

        // One by one traverse through all nodes of first level
        // linked list till we reach the tail node
        Node cur = node;
        while (cur != tail) {

            // If current node has a child
            if (cur.child != null) {

                // then append the child at the end of current list
                tail.next = cur.child;

                // and update the tail to new last node
                tmp = cur.child;
                while (tmp.next != null) {
                    tmp = tmp.next;
                }
                tail = tmp;
            }

            // Change current node
            cur = cur.next;
        }
    }

//    public static void main(String[] args) {
//        arya.aut.ac.PMain.LinkedList list = new arya.aut.ac.PMain.LinkedList();
//        head = list.createList();
//        list.flattenList(head);
//        list.printList(head);
//    }
}



