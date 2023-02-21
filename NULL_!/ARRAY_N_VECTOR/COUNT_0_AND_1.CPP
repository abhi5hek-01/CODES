#include<iostream>
using namespace std;
int zerocnt(int arr[],int size)
{
    int zerox=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zerox++;
         
        }
    }
      return zerox;
   
}

int onecnt(int alagarray[],int n)
{
    int ones=0;
    for(int i=0;i<n;i++)
    {
        if(alagarray[i]==1)
        {
            ones++;
        }
        
    }
    return ones;
}
int main()
{
    int arr[]={ 1,1,1,0,0,0,0};
    int size=7;
    cout<<"print the no of zero="<<zerocnt(arr,size)<<endl;
    cout<<"print the no of one="<<onecnt(arr,size)<<endl;
}
