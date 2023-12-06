#include<stdio.h>
#include<stdlib.h>

int main(){
      FILE *fptr;
      fptr=fopen("file2.txt","r");
      char mystring[100];
      fgets(mystring, 100, fptr);//read only one line in the folder so we need a loop
      printf("%s\n", mystring);
      fclose(fptr);


      return 0;
}