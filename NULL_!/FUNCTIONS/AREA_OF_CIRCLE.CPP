// AREA OF CIRCLE USINNG FUNCTION
#include<iostream>
using namespace std;
float getar(float a)
{
   float answer=3.14*a*a;
   return answer;
}

int main()
{
    float radius;
    cin>>radius;
    float result=getar(radius);
    cout<<result<<endl;
}