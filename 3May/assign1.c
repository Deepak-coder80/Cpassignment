//TODO: pr1) given number is Krishnamurthy Number or not

#include<stdio.h>

int main(){
    //variable declaration
    int num, tempNum, digit,i,fact,sum=0;

    //get the number from user
    printf("Enter the number:");
    scanf("%d",&num);

    //assign num to a temp variable
    tempNum = num;

    while (tempNum != 0) {
        digit = tempNum%10;

        fact = 1;

        //for loop for calcutalting the factorial
        for(i=1;i<=digit;i++){
            fact *=i;
        }

        //update sum 
        sum += fact;

        //delete the last digit from tempNum after the above step and repeat it
        tempNum /= 10;
    }

    //check whether the sum equal to the number
    if (sum == num){
        printf("\n %d Krishnamurthy Number\n",num);
    }else{
        printf("\n %d Not a Krishnamurthy Number\n",num);
    }

    return 0;
}