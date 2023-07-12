/*7.	Write a program in C to calculate and print the Electricity bill of a given customer. 
The customer id., name and unit consumed by the user should be taken from the keyboard and display 
the total amount to pay to the customer. The charge are as follow 
Unit	Charge/unit
upto 199 	@1.20
200 and above but less than 400 	@1.50
400 and above but less than 600	@1.80
600 and above 	@2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-
*/
#include <stdio.h>
#include <string.h>
int main() {
    int c_id, unit;
    float total_charges, surcharge = 0;
    char c_name[30];

    printf("Enter customer ID: ");
    scanf("%d", &c_id);

    printf("Enter customer name: ");
    scanf("%s", c_name);

    printf("Enter unit consumed: ");
    scanf("%d", &unit);

    if (unit <= 199) {
        total_charges = unit * 1.20;
    } else if (unit >= 200 && unit < 400) {
        total_charges = unit * 1.50;
    } else if (unit >= 400 && unit < 600) {
        total_charges = unit * 1.80;
    } else {
        total_charges = unit * 2.00;
    }

    if (total_charges > 400) {
        surcharge = total_charges * 0.15;
    }

    total_charges= total_charges + surcharge;

    if (total_charges< 100) {
        total_charges= 100;
    }

    printf("\nCustomer ID : %d\n", c_id);
    printf("Customer Name : %s\n", c_name);
    printf("Unit Consumed : %d\n", unit);
    printf("Total Charges : Rs. %f\n", total_charges);

    return 0;
}

