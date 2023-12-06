#include <stdio.h>
#include <stdlib.h>

int main(){
  int random_no=rand()%100+1; //to generate random no.
  int guess_no;
  do{
      printf("Guess a no. ");
      scanf("%d",&guess_no);
      if(guess_no>random_no){
        printf("Try lower no.");
      }else if(guess_no<random_no){
        printf("Try higher no.");
      }
      }while(guess_no!=random_no);
      if(guess_no==random_no){
        printf("Congrats!,You guessed the correcct no.");
      }
     return 0;
}