#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

int main(){
      FILE *fptr;
      fptr=fopen("file1.txt","w"); //used to open file in the program
                                   //there are conditions used rather than w 
                                   //you can read and create file in a specific path also
      fclose(fptr); //use anywhere in the code when you dont need the file anymore
      fptr=fopen("file2.txt","w");
      fprintf(fptr,"fuck you!\n");//write text in the file
      fclose(fptr);
      //!if you reopened a file that already exist it will be overwritten because we used the w mode
      //!unlike if we use a fmode it will be edited without overwrite
      fptr=fopen("file2.txt","a");
      fprintf(fptr,"hello world!");
      fclose(fptr);
    return 0;
}
