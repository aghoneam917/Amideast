#include<stdlib.h>
#include<stdio.h>
int main(){
      int x=10,y;
      /*printf("y= %d\n",x++); //here we assign y=x first then we add 1 to x , y=10,x=11
      printf("x= %d\n",x);*/
      /*printf("y= %d\n",++x); //but here we first add 1 to x then we assign y=x, y=11,x=11
      printf("x= %d",x);*/
      /*printf("y= %d\n",--x); //same as up but -
      printf("x= %d",x);*/
      printf("y= %d\n",x--); // same as up but - 
      printf("x= %d",x);
      return 0;
}