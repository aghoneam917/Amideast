#include<stdlib.h>
#include<stdio.h>
int main(){
      int num1;
      printf("Hello World!");
      printf("\nis for new line\n");
      printf("Hello World!\nI am learning C.\nAnd it is awesome!");//Also we can type outputs like that but it's harder to read
      printf("\n\nHello World!\n");//Double "\n" makes a blank-line
      printf("Horizontal tab\t");//"\t" makes a horizontal tab
      printf("Hello World!\n");
      printf("Hello World!\n");
      printf("\\Hello World!\"\'\n");// "\\" insert a backslash character, "\" or \'" inserts "&'
      // single-line Comment
      /* Multi-line Comment*/
      printf("enter no.");
      scanf("%d",&num1);
      printf("%d",num1);
       
      return 0;
}