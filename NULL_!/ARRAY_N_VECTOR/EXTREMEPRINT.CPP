#include<iostream>
using namespace std;
int main()
{
    int arr[7]={2,1,3,4,6,7,9};
    int n=7;
    int start=0;int end=n-1;
    while(start<=end)
    {
        if(start==end)
        {
            cout<<arr[start]<<" ";
        }
        else{
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        }
        start++;
    end--;
    }
   
}