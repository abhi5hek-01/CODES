// ! BINARY SEARCH
#include<iostream>
using namespace std;
int binarysearch(int arr[],int n, int target)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
      while(start<=end)
      {
        // if element is found;
        if(arr[mid]==target)
        {
            // 
            return mid;
        }
        // agar element nahi mila mid pe, right me jao
        else if (arr[mid]<target)
        {
            start=mid+1; 
        }
        else if( arr[mid]>target)
        {
            end=mid-1;
        }
       mid=(start+end)/2;
      }
    return -1;
}


// ! Q.1--> FIND THE FIRST OCCURENCE OF A NUMBER IN SORTED ARRAY...
#include<iostream>
using namespace std;
int  firstoccurence(int arr[],int size,int target)
{
    int ans=-1;
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==target)
        { 
            // ! do not return mid, store the mid in ans and left mei jao 
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<target)
        {
           start=mid+1;
        }
        else if(arr[mid]>target)
        {
             end=mid-1;
        }
        mid=start+(end-start)/2;   
    }
   return ans;
}
int main()
{
    int arr[]={10,20,30,30,30,30,40,50};
    int size=8;
    int target=30;
    int soln=firstoccurence(arr,size,target);
    if(soln==-1)
    {
        cout<<"not found";
    }
    else{
        cout<<" element found at index : "<<soln;
    }
}



// ! Q.2--> FIND THE LAST OCCURENCE OF A NUMBER IN SORTED ARRAY...
#include<iostream>
using namespace std;
int lastoccurence(int arr[],int size,int target)
{
    int ans=-1;
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==target)
        { 
            // ! do not return mid, store the mid in ans and right mei jao !!
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<target)
        {
           start=mid+1;
        }
        else if(arr[mid]>target)
        {
             end=mid-1;
        }
        mid=start+(end-start)/2;   
    }
   return ans;
}
int main()
{
    int arr[]={10,20,30,30,30,30,40,50};
    int size=8;
    int target=30;
    int soln=lastoccurence(arr,size,target);
    if(soln==-1)
    {
        cout<<"not found";
    }
    else{
        cout<<" element found at index : "<<soln;
    }
}


