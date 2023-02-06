//sum of even number upto n;
//using function;

#include<iostream>
using namespace std;
int getsum(int p)
{
    int sum=0;
for(int i=0;i<=p;i=i+2)
{
 sum+=i;

}
return sum;
}

int main()
{
    int a;
    cin>>a;
    int result= getsum(a);
    cout<<result<<endl;
}
