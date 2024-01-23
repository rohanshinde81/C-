#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter Any Character : ";
    cin>>a;
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I' ||a=='o'||a=='O'||a=='u'||a=='U')
    {
        cout<<"It is Vowel"<<endl;
    }
    else{
        cout<<"It is Consonunt";
        return 0;
    }
};
