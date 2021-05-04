//TODO: problem 3 : check the number is palidrome or not

#include <stdio.h>

int main(){
    //variable declaration
    int tempNum,orNum,reNum=0,reminder;

    //get the number from the user
    printf("Enter the number");
    scanf("%d",&orNum);

    tempNum=orNum;
    
    while(tempNum != 0){
        reminder = (tempNum%10);
        reNum = reNum*10 + reminder;
        tempNum = tempNum/10;
    }

    if(orNum == reNum){
        printf("Palidrome Number\n");
    }else{
        printf("Not a Palidrome Number\n");
    }

    return 0;
}