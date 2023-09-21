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
