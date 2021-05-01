#include <stdio.h>

int main(){
    //variable declaration
    float length , width , side;
    int choice1, choice2;

    do{
        printf("\nChoose the Shape . \n Enter 1 for Sqaure \n Enter 2 for Rectangle:");
        scanf("%d",&choice1);

        switch(choice1){
            case 1: 
                printf("\nEnter length of one side of square");
                scanf("%f",&side);
                printf("Area of square with side %f = %f\n",side,(side*side));
                break;

            case 2:
                printf("\nEnter length of Rectangle:");
                scanf("%f",&length);
                printf("\nEnter width of Rectangle:");
                scanf("%f",&width);
                printf("\nArea of Rectangle with length %f and width %f = %f\n",length,width,(length*width));
                break;

            default: printf("Invalid Entry");
                    break;
        }
        printf("\nDo you want to continue?\n If yes enter 1 , If no enter 0:");
        scanf("%d",&choice2);
    }while(choice2==1);

    return 0;
}