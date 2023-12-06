#include<stdio.h>
#include<stdlib.h>
int main(){
      int x,y;
      printf("Enter Month No.");
      scanf("%d",&x);
      switch (x)
      {
      case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days"); 
       break;
      case 4: case 6: case 9: case 11:
            printf("30 Days");
       break;
      case 2:
            printf("Enter year");
            scanf("%y",&y);
       if(y%4==0){
            printf("29 days");
      }
       else{
            printf("28 Days");
      }
      default:
            break;
      }
      return 0;
}