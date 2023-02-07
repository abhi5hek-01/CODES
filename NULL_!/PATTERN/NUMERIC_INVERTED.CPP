// PRINT  NUMERIC INVERTED HALF PYRAMID USING FUNCTION
#include<iostream>
using namespace std;
void pattern(int p)
{
    for(int row=0;row<p;row++)
    {
        for(int col=0;col<p-row;col++)
        {
            cout<<p-row;
        }
        cout<<endl;
    }
}
    int main()
    {
    int n;
    cin>>n;
    pattern(n);
}

//OUTPUT
// 999999999
// 88888888
// 7777777
// 666666
// 55555
// 4444
// 333
// 22
// 1