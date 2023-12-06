#include<stdlib.h>
#include<stdio.h>
int main(){
      int x=9,h=21,q=5,w=2;
      const int k=10; //k will be always constant
      float y=9.09;
      float sum=(float) q/w;
      char z='A';
      x=h;//assigning variable to another
      printf("%d %f %c %i\t",x,y,z,h);
      printf("%c",k);//line feed in ASCII
      printf("%d\n",k);
      printf("%f\n",sum);


      
      return 0;
}