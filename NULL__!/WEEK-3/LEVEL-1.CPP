 ----------------------------------------------------------------> ARRAY BASICS <----------------------------------------------------------------------------
#include <iostream>
using namespace std;
int main() 
{
  // way to create an array ;
    int arr[10];
    char ch[55];
    bool any[25];
    long num[500];
    double as[900];
    cout<<"array created successfully"<<"\n";
    //  way to find address of an array, using & and without it;
    cout<<&num<<endl;
    cout<<num<<endl;
    //  way to find size of an array
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(any)<<endl;
    cout<<sizeof(num)<<endl;
  // different way to create an array;
  int arr[5]={1,2,3,4,5};
  int brr[]={2,4,6,8};
  int crr[5]={4,8,12,16};
  //  wrong way, too many intialiser
  int drr[2]={3,6,9};
  for(int i=0;i<5;i++)
  {
    cout<<crr[i]<<" ";
  }
    //  taking input in array
    int arr[5];
    int n=5;
    for(int i=0; i<n;i++)
    {
      cout<<"enter the element at index"<<i<<endl;
      cin>>arr[i];
    }
    // for printing the element of array;
    for(int i=0;i<n;i++)
    {
      cout<<arr[i];
    }
    return 0;
}


// ! Q-1 --> PRINT THE DOUBLE OF ARRAY
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int n=10;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the element at index"<<i<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<< 2*arr[i]<<" ";
    }
    return 0;
}


// ! Q.2 --> PRINT THE SUM OF ELEMENTS IN AN ARRAY
#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int arr[5];
    int n=5;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the element at index"<<i<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
     sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}


// ! Q.3 --> FIND THE UNIQUE ELEMENT IN ARRAY
#include <iostream>
using namespace std;
int getuniqueelement(int arr[],int n)
{
  int solution=0;
  for(int i=0;i<n;i++)
  {
    solution=solution^arr[i];
  }
  return solution;
}
int main() 
{
   int arr[]={2,5,11,5,2,14,9,14,9};
   int n=9;
   getuniqueelement(arr,n);
   cout<<"unique element will be="<<getuniqueelement(arr,n);
    return 0;
}


// ! Q.4 --> GET PAIRS IN AN ARRAY
#include<iostream>
using namespace std;
void getpair(int arr[],int size)
{
    // int ans=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
           cout<<arr[i]<<" "<<arr[j]<<endl;
        }        
    }  
}
int main()
{
    int arr[]={10,20,30};
    int size=3;
    getpair(arr,size);
    // cout<<"pairs are"<<getpair(arr,size);
    return 0;
}



