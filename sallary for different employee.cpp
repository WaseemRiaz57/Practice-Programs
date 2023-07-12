/*Calculating Weekly Pay) 
A company pays its employees as managers (who receive a fixed weekly salary), hourly workers (who receive a fixed hourly wage for up to the first 40 hours they work and “time-and-a-half”—i.e., 1.5 times their hourly wage—for overtime hours worked), commission workers (who receive $250 plus 5.7% of their gross weekly sales), or pieceworkers (who receive a fixed amount of money for each of the items they produce—each pieceworker in this
company works on only one type of item). Write a program to compute the weekly pay for each employee. You do not know the number of employees in advance. Each type of employee has its own pay code: Managers have paycode 1, hourly workers have code 2, commission workers have code 3 and pieceworkers have code 4. Use a switch to compute each employee’s pay based on that employee’s paycode. Within the switch, prompt the user (i.e., the payroll clerk) to enter the appropriate facts your program needs to calculate each employee’s pay based on that employee’s paycode.

[Note: You can input values of type double using the conversion specifier %lf with scanf.]*/
#include <stdio.h>

int main(void)
{
    int x,paycode;
    double salary, hourly_wage, hours_worked, overtime_pay, gross_sales, commission, piece_rate, items_produced, total_pay;

    printf("Enter paycode (1 for manager, 2 for hourly worker, 3 for commission worker, 4 for pieceworker): ");
    scanf("%d", &paycode);
    while(x<5){
	
    switch (paycode)
    {
        case 1:
            printf("Enter weekly salary: ");
            scanf("%lf", &salary);
            total_pay = salary;
            break;
        case 2:
            printf("Enter hourly wage: ");
            scanf("%lf", &hourly_wage);
            printf("Enter number of hours worked: ");
            scanf("%lf", &hours_worked);
            if (hours_worked > 40)
            {
                overtime_pay = (hours_worked - 40) * (hourly_wage * 1.5);
                total_pay = 40 * hourly_wage + overtime_pay;
            }
            else
            {
                total_pay = hours_worked * hourly_wage;
            }
            break;
        case 3:
            printf("Enter gross sales: ");
            scanf("%lf", &gross_sales);
            commission = 250 + (gross_sales * 0.057);
            total_pay = commission;
            break;
        case 4:
            printf("Enter piece rate: ");
            scanf("%lf", &piece_rate);
            printf("Enter number of items produced: ");
            scanf("%lf", &items_produced);
            total_pay = piece_rate * items_produced;
            break;
        default:
            printf("Invalid paycode.\n");
            return 1;
    }
}

    printf("Total pay: $%.2lf\n", total_pay);

    return 0;
}
