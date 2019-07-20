package smid;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public Scanner input = new Scanner(System.in);
    public Agency<String> agency = new Agency<>();

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        while (true) {
            System.out.println("1-Agency");
            System.out.println("2-Service");
            System.out.println("3-Sub Service");

            System.out.println("Select :");
            int select = scanner.nextInt();
            if (select == 9)
                break;
            new Main().select(select);
        }

    }

    public void select(int num) {
            switch (num) {
                case 1:
                    while (true) {
                        String ag;
                        System.out.println("Agency : ");
                        System.out.println("1-add");
                        System.out.println("2-list");
                        System.out.println("Select :(for exit,press 3)");
                        int s = input.nextInt();
                        if (s == 1) {

                            System.out.println("Enter agency name :");
                            ag = input.next();
                            agency.add(ag);
                            System.out.println("\n");

                        }

                        if (s == 2) {
                            agency.print();
                            System.out.println("\n");
                        }
                        if (s == 3) {
                            break;
                        }

                    }
                case 2:
                    while (true) {
                        System.out.println("Service");
                        System.out.println("1-add");
                        System.out.println("2-remove");
                        System.out.println("3-list");
                        System.out.println("Select : (for exit,press 4)");
                        int s = input.nextInt();
                        if (s == 1) {
                            agency.print();
                            System.out.println("\n" + "Select an agency :");
                            String agencyName = input.next();
                            if (agency.search(agencyName)) {
                                System.out.println("doroste");

                            } else System.out.println("ghalate");
                        }
                        if (s == 2) {
                        }
                        if (s == 3) {
                        }
                        if (s == 4) {
                            break;
                        }
                    }
                case 3:
                    break;
            }

    }

}

