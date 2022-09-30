#include<iostream>
#include<string>
using namespace std;

class A
{ 
  private:
     int age;
     string Name;
public:
	A()       //1.way
	{
		age=0;
		Name="NULL";
	}
      A(string name_n, int age_a)   //Parameterised constructor
      {
       Name=name_n;
	   age=age_a; 
	  }
//     A( int x)   //Parameterised constructor 2.way
//      {
//	   age=x; 
//	  }
     int getData() 
	 { 
	 cout<<endl<<"Name: "<< Name; 
	 cout<<endl<<"Age: "<< age; 
	 
	
	 }

};
int main()
    {
      A a_obj("Abhay Gupta",18);
      a_obj.getData();
	}

