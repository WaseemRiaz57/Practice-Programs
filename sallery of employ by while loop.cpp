#include <stdio.h>

int main()
{
int paycode;
double salary, hourly_wage, hours, overtime, gross_sales, items, pay;

while(paycode != -1)
{
 printf("Enter paycode (1 for manager, 2 for hourly worker, 3 for commission worker, 4 for pieceworker): ");
    scanf("%d", &paycode);


switch(paycode)
{
  case 1:
    printf("Enter weekly salary: ");
    scanf("%lf", &salary);
    pay = salary;
    break;
  case 2:
    printf("Enter hourly wage: ");
    scanf("%lf", &hourly_wage);
    printf("Enter number of hours worked: ");
    scanf("%lf", &hours);
    if(hours <= 40)
      pay = hourly_wage * hours;
    else
    {
      overtime = hours - 40;
      pay = (40 * hourly_wage) + (overtime * (hourly_wage * 1.5));
    }
    break;
  case 3:
    printf("Enter gross weekly sales: ");
    scanf("%lf", &gross_sales);
    pay = 250 + (gross_sales * 0.057);
    break;
  case 4:
    printf("Enter number of items produced: ");
    scanf("%lf", &items);
    pay = items * 3;
    break;
  default:
    printf("Invalid paycode\n");
    continue;
}

printf("Total pay: $%.2lf\n", pay);
}

return 0;
}




