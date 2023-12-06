#include<iostream>//input and output library
#include<string>//string library
using namespace std;
int main(){
      int mynum1=10,mynum2=9,num1,num2;//if we assign new value to existing variable it will be overwritten
      num1=num2=50;
      int x;
      bool code1=true;
      bool code2=false;
      double mydub=2.99;
      char mych='c';
      float myflo=4.0;
      string greet="Shit";
      const double PI=3.14;
      int f,j,sum;
      cout<<greet<<"\t"<<num1<<"\t"<<myflo<<"\t"<<num2<<"\t"<<mynum1<<"\t"<<mynum2<<"\t"<<mych<<"\t"<<mydub<<"\n";//we can use multi << to print more outputs
      cout<<PI<<endl;//used for constant numbers
      cout<<"Enter your age:";
      cin>>x;//how to take input from user
      cout<<"Your age is "<<x<<endl;
      cout<<"Enter 1st no.= ";
      cin>>f;
      cout<<"Enter 2nd no.= \n";
      cin>>j;
      sum=f+j;
      cout<<"Your sum= "<<sum<<endl;
      cout<<"bool="<<code1<<"\t"<<"bool="<<code2;

      return 0;
}