//FULL PYRAMID USING FUNCTION
#include<iostream>
using namespace std;
void  fullpyramid(int a)
//!here (int a) is parmeter which is passed in function;
{
    for(int row=0;row<a;row++)
    {
        //! firstly, logic for print space;
        for(int col=0;col<a-row-1;col++)
        {
            cout<<" ";
        }
        //!logic for print * pattern
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
    fullpyramid(n);
    //! here, (n) is arrgument;
}
//** OUTPUT
//          * 
//         * *
//        * * *
//       * * * * 
//      * * * * *
//     * * * * * *
//    * * * * * * *
//   * * * * * * * *
//  * * * * * * * * *
// * * * * * * * * * *