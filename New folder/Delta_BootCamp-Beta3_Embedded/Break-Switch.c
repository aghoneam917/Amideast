#include<stdlib.h>
#include<stdio.h>
int main(){
      int i;
      /*for(i=0; i<=10; i++){
            printf("%d",i);
      if (i==5){
            break;
      }   
}*/
      for(i=0; i<=10; i++){
            printf("%d\n",i);
      if (i==9){
            continue;
      }   
}
         
      return 0;
}