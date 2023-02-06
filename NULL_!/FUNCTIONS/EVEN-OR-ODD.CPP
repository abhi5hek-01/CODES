// TO CHECK A NUMBER( EVEN OR ODD) USING FUNCTION
#include<iostream>
using namespace std;

void check(int p){
if(p%2==0)
{
    cout<<"even number";
}
else
cout<<"odd number";
}
int main()
{
    int n;
    cin>>n;
    check(n);

}