#include <iostream>

using namespace std;

class Animal{
    public:
    void Speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{
    public:
    void Speak(){
        cout<<"Barking"<<endl;
    }
};

int main()
{
//   Animal*a = new Animal();
//   a->Speak();

    //  Dog*d = new Dog();
    //  d->Speak();
    
    Animal*a = new Dog();     // Here we crete pointer of parent class and objcet of child class
    a->Speak();              // this is called as Upcasting
    
    
    Dog*d = (Dog*) new Animal(); // this is called as the Downcasting 
    d->Speak();

    return 0;
}
