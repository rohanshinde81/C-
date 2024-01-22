#include <iostream>

using namespace std;

int main()
{
    int row = 5;
    int col = 3;
    int i,j;
    row==i;
    col==j;
    
    int**arr = new int*[5];
    
    for(int i=0; i<row; i++)
    {
        arr[i] = new int[col];
    }
    
    // printing
    
    for(int i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
