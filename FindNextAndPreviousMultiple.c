
Write a C program to find the previous multiple & next multiple of 100 of a given three digit number . Take input from the user using scanf().

Case 1:

Sample input  : 234

Sample output : Previous multiple : 200
		next multiple : 300

Case 2:

Sample input  : 23

Sample output : Invalid Input

case 3:

Sample input : 1234
Sample output : Invalid Input

case 4:

Sample input  : -567

Sample output : Invalid Input
Sample Input
234
Sample Output
Previous Multiple : 200
Next Multiple : 300
============================================================
code - 
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num >= 100 && num <= 999) {
        int prev = (num / 100) * 100;
        int next = prev + 100;
        
        printf("Previous multiple: %d\n", prev);
        printf("Next multiple: %d\n", next);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
