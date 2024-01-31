#include <iostream>
using namespace std;

class A{
    public:
    int Chemistry;
};

class B{
    public:
    int Chemistry;
};

class C:public B, public A{
    public:
    int Math;
};

int main()
{
    C obj;
    //Here Ambiguity comes so it can be resolve by :: this operator
    
    
    cout<<obj.Math<<" "<<obj.A::Chemistry<<" "<<obj.B::Chemistry<<endl;
    return 0;
}
