// PRINT HALF PYRAMID USING FUNCTION
#include<iostream>
using namespace std;
void pattern(int p)
{
    for(int row=0;row<p;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<"* ";
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
// OUTPUT
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * * * 
// * * * * * * * 
// * * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * * 
