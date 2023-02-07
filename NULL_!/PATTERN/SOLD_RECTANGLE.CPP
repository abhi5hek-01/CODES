#include <iostream>
using namespace std;

int main() {
    //outer loop for  check the no of rows in pattern
for(int row=0;row<3;row+=1)
{
    //inner loop for print the columns
    for(int column=0;column<8;++column)
    {
        cout<<"*";
    }
    //endl for new line
    cout<<endl;
}
}
//OUTPUT
// ********
// ********
// ********
