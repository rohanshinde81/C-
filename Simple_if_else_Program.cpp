#include<iostream>
using namespace std;

int main()
{
    //cout<<"This is tutorial 9 :"
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    if(age<18){
        cout<<"You can not come to my party."<<endl;
    }
    else if(age==18)
    {
        cout<<"You are a kid and you will get the pass to the party."<<endl;
    }
    else if(age<1)
    {
    cout<<"You are not yet born."<<endl;
}
    else{
        cout<<"You can come to the party."<<endl;
    }

    return  0;

}
