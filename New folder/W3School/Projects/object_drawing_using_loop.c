#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
      int row,col;
      for(row=0; row<6; row++){
            for(col=0; col<row; col++){
                  printf("*");
            }
            printf("\n");
      }//طبع شكل مصمت
      printf("\n");
      for (row=0; row<6; row++){        
            for(col=0; col<=row; col++){
                  if(col==0 || col==row || row==5){
                        printf("*");
                  }
                  else{
                        printf(" ");
                  }
                  

            }
            printf("\n");
      }
      
      return 0;
}