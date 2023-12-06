#include<iostream>
#include<cmath>//library that contain the functions of the calculator
using namespace std;
int main(){
      //!arrrays
      int num[]={0,1,2,3},i;
      bool isCodingFun = true;//!bollen are used in comparsion
      bool isFishTasty = false;
      cout<<"Max="<<max(5,10);
      cout<<"\tMin="<<min(5,10)<<"\n";
      cout<<sqrt(64);
      cout<<"\t"<<round(2.4);//nearest int no. works like in our life
      cout<<"\t"<<log(2)<<"\n";
      //!there are many other functions in screenshot in notes folder
      cout<<"true="<<isCodingFun<<"\t";
      cout<<"false="<<isFishTasty<<"\n"; 
      int x = 10;
      int y = 9;
      cout<<(x>y)<<"\n";//comparing
      /*for(int i:num){  //way 1
            cout<<i<<"\t";
      }*/
      //way 2
      for(i=0;i<=sizeof(num)/sizeof(int);i++){
            cout<<num[i]<<"\t";
      }
      return 0;
}