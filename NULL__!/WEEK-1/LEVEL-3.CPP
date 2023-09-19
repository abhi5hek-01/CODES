// !--> what will be the output?
#include<iostream>
using namespace std;
int main()
{
    int n=10;
    if(cout<<n)
    {
        cout<<"hey !!";
        return 0;
    }
}


// !--> what will be the output?
#include<iostream>
using namespace std;
int main()
{
   if(cout<<10)
   {
    cout<<endl;
    cout<<"hey";
   }
}


// !--> what will be the output?
#include<iostream>
using namespace std;
int main()
{
   if(cout<<10)
   {
    cout<<endl;
    cout<<"hey";
   }
}


// ! Q.1--> SQUARE PRINTING
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    //  outer loop for number of rows;
    for(int row=0;row<n;row++)
    {
    //  inner loop for number of columns;
        for(int col=0;col<n;col++)
        {
            cout<<" * ";
        }
    // endl for new row;
        cout<<endl;
    }
}


// ! Q.2--> RECTANGLE PRINTING
#include<iostream>
using namespace std;
int main()
{
// n is for number of rows;
int n=4;
// m is for number of columns;
int m=7;
for(int row=0;row<n;row++)
{
    for(int col=0;col<m;col++)
     {
        cout<<"* ";
     }
     cout<<endl;
}
}


// ! Q.3--> HOLLOW RECTANGLE
#include<iostream>
using namespace std;
int main()
{
    int n=7;
    int m=15;
    // outer loop--> for rows;
    for(int row=0;row<n;row++)
    {
        // inner loop--> for columns
        for(int col=0;col<m;col++)
        {
            // here,condition for 1st row and last row;
           if(row==0||row==n-1)
           {
            cout<<"*";
           }
           // here,condition for 1st column and last column;  
           else if(col==0||col==m-1)
           {
            cout<<"*";
           }
           // print space
           else{
            cout<<" ";
           }
        }
        cout<<endl;
    }
}


// ! Q.4--> HALF PYRAMID
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        // row 0--> 1star , row 1--> 2star ( logic is [row+1] )
        for(int col=0;col<row+1;col++)
    {
        cout<<"* ";
    }
    cout<<"\n";
    }
}


// ! Q.5--> INVERTED HALF PYRAMID
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        // in every row , n-row stars are printing;
        for(int col=0;col<n-row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}


// ! Q.6--> NUMERIC HALF PYRAMID
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
    for(int col=0;col<row+1;col++)
    {
        cout<<col+1<<" ";
    }
    cout<<endl;
    }
}


// ! Q.7--> INVERTED NUMERIC HALF PYRAMID
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
    for(int col=0;col<n-row;col++)
    {
        cout<<col+1<<" ";
    }
    cout<<endl;
    }
}


// ! Q.8--> HOLLOW SQUARE
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int m=5;
    // outer loop--> for rows;
    for(int row=0;row<n;row++)
    {
        // inner loop--> for columns
        for(int col=0;col<m;col++)
        {
            // here,condition for 1st row and last row;
           if(row==0||row==n-1)
           {
            cout<<"*";
           }
           // here,condition for 1st column and last column;  
           else if(col==0||col==m-1)
           {
            cout<<"*";
           }
           // print space
           else{
            cout<<" ";
           }
        }
        cout<<endl;
    }
}


// ! Q.9--> HOLLOW INVERTED HALF PYRAMID
#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int row=0;row<n;row++)
   {
    for(int col=0;col<n;col++)
    {
        // condition for star printing
         if(col==0||row==0||col==n-row-1)
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }
   }
   cout<<endl;
}
}








