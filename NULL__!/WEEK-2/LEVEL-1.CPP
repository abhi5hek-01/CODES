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
        // another loop for star printing
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
    // full pyramid+inverted full pyramid--> diamond
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

