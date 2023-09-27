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



