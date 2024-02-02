#include<iostream>
using namespace std;
class Number 
 {
       private : int x;
       public  : void accept(int);
                 void isPrime();
                 void isPerfect();
};
void Number :: accept(int a)
{
    x = a;
}
void Number :: isPrime()
{
    int count = 0;
    for(int i=1; i<=x; i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
       if(count==2)
    {
        cout<<" Prime Numebr ";
    }
    else
    {
        cout<<" Not a Prime Number ";
    }
}
void Number :: isPerfect()
{
    int sum = 0;
    for(int i = 1; i<=x/2; i++)
    {
        if(x%i==0)
        {
            sum = sum+1;
        }
    }
    if (sum == x)
    {
        cout<<"Perfect No";
    }
    else{
        cout<<"Not a Perfect No ";
    }
}
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    Number obj;
    obj.accept(n);
    obj.isPrime();
    obj.isPerfect();
}
