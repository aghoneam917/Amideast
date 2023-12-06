#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct mystructure{ //declare structure
      int n;       //members of structure
      char c;     //un lucky we cant use strings here but we can make a trick
      char string[100];
      float g;
};//should end with a semicolon

int main(){

      struct mystructure s1;//structure variable named s1 is used because we can create many variables with the same structure
      struct mystructure s2;
      struct mystructure s3={13, 'c', "fuck you", 5.6};//lazem t3rf kol7 hena mayenf34 t3rf mot8yr el structure hna w terga t3rf elmot8yrat t7t tani
      struct mystructure s4;
      //assign the values
      s1=s4; //copy one structure to another
      //! we can modify and edit structure like s3 by giving integers new values like down 
      s1.n=10;
      s1.c='a';
      s1.g=9.8;
      strcpy(s1.string,"hello");
      s2.n=100;
      s2.c='b';
      s2.g=3.14;
      //also we can assign variables together in one time with ترتيب
      printf("%c\n",s1.c);
      printf("%.1f\n",s1.g);
      printf("%d\n",s2.n);
      printf("%c\n",s2.c);
      printf("%.2f\n",s2.g);
      printf("%s\n",s1.string);
      printf("%d\n%c\n%s\n%.1f\n", s3.n, s3.c, s3.string, s3.g);
      return 0;
}