// PRINT SOLID DIAMOND SHAPE USING FUNCTION
#include<iostream>
using namespace std;
void soliddiamonnd(int n)
{
    //! logic for no of rows[ outer loop]
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row-1;col++) //! logic for print space
        {
            cout<<" ";
        }
        for(int col=0;col<row+1;col++) //! logic for print any 'ch'
        {
            cout<<"A ";
        }
        cout<<endl; //! for a new line;
    }
    for(int row=0;row<n;row++) 
    { // !2nd loop for print inverted portion;  
        for(int col=0;col<row;col++)
        {
            cout<<" ";
        }
    for(int col=0;col<n-row;col++)
    {
        cout<<"A ";
    }
    cout<<endl;
}
        }

int main()
{
    int n;
    cin>>n;
    soliddiamonnd(n);
}
//OUTPUT
//          A 
//         A A 
//        A A A 
//       A A A A 
//      A A A A A 
//     A A A A A A 
//    A A A A A A A 
//   A A A A A A A A 
//  A A A A A A A A A 
// A A A A A A A A A A 
// A A A A A A A A A A 
//  A A A A A A A A A 
//   A A A A A A A A 
//    A A A A A A A 
//     A A A A A A 
//      A A A A A 
//       A A A A 
//        A A A 
//         A A 
//          A 