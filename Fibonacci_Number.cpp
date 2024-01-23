#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int prev=0;
    int cur=1;
    cout<<prev<<" "<<cur<<" ";
    for(int i=2;i<=n;i++)
    {
        int temp=prev+cur;
        prev=cur;
        cur=temp;
        cout<<temp<<" ";
    }
    return 0;
}
