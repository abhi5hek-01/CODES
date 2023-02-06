// MAXIMUM OF 3 NUMBER USING FUNCTION
#include<iostream>
using namespace std;
int maxofno(int a,int b,  int c)
{
    if(a>b&&a>c)
    {
        return a;
    }
    else if(b>a&&b>c)
    {
        return b;
    }
    else
    return c;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int result=maxofno(a,b,c);
    cout<<result;
}