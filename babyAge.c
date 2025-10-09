Q - Read a baby age in no of days and find the baby age in years, months, weeks and days.

====================================================================
code  - 
#include <stdio.h>

int main() {
    int days, years, months, weeks, rem_days;

    printf("Enter baby age in days: ");
    scanf("%d", &days);

    years = days / 365;       
    days = days % 365;         

    months = days / 30;     
    days = days % 30;

    weeks = days / 7;       
    rem_days = days % 7;

    printf("Baby age = %d Years, %d Months, %d Weeks, %d Days\n",
           years, months, weeks, rem_days);

    return 0;
}
