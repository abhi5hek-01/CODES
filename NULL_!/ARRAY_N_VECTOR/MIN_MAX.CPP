#include<bits/stdc++.h>
using namespace std;
// MINIMUM FIND KIYA USING FUNCTION
int findmin(int arr[],int n)
{
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    // MAXIMUM FIND (IN MAIN FUNCTION)
    int arr[5]={2,4,3,6,7};
    int size=5;
    int max=INT_MIN;
    for(int i=0;i<size;i++)

    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"maximum element is= "<<max<<endl;
    cout<<"minimum element is= "<<findmin(arr,size);
}

