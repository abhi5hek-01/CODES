//! Q.1--> FIND FACTORIAL USING RECURSION 
#include<iostream>
using namespace std;
int fact(int n)
{
    // BASE CASE
    if(n==1 || n==0) return 1;
    // RECURSIVE CALL
    int ans=n*fact(n-1);
    return ans;
    // PROCESSING PART ( OPTINAL )
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}



// ! Q.2--> FIND FACTORIAL USING RECURSION ( PROCESSING PART )
#include<iostream>
using namespace std;
int fact(int n)
{
    // BASE CASE
    if(n==1 || n==0) return 1;
    // RECURSIVE CALL
    int come=fact(n-1);
    // PROCESSING PART ( OPTINAL )
    int ans=n*come;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}


// ! Q.3--> PRINT COUNTING FROM N TO 1
#include<iostream>
using namespace std;
void printcount(int n)
{
    if(n==0) return;
    cout<<n<<"\n";
    printcount(n-1);
}
int main()
{
    int n;
    cin>>n;
    printcount(n);
    return 0;
}


// ! Q.4--> FIND THE 2^n ( 2 raise to n)
#include<iostream>
using namespace std;
int pow(int n)
{
    if(n==0)return 1;
    int ans= 2*pow(n-1);
    return ans;
}
int main ()
{
    int n;
    cin>>n;
    cout<<pow(n);
}


// ! Q.5--> FIND N-TH TERM IN FIBONACCI SERIES USING RECURISON 
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    int ans=fib(n-1)+ fib(n-2);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
}


// ! Q.6--> PRINT THE SUM FROM N TO 1
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1) return 1;
    int ans=n+sum(n-1);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
