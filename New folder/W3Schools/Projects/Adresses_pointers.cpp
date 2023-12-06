#include<iostream>
#include<string>
using namespace std;
int main(){
      //reference
      string food="Pizza";
      string &meal=food;
      string* ptr=&food;
      cout<<food<<"\t"<<meal;
      //memory address
      //ways to get ptr
      /*string* mystring; // Preferred
      string *mystring;
      string * mystring;*/
      cout<<"\nMemory address= "<<&food;
      cout<<"\n"<<ptr;// Reference: Output the memory address of food with the pointer
      out<<"\n"<<*ptr;// Dereference: access the memory address of food and output the value
      return 0;
}