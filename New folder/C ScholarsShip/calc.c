#include<stdio.h>
#include<stdlib.h>

int main(){
      float no1,no2;
      char process;
      printf("Enter the process you want");
      scanf("%c",&process);
      printf("Enter 1st no.= ");
      scanf("%f",&no1);
      printf("Enter 2st no.= ");
      scanf("%f",&no2);

      switch(process){
            case '+':
            printf("Submition= %.2f",no1+no2);
            break;
            case '-':
            printf("Subtraction= %.2f",no1-no2);
            break;
            case '/':
            printf("Multiplication= %.2f",no1/no2);
            break;
            case '*':
            printf("Division= %.2f",no1*no2);
            break;
            default:
            printf("Please enter vaild process");
      }

      return 0;
}