//TODO: problem 2 : check the number is palidrome or not

#include <stdio.h>

int main(){
    //variable declaration
    int tempNum,orNum,reNum=0,reminder;

    //get the number from the user
    printf("Enter the number");
    scanf("%d",&orNum);

    //store the number orignal number to the temporary variable
    tempNum=orNum;
    
    while(tempNum != 0){
        //find the remider
        reminder = (tempNum%10);
        //update the reNum value
        reNum = reNum*10 + reminder;
        //repeat the loop while tempNum with out the last digit 
        tempNum = tempNum/10;
    }

    //check whether the reNum equal to orNum
    if(orNum == reNum){
        printf("Palidrome Number\n");
    }else{
        printf("Not a Palidrome Number\n");
    }

    return 0;
}