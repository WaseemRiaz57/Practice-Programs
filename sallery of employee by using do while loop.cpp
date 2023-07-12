#include <stdio.h>

int main()
{
int paycode;
double salary, hourly_wage, hours, overtime, gross_sales, pieces, piece_rate, pay;


do
{
    printf("Enter paycode (1 for manager, 2 for hourly worker, 3 for commission worker, 4 for pieceworker, 0 to exit): ");
    scanf("%d", &paycode);

    switch(paycode)
    {
        case 1: // manager
            printf("Enter weekly salary: ");
            scanf("%lf", &salary);
            pay = salary;
            break;
        case 2: // hourly worker
            printf("Enter hourly wage: ");
            scanf("%lf", &hourly_wage);
            printf("Enter number of hours worked: ");
            scanf("%lf", &hours);
            if (hours <= 40)
            {
                pay = hourly_wage * hours;
            }
            else
            {
                overtime = hours - 40;
                pay = hourly_wage * 40 + overtime * hourly_wage * 1.5;
            }
            break;
        case 3: // commission worker
            printf("Enter gross sales: ");
            scanf("%lf", &gross_sales);
            pay = 250 + gross_sales * 0.057;
            break;
        case 4: // pieceworker
            printf("Enter number of pieces produced: ");
            scanf("%lf", &pieces);
            printf("Enter rate per piece: ");
            scanf("%lf", &piece_rate);
            pay = pieces * piece_rate;
            break;
        case 0: // exit
            break;
        default:
            printf("Invalid paycode.\n");
            break;
    }

    if (paycode != 0)
    {
        printf("Weekly pay: $%.2lf\n", pay);
    }

} while (paycode != 0);

return 0;}

