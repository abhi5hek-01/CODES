// PRINT  NUMERIC HALF PYRAMID USING FUNCTION
#include<iostream>
using namespace std;
void pattern(int p)
{
    for(int row=0;row<p;row++)
    {
        for(int col=0;col<p-row;col++)
        {
            cout<<col+1;
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
// 123456789
// 12345678
// 1234567
// 123456
// 12345
// 1234
// 123
// 12
// 1