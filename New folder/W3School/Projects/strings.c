#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int main(){
      char gg[]="Fuck You!";
      char txt1[]="called\"Vikings\"from";//if we want to type "" again we use the backslash escape character
      char txt2[]="called\'Vikings\'from";
      char txt3[]="called\\Vikings\\from";
      char lol[50]="oh shit,";
      //another way char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
      int x;
      printf("%s\n",gg);//print the string
      printf("%d\n",strlen(gg));//print the length of characters
      printf("%d\n",sizeof(gg));//print the size of characters
      printf("%c\n",gg[1]); //print element in the string
      printf("%s\n",txt1);
      printf("%s\n",txt2);
      printf("%s\n",txt3);
      printf("%d\n",strcmp(lol,gg));//compare string with each other if equal return 0 if not equal return to any value
      printf("%d\n",strcmp(txt1,txt2));
      gg[2]='*'; //modify element in the string
      /*for(x=0; x<9; x++){
            printf("%s\n",gg[x]); //print the string using for loop
      }*/
      printf("%s\n",lol);
      printf("%d\n",strlen(lol));
      printf("%d\n",sizeof(lol));
      printf("%s\n",gg);
      strcat(lol, gg); //Concatenate strings 
      printf("%s\n",lol);
      strcpy(gg,lol); //copy strings
      printf("%s\n",gg);
       
      return 0;
}