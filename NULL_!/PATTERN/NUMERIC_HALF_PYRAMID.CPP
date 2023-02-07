// PRINT  NUMERIC HALF PYRAMID USING FUNCTION
#include<iostream>
using namespace std;
void pattern(int p)
{
    for(int row=0;row<p;row++)
    {
        for(int col=0;col<row+1;col++)
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
// 1
// 12
// 123
// 1234
// 12345
// 123456
// 1234567
// 12345678
// 123456789
// 12345678910
