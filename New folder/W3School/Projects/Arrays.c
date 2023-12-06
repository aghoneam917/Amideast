#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
      int mynum[]={10,20,30},i,j;
      int matrix1[3][3]={{1,2,3},{4,5,6,},{7,8,9,}};
      printf("%d",mynum[1]);
      //how to loop an array
      for (i=0; i<3; i++){
            printf("\n%d",mynum[i]);
      }
      //Arrays are known as matrices
      printf("\nold value=%d",matrix1[2][2]);//outputs 9 coz it starts with 0
      //also we can set a new value for specific element in the  matrix
      matrix1[2][2]=0;
      printf("\nnew value=%d\n",matrix1[2][2]);
      //loops for matrices
      for (i=0; i<3; i++){  
            printf("\n(");
            for(j=0; j<3; j++){
                  printf("%d",matrix1[i][j]);
            }
            printf(")");
      }
      return 0;
}