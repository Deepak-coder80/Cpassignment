//programe3: print upper triangular matrix

#include <stdio.h>

int main(){
    //variable delclaration
    int matrixSize,i,j;

    //get the matrix size from user
    printf("Enter matrix size:");
    scanf("%d",&matrixSize);

    for(i=0;i<matrixSize;i++){
        for(j=0;j<matrixSize;j++){
            if(j>=i){
                printf("1 ");
            }else{
                printf("0 ");
            }
            
        }
        printf("\n");
    }
}