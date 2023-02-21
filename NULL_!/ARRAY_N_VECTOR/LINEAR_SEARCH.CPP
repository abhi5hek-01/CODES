#include<iostream>
using namespace std;
int main()
{
    int array[]={2,5,6,7,8,3};
    int size=6;
    int key;
    cin>>key;
    bool flag =0;
    // 0->= NOT FOUND 
    // 1->= FOUND
    for(int i=0;i<size;i++)
    {
        if(array[i]==key)
        {
            flag=1;
             break;
        }
    }
        if(flag)
        {
            cout<<"found";
        }
        else
        cout<<"not found";

    
}