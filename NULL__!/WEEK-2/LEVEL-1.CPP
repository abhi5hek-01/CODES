// ! Q.1--> PRINTING THE FULL PYRAMID
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // outer loop for number of rows
    for(int row=0;row<n;row++)
    {
        // inner loop for number of spaces
        for(int col=0;col<n-row;col++)
        {
            cout<<" ";
        }
        // another loop for star print
        for(int col=0;col<row+1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
// OUTPUT 
//         * 
//        * * 
//       * * * 
//      * * * * 
//     * * * * * 
//    * * * * * * 
//   * * * * * * * 
//  * * * * * * * *    



// ! Q.2--> PRINTING THE INVERTED HALF PYRAMID
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        // inner loop--> number of spaces ;
        for(int col=0;col<row;col++)
        {
            cout<<" ";
        }
        // another inner loop--> number of star ;
        for(int col=0;col<n-row;col++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
// OUTPUT
// * * * * * * * * 
//  * * * * * * * 
//   * * * * * * 
//    * * * * * 
//     * * * * 
//      * * * 
//       * * 
//        * 



// ! Q.3--> DIAMOND PATTERN
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // outer loop for number of rows
    for(int row=0;row<n;row++)
    {
        // inner loop for number of spaces
        for(int col=0;col<n-row;col++)
        {
            cout<<" ";
        }
        // another loop for star printing
        for(int col=0;col<row+1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    // full pyramid+inverted full pyramid --> diamond
    for(int row=0;row<n;row++)
    {
        // inner loop--> number of spaces
        for(int col=0;col<row;col++)
        {
            cout<<" ";
        }
        // another inner loop--> number of star
        for(int col=0;col<n-row;col++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
// OUTPUT
//         * 
//        * * 
//       * * * 
//      * * * *
//     * * * * *
//    * * * * * *
//   * * * * * * *
//  * * * * * * * *
// * * * * * * * *
//  * * * * * * *
//   * * * * * *
//    * * * * *
//     * * * *
//      * * *
//       * *
//        *



// ! Q.4--> HOLLOW FULL PYRAMID PATTERN
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // outer loop for number of rows
    for(int row=0;row<n;row++)
    {
        // inner loop for number of spaces
        for(int col=0;col<n-row-1;col++)
        {
            cout<<" ";
        }
        // another loop for star printing
        for(int col=0;col<row+1;col++)
        {
            if( col==0 || col==row+1-1)
            {
                cout<<"* ";
            }
            else{
            cout<<"  ";
            }
        }
        cout<<endl;
    }
}
// output
//        * 
//       * * 
//      *   * 
//     *     * 
//    *       * 
//   *         * 
//  *           * 
// *             * 


// ! Q.5--> HOLLOW INVERTED FULL PYRAMID
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // outer loop for number of rows;
    for(int row=0;row<n;row++)
    {
        // inner loop for columns;
        for(int col=0;col<row+1;col++)
        {
            cout<<" ";
        }
        for(int col=0;col<n-row-1;col++)
        {
            // condition for star and inner space printing;
          if( col==0 || col==n-row-1-1)
          {
            
            cout<<"* ";
          }
          else{
            cout<<"  ";
          }
        }
        cout<<endl;
    }
}
// output
//  *               * 
//   *             * 
//    *           * 
//     *         * 
//      *       * 
//       *     * 
//        *   * 
//         * * 
//          * 


// ! Q.6--> HOLLOW DIAMOND
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // outer loop for number of rows
    for(int row=0;row<n;row++)
    {
        // inner loop for number of spaces
        for(int col=0;col<n-row-1;col++)
        {
            cout<<" ";
        }
        // another loop for star printing
        for(int col=0;col<row+1;col++)
        {
            if( col==0 || col==row+1-1)
            {
                cout<<"* ";
            }
            else{
            cout<<"  ";
            }
        }
        cout<<endl;
    }
    // hollow full pyramid + hollow inverted full pyramid = hollow diamond
        for(int row=0;row<n;row++)
    {
        // inner loop for columns;
        for(int col=0;col<row+1;col++)
        {
            cout<<" ";
        }
        for(int col=0;col<n-row-1;col++)
        {
            // condition for star and inner space printing ;
          if( col==0 || col==n-row-1-1)
          {          
            cout<<"* ";
          }
          else{
            cout<<"  ";
          }
        }
        cout<<endl;
    }
}
// output
//          * 
//         * * 
//        *   * 
//       *     * 
//      *       * 
//     *         * 
//    *           * 
//   *             * 
//  *               * 
// *                 * 
//  *               * 
//   *             * 
//    *           * 
//     *         * 
//      *       * 
//       *     * 
//        *   * 
//         * * 
//          *


// ! Q.7--> PRINTING FLIPPED SOLID DIAMOND
#include<iostream>
using namespace std;
int main()
{
    int num=16;
    int n=8;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //  HINT--> BREAK THE PATTERN IN SMALL PARTS;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<2*n-2*i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
// output
// ******** ********
// *******   *******
// ******     ******
// *****       *****
// ****         ****
// ***           ***
// **             **
// *               *
// *               *
// **             **
// ***           ***
// ****         ****
// *****       *****
// ******     ******
// *******   *******
// ******** ********



// ! Q.8--> FANCY PATTERN-I
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // outer loop
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<2*row+1;col++)
        {
            if(col%2==1)
            {
                cout<<"*";
            }
            else {
                cout<<row+1;
            }
        }
        cout<<endl;
    }
}
// output
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5


// ! Q.9--> FANCY PATTERN-II
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    for(int row=0;row<n;row++)
    {
       char ch;
        for(int col=0;col<row+1;col++)
        {
             ch = col+1+'A'-1;
            cout<<ch;
        }
        for(char alphabet=ch; alphabet>'A';)
        {
            alphabet=alphabet-1;
            cout<<alphabet;
        }
    cout<<endl;
    }
}
// output
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
// ABCDEFEDCBA



