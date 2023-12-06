#include<iostream>
#include<string>
using namespace std;
int main(){
      struct{                // Structure declaration
      int myNum;            // Member (int variable)
      string myString;     // Member (string variable)
      }myStructure;       // Structure variable
      //! unlike c the struct variable is declared after the declaration
      //one struct in multiple values
     struct{
      string brand;
      string model;
      int year;
      }myCar1, myCar2; // We can add variables by separating them with a comma here
      myStructure.myNum = 1;
      myStructure.myString="Hello World!";
      cout<<myStructure.myNum<<"\n";
      cout<<myStructure.myString<<"\n";

      myCar1.brand = "BMW";
      myCar1.model = "X5";
      myCar1.year = 1999;
      // Put data into the second structure
      myCar2.brand = "Ford";
      myCar2.model = "Mustang";
      myCar2.year = 1969;
      // Print the structure members
      cout<<myCar1.brand<<" "<<myCar1.model<<" "<<myCar1.year<< "\n";
      cout<<myCar2.brand<<" "<<myCar2.model<<" "<<myCar2.year<< "\n";
      //another way to declare more than one value in struct
      
      return 0;
}