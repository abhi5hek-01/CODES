#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int row=0;row<n;row++)
    {
        if(row==0||row==n-1){
            //! HERE,LOGIC FOR 1ST AND LAST ROW { TO PRINT STAR}
        for(int col=0;col<m;col++)
        {
          cout<<"*";  
        }
        cout<<endl;
        }
         else {
            cout<<"*";
            for(int col=0;col<m-2;col++){
                //! APPROACH FOR PRINT SPACE;
                cout<<" ";
            }
            cout<<"*";
            cout<<endl; 
        } 
}
}
// OUTPUT
// **********************
// *                    *
// *                    *
// *                    *
// **********************