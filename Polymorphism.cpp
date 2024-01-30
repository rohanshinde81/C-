#include <iostream>
using namespace std;
class Math{
    public:
    int sum(int a, int b){
    cout<<"I am in the First Signature"<<endl;
    return a+b;
}
   int sum(int a, int b, int c){
   cout<<"I am in the second Signature"<<endl;
   return a+b+c;
   }
   
   int sum(int a, float b){
        cout<<"I am in the third Signature"<<endl;
       return a+b;
   }
};

int main()
{
    Math obj;
    obj.sum(2,2.56f);
    return 0;
}
