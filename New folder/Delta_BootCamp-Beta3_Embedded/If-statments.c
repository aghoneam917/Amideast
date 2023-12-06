#include<stdlib.h>
#include<stdio.h>
int main(){
      int x=5;
      //if statement
      /*if(x==3){
            printf("true\n");
            printf("gg");
      }
      else{
            printf("false\n");
            printf("kk");
      }*/
      //nested if
      if(x==3){
            printf("equal to\n");
      }
      else if(x<3){
            printf("less than");
      }
      else if(x>3){
            printf("greater than");
      }
      return 0;
}