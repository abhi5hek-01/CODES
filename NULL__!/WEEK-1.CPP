// ! 1ST PROGRAM
#include<iostream>
using namespace std;
int main()
{
    // cout: it is use for print anything in programing language
    cout<<"hemlo___!! ";
    // endl are use for new line
    cout<<endl;
    cout<<"\n";
    // return 0 : program is successfully execute
    return 0;
}


// ! TAKING INPUT AND PRINT 
#include<iostream>
using namespace std;
int main()
{
    int variable;
    cout<<"enter the value in variable : ";
    // take input by cin;
    cin>>variable;
    // print anything by cout
    cout<<variable;
}

// ! INTIALISATION AND DECLARTION
#include<iostream>
using namespace std;
int main()
{
    // int--> 4 byte
    int num=99;  
    cout<<num<<"\n";
    // using sizeof operation, check the size of variable
    cout<<sizeof(num)<<endl;
    // character-->1 byte
    char ch='a';
    cout<<ch<<endl;
    cout<<sizeof(ch)<<endl;
    float point =1.36;
    cout<< point<<endl;
    cout<<sizeof(point)<<endl;
    //  declare
    int sample;
    sample=12;
    cout<<sample<<endl;
    // intialise
    int example=40;
    // ! & operator --> find out adrress of variable;
    cout<<example<<&sample;
    return 0;
}

// ! OPERATORS
#include<iostream>
using namespace std;
int main()
{
    // arithemetic operators;
    int num1=40;
    int num2=20;
    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1%num2<<endl;
    cout<<num1/num2<<endl;
    //relational operator;
    cout<<(num1>num2)<<endl;
    cout<<(num1<num2)<<endl;
    cout<<(num1>=num2)<<endl;
    cout<<(num1<=num2)<<endl;
    cout<<(num1!=num2)<<endl;
    cout<<(num1==num2)<<endl;
    //assignment operator;
    int num3=50; 
    cout<<num3<<endl;
    // logical operator;
    // a--> logical AND ( all condition should be true for execution)
    int age=2;
    int car=12;
    if(age>=18 && car>=1)
    {
        cout<<"license approved"<<endl;
    }
    // b--> logical OR ( atleast one condition should be true for execution)
    if(age>=18||car>=1)
    {
        cout<<"what will happen"<<endl;
    }
    // logical NOT ( it convert true into false and vice versa)
    cout<<!age;
    return 0;
}

