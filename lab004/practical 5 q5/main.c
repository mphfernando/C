//5.
#include <stdio.h>
int main() {
 int month, days;
 printf("Enter the month number (1-12): ");
 scanf("%d", &month);
 switch (month) {
 case 1:
 days = 31;
 break;
 case 2:
 days = 28;
 break;
 case 3:
 days = 31;
 break;
 case 4:
 days = 30;
 break;
 case 5:
 days = 31;
 break;
 case 6:
 days = 30;
 break;
 case 7:
 days = 31;
 break;
 case 8:
 days = 31;
 break;
 case 9:
 days = 30;
 break;
 case 10:
 days = 31;
 break;
 case 11:
 days = 30;
 break;
 case 12:
 days = 31;
 break;
 default:
 printf("Invalid month number.\n");
 return 1;
 }
 printf("Total number of days in month %d: %d\n", month, days);
 return 0;
}
