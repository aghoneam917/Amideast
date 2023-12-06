#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
// better for code optimizing and reading to make the declaration of the function above main and the defintion above main for 
//! function declaration
void gg();
void shit(char name[],int age);     
int mat(int myno[7]);
int qwerty1(int x,int y);
int sub(int u);
int qwerty(int x);

int main(){
      int sum=qwerty1(6,7);
      int myno[7]={0,1,2,3,4,5,6,};
      int total=sub(10);  
      gg();  
      shit("Ashraf",20);
      mat(myno);
      printf("result is %d\n",qwerty(5));
      printf("result is %d\n",sum);
      printf("total=%d\n",sub);
      printf("%f\n",sqrt(16)); //square root for 16 using math.h libary
      printf("%f\n",ceil(1.4)); //for the nearest greater no.
      printf("%f\n",floor(1.4));//for the nearest smaller no.
      printf("%f",pow(4,3));// 4^3
      return 0;
}

//! Function definition
void gg(){
      printf("Fuck You!\n"); //function void doesn't return to a value while int does
      }
void shit(char name[],int age){ //Parameters function
      printf("Hello %s your age is %d years\n",name,age);
}
int mat(int myno[7]){
      for(int i=0; i<8; i++){
            printf("%d\n",myno[i]);
      }
}
int qwerty(int x){
      return  5+x; //
}
int qwerty1(int x,int y){
      return x+y;
}
int sub(int u){
      if(u>0){
            return u+sub(u-1);
      }else{
            return 0;         
      }
}



