#include<stdlib.h>
#include<stdio.h>
int main(){
      
      int input,g1,g2;
      char gg[30];
      printf("type your no.\n");
      scanf("%d",&input);//to get user input
      printf("Your no is %d\n",input);
      printf("pointer is%p\n",&input);
      printf("Enter 2 no.\n");
      scanf("%d",&g1,&g2);
      printf("Your no. are %d\n",g1);
      printf("enter your name\n");
      scanf("%s",gg);
      fgets(gg,sizeof(gg),stdin); //refer for what?
      printf("Your name is %s",gg);
      return 0;
}