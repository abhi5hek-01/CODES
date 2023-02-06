//ADDITION OF 2 NUMBER USING FUNCTION
#include<iostream>
using namespace std;

int getsum(int p,int q)
// here int p and int q ka matalb parameter pass ho rhe h function ke andar
{
    return p+q;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int result=getsum(a,b);
    // here! (a,b) ka matlab function k andr argument pass ho rha h
    cout<<result<<endl;
}