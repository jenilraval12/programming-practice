/*Day 2 - Electricity Bill Calculator

Problem Statement:
Write a Java program that accepts a customer's name, customer ID,
and the number of electricity units consumed. Calculate the
electricity bill based on the applicable unit slab and display
the customer's details along with the final bill amount.

Requirements:
- Accept customer details and units using Scanner.
- Validate that the number of units is not negative.
- Calculate the bill using if-else if-else conditions.
- Apply the following rates:
  0-100 units    : ₹2 per unit
  101-200 units  : ₹3 per unit
  201-300 units  : ₹4 per unit
  Above 300      : ₹5 per unit
- Display the customer details, units consumed, and bill amount.

Example:
Enter Customer Name: Jenil
Enter Customer ID: 101
Enter Units Consumed: 250

----- Electricity Bill -----
Customer Name : Jenil
Customer ID   : 101
Units         : 250
Bill Amount   : ₹700.0
 */

import java.util.Scanner;

public class Day02_ElectricityBillCalculator {
    public static void main(String[] args) {

        String userName;
        int customerId;
        int units = 0;
        float amount = 0;
        int originalUnits;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Customer Name: ");
        userName = sc.nextLine();
        System.out.print("Enter Customer Id: ");
        customerId = sc.nextInt();

        do {
            System.out.print("Enter Units Consumed: ");
            units = sc.nextInt();
            if (units < 0) {
                System.out.println("Units Cannot be Negative!");
            }
        } while (units < 0);

        originalUnits = units;

        do {
            if (units > 300) {
                amount += ((units - 300) * 5);
                units = units - (units - 300);
            } else if (units > 200 && units <= 300) {
                amount += ((units - 200) * 4);
                units = units - (units - 200);
            } else if (units > 100 && units <= 200) {
                amount += ((units - 100) * 3);
                units = units - (units - 100);
            } else if (units > 0 && units <= 100) {
                amount += ((units) * 2);
                units = 0;
            }
        } while (units != 0);

        System.out.println("----- Electricity Bill -----");
        System.out.println("Customer Name : " + userName);
        System.out.println("Customer ID   : " + customerId);
        System.out.println("Units         : " + originalUnits);
        System.out.println("Bill Amount   : " + amount);

        sc.close();
    }
}