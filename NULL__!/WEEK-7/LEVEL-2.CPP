// ! Q.1--> PRINT THE ELEMENTS OF ARRAY USING RECURSION
#include<iostream>
using namespace std;
void elementprint(int arr[], int size, int index)
{
    // base case
    if(index>=size) return ;

    // processing or print part 
    cout<<arr[index]<<endl;

    // recursive call
    elementprint(arr,size,index+1);
}
int main()
{
    int arr[]={10,20,30,40,50};
    elementprint(arr,5,0);
    return 0;
}
