Question 2: Machine and Engine Check
________________________
Problem Statement:
_________________________
Write a C program to check whether a machine is ready for operation.

Input 1 if the machine is working, 0 if not.

Input 1 if the engine is working, 0 if not.

Based on input, display the correct status message:

Both working → “Machine is ready for operation”

Machine working, engine not working → “Engine problem detected”

Machine not working, engine working → “Machine structure not ready”

Both not working → “Both machine and engine not working”

Sample Input / Output:

Input:
Machine = 1
Engine = 0

Output:
Engine problem detected

=============================================================
code -
#include <stdio.h>

int main() {
    
int Machine, Engine;
printf("Machine : ");
scanf("%d",&Machine);
printf("Engine : ");
scanf("%d", &Engine);

(Machine == 1 && Engine == 1) ? printf("Machine is ready for operation") : (Machine == 1 && Engine == 0) ? printf("Engine problem detected") : (Machine == 0 && Engine == 1)? printf("Machine structure not ready"): printf("Both machine and engine not working");

return 0;
}

