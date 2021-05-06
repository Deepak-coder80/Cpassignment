//TODO: problem 4: pascla's triangle 
//Pascal's Triangle formula: C(n,k), nCk = n!/(k! * (n-k)!)

#include<stdio.h>

int main(){
    int i,j,p,N,x;
    int f1=1;
    int f2=1;
    int f3 = 1;

    printf("N:");
    scanf("%d",&N);

    for(i=0;i<=N;i++){   

        for(int space =1;space<=(N-i);space++){
            printf(" ");
        }   
        for(j=0;j<=i;j++){
            f1=f2=f3=1;  //after each calculation change value to default otherwise it will take old value.
            for(x = 1; x<= i; x++){ // run upto x<=i
                f1 = f1 * x;
            }
            for(x = 1; x <= j; x++){ //run upto x<=j
                f2 = f2 * x;
            }
            for(x = 1; x <= i-j; x++){ //run upto x<=i-j
                f3 = f3 * x;
            }
            p= (f1)/(f2*f3);

            if(j==i)
                printf("1 ");
            else
                printf("%d,",p);
        }
        printf("\n");

    }

    return 0;
}