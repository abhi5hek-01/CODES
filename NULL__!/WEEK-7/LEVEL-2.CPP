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

// ! Q.2--> LINEAR SEARCH USING RECURSION
#include<iostream>
using namespace std;
bool findelement(int arr[],int size , int target , int index)
{
    // base case
    if(index>=size) return false;
  // check 0th element is equal to target , if yes - > return 1 otherwise return 0 ; [ other index check by recursion ]
    if(arr[index]==target) return true;
    // recursive call
    return findelement(arr , size , target , index+1) ;
}
int main()
{
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    int target=40;
    cout<<findelement(arr , size , target , index+1);
}
