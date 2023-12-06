#include<stdio.h>
#include<stdlib.h>
int main(){
      char color[20];
      char name[20];
      char Celebrity[20];
//inputs
      printf("Enter favorite color");
      scanf("%s",&color);
      printf("Enter thing");
      scanf("%s",&name);
      printf("Enter favorite Celebrity");
      scanf("%s",&Celebrity);
//outputs
      printf("Roses are %S\n",color);
      printf("are blue %S\n",name);
      printf("I love %S\n",Celebrity);
      return 0;
}
