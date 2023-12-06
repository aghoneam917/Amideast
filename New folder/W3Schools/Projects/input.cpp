#include<iostream>
#include<string>
using namespace std;
int main(){
      int age;
      string name;
      cout<<"Enter your age ";
      cin>>age;
      cout<<"your age is "<<age;
      //cin ignores space like if you entered your full name using spaces it will only type the first name
      cout<<"\nEnter your FullName ";
      getline (cin, name);
      //cin>>name;
      cout<<"your name is "<<name;
      //! so we use a functioin called getline(cin,string name)
      
      return 0;
}