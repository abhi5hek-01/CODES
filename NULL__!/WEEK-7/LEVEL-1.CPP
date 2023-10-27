//! Q.1--> FIND FACTORIAL USING RECURSION ;
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
