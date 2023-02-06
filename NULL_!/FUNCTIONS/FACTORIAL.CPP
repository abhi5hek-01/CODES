// FACTORIAL OF A NUMBER USING FUNCTION
#include<iostream>
using namespace std;
int getfact(int a){
    int result=1;
    for(int i=1;i<=a;i++)
    {
        result*=i;
    }
   return result;
}

int main() 
{
    int n;
    cin>>n;
   int factorial= getfact(n);
   cout<<factorial;
}