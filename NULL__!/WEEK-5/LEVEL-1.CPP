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
    char temp=ch[8];
    int value=(int)temp;
    cout<<" the value present is at index : "<<value;
  return 0;
}


//! Q.1--> FIND THE LENGHT OF STRING
#include<iostream>
#include<string.h>
using namespace std;
int findlenght(char ch[],int size)
// --->>>using while loop;
{
  int index=0;
  while(ch[index]!='\0')
  {
    index++;
  }
  return index;
}
// // --->>>using for loop
// {
//   int length=0;
//   for(int i=0;i<size;i++)
//   {
//     if(ch[i]=='\0')
//     {
//       // ruk jao
//       break;
//     }
//     else{
//       length++;
//     }   
//   }
//   return length;
// }
int main()
{
  char ch[100];
  // cin>>ch;
  cin.getline(ch,100);
  int len=findlenght(ch,100);
  cout<<"the lenght is : "<<len<<endl;
  cout<<"printing the length : "<<strlen(ch);
  return 0;
}


//! Q.2--> PRINT THE REVERSE OF STRING
// //using 2 pointer approach
#include <iostream>
// cstring header file for use inbuilt function;
#include<cstring>
using namespace std;
void reverse(char ch[],int temp)
{
    // here , int temp is length of string ( not size of string)
    int i=0,j=temp-1;
    while(i<=j)
        {
            swap(ch[i],ch[j]);
            i++;
            j--;
        }
     cout<<"after reverse : "<<ch<<endl;
}
int main() {
    char ch[100];
    int size=100;
    cin.getline(ch,100);
    cout<<"before reverse : "<<ch<<endl;
    int temp=strlen(ch);
    cout<<"the lenght of string is : "<<temp<<endl;
    // pass 2 things--> 1.->character array 2.->length of string ( not size of string)
    reverse(ch,temp);
    return 0;
}


//! Q.3--> CONVERT LOWERCASE TO UPPERCASE
#include<iostream>
#include<cstring>
using namespace std;
 void touppercase(char ch[],int temp){
  for(int i=0;i<temp;i++)
  {
   char currentelement=ch[i];
    if(ch[i]>='a'&&ch[i]<='z')
    {
     ch[i]=currentelement-'a'+'A';
    }
  }
}
int main()
{
  char ch[100];
  int size=100;
  cin.getline(ch,100);
  int temp=strlen(ch);
  cout<<"length of string is : "<<temp<<endl;
  touppercase(ch,temp);
  cout<<"after convert into uppercase : " ;
  cout<<ch<<endl;
  return 0;
}




