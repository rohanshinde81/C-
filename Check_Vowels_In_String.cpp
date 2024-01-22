// Write a c++ program to read a string and find the number of vowels in it
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char str[100] ; 
    int vowels = 0;
    cout<<"Enter your string : "<<endl;
    cin>>str;
    // can also do str[i] != '\0' in condition below both would work
    for(int i = 0; str[i]; i++)  
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
        ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
        {
		    vowels++;
        }
    }
    
    cout << "Total Vowels in this string : " << vowels;
    
    return 0;
}
