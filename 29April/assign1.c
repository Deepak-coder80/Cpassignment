#include <stdio.h>

void main(){
    //declaration of variables.
    int i=1;
    int a,b,c,term;

    //take the number of terms from user
    printf("Enter number of terms:");
    scanf("%d",&term);

     /* Fibonacci magic initialization */
    a = 0;
    b = 1;
    c = 0;

    while(i<=term){
        
        printf("%d, ", c);

        a = b;     // Copy n-1 to n-2
        b = c;     // Copy current to n-1
        c = a + b; // New term

        i++;
    }
    printf("\n");
}