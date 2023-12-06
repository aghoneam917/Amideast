#include<iostream>
#include<string>  
using namespace std;
int main(){
      string greet="Hello";
      string greet1="World!";
      string total=greet +" "+ greet1; //the " " is used to insert space between the string
      string gret="Fuck ";
      string gret1="You!";
      string total2=gret.append(gret1);
      //!Concatenation is function where you can add 2 strings together to make a new string
      //!Append like Concatenation but we use.append() instead     
      cout<<greet<<"\n"<<total<<"\n"<<total2;
      //size of strings
      cout<<"size of greet: "<<greet.length()<<"\tsize of greet1: "<<greet1.size();
      //!How to access the string
      cout<<"\n"<<greet[0]; //same as arrays
      //also we can assing new characters in the string
      greet[1]='E';
      cout<<"\n"<<greet;
      

      return 0;
}