// ! --> INTRODUCTION TO CHARACTER ARRAY [ STATIC IN NATURE ]
#include<iostream>
using namespace std;
int main()
{
    // creation
    char ch[100];
    // take input n input, simply cin>>
    // cin>>ch;
   // better way to input in character array
    cin.getline(ch,100);
    // for print n character array , simply cout
    cout<<"printing the value of ch : "<<ch<<"\n";
    //printing using loop;
    for(int i=0;i<=10;i++)
    {
        cout<<" at INDEX "<<i<<"-->"<<ch[i]<<endl;
    } 
    int temp=ch[8];
    int value=(int)temp;
    cout<<" the value present is at index : "<<value;
  return 0;
}
