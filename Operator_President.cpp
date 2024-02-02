#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 //int a = 34;
 //cout<<"The value of a was :"<<a;
 //a = 45;
 //cout<<"The value of a is :"<<a;

 //****************Constant in C++*********************//
//const float a = 3.11; 
//cout<<"The value of a was :"<<a<<endl;
 //a = 45.11; // You will get an error beacause the value of a is constant.
 //cout<<"The value of a is :"<<a<<endl;


//************Manipulators in C++********************//
int a=3, b=78, c=1233;
cout<<"The value of a without setw is :"<<a<<endl;
cout<<"The value of b without setw is :"<<b<<endl;
cout<<"The value of c without setw is :"<<c<<endl<<endl;

cout<<"The value of a is :"<<setw(4)<<a<<endl;
cout<<"The value of b is :"<<setw(4)<<b<<endl;
cout<<"The value of c is :"<<setw(4)<<c<<endl<<endl;

    
//*******************Operator Presidence**************************//
int r=3, s=4;
//(r*5)+s;
int m = ((((r*5)+s)-47)+87);
cout<<m;
return 0;
} 
