#include<iostream>
using namespace std;
class Number
{
    static int x, y;
    public : static void accept(int , int);
             static void rectangle();
};
int Number :: x;
int Number :: y;
void Number :: accept(int a, int b)
{
    x = a;
    y = b;
}
void Number :: rectangle()
{
    int ans = x * y;
    cout<<"Area of triangle is : "<<ans;
}
int main()
{
    int a, b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    Number obj1,obj2;
    Number :: accept(a,b);
    Number :: rectangle();
}
