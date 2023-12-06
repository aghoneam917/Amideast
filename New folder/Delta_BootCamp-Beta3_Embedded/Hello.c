#include<stdio.h>
#include<stdlib.h>
int main(){
      char nm[]="Ashraf";           //we use char to declare Multi characters
      char name[20];             
      char ch='g';                //we use char to declare Single character
      char grade;
      int ag=19,fp=1.3,input;  //we use int to declare no. value
      float gpa;
      const int gg=5; 
 //1st code
      printf("hello world\n"); //look the difference between those 2 codes
      printf("hello\"world\n");            
//how to use variable                         //%d no.
      printf("Your name is %s\n", nm);       //%f decimals
      printf("Your age is %d\n", ag);       //%c 1 character
      printf("%d & %f\n",ag,fp);             //%s Words
//Look here variables must be in typed orders
      printf("My favorite %s is %d & %f & %d & %c \n","no.",500,98.987,ag,ch);
//How to change value of int & const
      printf("%d \n",ag);
      ag=9;
      printf("%d\n",ag);
      printf("%d\n",gg); /*gg=7;    Here we can't change the value of the int because it's const.
      printf("%d\n",gg);*/
      //How to get user input
      printf("Enter your age:");
      scanf("%d",&input);
      printf("Your age is %d\n",input);
      printf("Enter your gpa:");
      scanf("%f",&gpa);
      printf("Your gpa is %f\n",gpa);
      printf("Enter your Grade:");
      scanf("%s",&grade);
      printf("Your Grade is %c\n",grade);
      /*printf("Enter your Name:");
      scanf("%s",&name);
      printf("Your Name is %s\n",name);*/ //We have problem that printf read only 1st word before space so we need another function
      printf("Enter your Name:");
      fgets(name,20,stdin);
      printf("Your Name is %s\n",name);
      
      return 0;
}