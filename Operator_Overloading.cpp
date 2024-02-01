#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class Complex
{
public:


float real,img;


Complex operator +(Complex b)
{
Complex temp;
temp.real=real+b.real;
temp.img=img+b.img;
return temp;
}
Complex operator -(Complex b)
{
Complex temp;
temp.real=real-b.real;
temp.img=img-b.img;
return temp;
}
Complex operator *(Complex b)
{
Complex temp;
temp.real=real*b.real+img*b.img*(-1);             
temp.img=real*b.img+img*b.real;    
return temp;
}
Complex operator /(Complex b)
{
Complex temp;
temp.real=(real*b.real+img*b.img)/(b.real*b.real+b.img*b.img); 
temp.img=(real*b.img*(-1)+img*b.real)/(b.real*b.real+b.img*b.img);    
return temp;
}
};


int main ()
{

Complex a,b,c,d,e,f;

cout<<"\nEnter real and imaginary part of first complex number:";
cin>>a.real>>a.img;

cout<<"\nEnter real and imaginary part of second complex number:";
cin>>b.real>>b.img;

c=a+b;
cout<<"\n("<<a.real<<" + "<<a.img<<"i) + ("<<b.real<<" + "<<b.img<<"i) = ("<<c.real<<" + "<<c.img<<"i)";

d=a-b;
cout<<"\n("<<a.real<<" + "<<a.img<<"i) - ("<<b.real<<" + "<<b.img<<"i) = ("<<d.real<<" + "<<d.img<<"i)";

e=a*b;
cout<<"\n("<<a.real<<" + "<<a.img<<"i) * ("<<b.real<<" + "<<b.img<<"i) = ("<<e.real<<" + "<<e.img<<"i)";

f=a/b;
cout<<"\n("<<a.real<<" + "<<a.img<<"i) / ("<<b.real<<" + "<<b.img<<"i) = ("<<f.real<<" + "<<f.img<<"i)";

return 0;
}
