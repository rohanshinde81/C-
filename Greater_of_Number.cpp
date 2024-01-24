#include<iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout<<"Enter 1st value : "<<endl;
    cin>>x;
    cout<<"Enter 2nd value : "<<endl;
    cin>>y;
    cout<<"Enter 3rd value : "<<endl;
    cin>>z;
    if (x>y && x>z)
      {
         cout<<"X is greater";
   }
else if (y>x && y>z)
{
    cout
    <<"Y is greater";
}
else
{
    cout<<"Z is greater";
}
}
