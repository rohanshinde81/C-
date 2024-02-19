#include<iostream>
using namespace std;
int main()
{
    int temp, a, b;
    cout<<"Enetr your First number "<<endl;
    cin>>a;

    cout<<"Enter your Second number "<<endl;
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    std::cout<<"After swapping "<< a << " is "<<b<<" and "<<b<<" is "<<a;

}
