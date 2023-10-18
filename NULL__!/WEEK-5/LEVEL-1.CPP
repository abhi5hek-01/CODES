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
        cout<<" at INDEX "<<i<<"--> "<<ch[i]<<endl;
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
// --->>using while loop;
{
  int index=0;
  while(ch[index]!='\0')
  {
    index++;
  }
  return index;
}
// // --->>> using for loop
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
// cstring header file for use inbuilt function ;
#include<cstring>
using namespace std;
void reverse(char ch[],int temp)
{
    // here , int temp is length of string ( not size of string )
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
    // pass 2 things--> 1.->character array 2.->length of string ( not size of string ) 
    reverse(ch,temp);
    return 0;
}


//! Q.3--> CONVERT LOWERCASE CHARACTER TO UPPERCASE CHARACTER
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


//! Q.4--> REPLACE @ WITH SPACE
#include<iostream>
#include<cstring>
using namespace std;
void replacecharacter(char ch[],int temp)
{
    int currindex=0;
    while(ch[currindex]!='\0')
        {
// check, if current index==@ then replace it with space otherwise index++;
            if(ch[currindex]=='@')
            {
               ch[currindex]=' ';
            }
            else{
             currindex++;
            }
        }
}
int main()
{
    char ch[100];
    int size=100;
    cin.getline(ch,100);
    int temp= strlen(ch);
    cout<<"before : "<<ch<<endl;
    cout<<"length of string : "<<temp<<endl;
    replacecharacter(ch,temp);
    cout<<"after : "<<ch; 
}


//! Q.5--> CHECK PALINDROME
#include<iostream>
#include<cstring>
using namespace std;
bool checkpalindrome(char ch[],int n)
// int n--> length of character array ( not size )
{
    int i=0,j=n-1;
    while(i<=j)
        {
            if(ch[i]!=ch[j])
            {
             return false;
            }
            else{
             i++,j--;
            }
        }
    return true;  
}
int main()
{
    char ch[100];
    int size=100;
    cin.getline(ch,100);
    cout<<"before : "<<ch<<endl;
    int temp=strlen(ch);
    cout<<"length of string is : "<<temp<<endl;
    bool isthis=checkpalindrome(ch,temp);
    if(isthis)
    {
    cout<<"yes , it is valid palindrome"<<endl;
    }
    else{
    cout<<"not a palindrome";
    }
    return 0;
}


// ! STRINGS --> collection of characters { dyanmic in nature}


#include<iostream>
using namespace std;
int main()
{
  string name;
  // taking input in string
  // cin>>name;
  // printing the string

  getline(cin,name);
  cout<<" printing the name : "<< name<<endl;
  cout<<" printing the first character : "<< name[0]<<endl;
  // int index=0;
  // while(name[index]!='\0')
  // {
  //   cout<<"at index -> "<<index<<" = "<< name[index]<<endl;
  //   index++;
  // }
  // cout<<" at index --> 8"<<name[8]<<"=";
  // int value=(int)name[8];
  // cout<<value;
}


#include<iostream>
using  namespace std;
int main()
{
  string name;
  cin>>name;
  string yup=" ";
  // to check , length of string 
  cout<<" length of string : "<<name.length()<<endl;
  // to check , is string empty or not
  cout<<" length of string is : "<<yup.length()<<endl;
  // to check , specfic position pe kya h ?
  cout<<" at index 5 : -> "<<name.at(5)<<endl;
  // to check , front  or 1st character of string
  cout<<" front character of string is : "<<name.front()<<endl;
  // to check , back or last character of string
   cout<<" back character of string is : "<<name.back()<<endl;
  // APPEND 2 string
  string str1=" hey";
  string str2=" everyone";
  cout<<str1.append(str2)<<endl;
  // ERASE A PART FROM STRING
  string desc="cheems say hello to world";
  cout<< desc.erase(6,10)<<endl;
  // INSERT A STRING BETWEEN A STRNG
  string petname="dogesh gupta";
  string str3="kumar";
  cout<<petname.insert(7,str3)<<endl;
  // TO ADD ADITIONAL OR REMOVE A CHARACTER FROM STRING
  string name1="abhishek";
  cout<<name1<<endl;
  name1.push_back('v');
  cout<<name1<<endl;
  name1.pop_back();
  cout<<name1<<endl;
  // TO FIND A STRING IN ANOTHER STRING
  string music1=" sometime i think aboout u ";
  string music2="think";
  if(music1.find(music2)==string::npos)
  {
    cout<<" Not Found "<<endl;
  }
  else {
   cout<<"Found"<<endl;
  }
  // TO COMPARE 2 STRING
  string yes1="hazard";
  string yes2="hazard";
  if(yes1.compare(yes2)==0)
  {
    cout<<"matching"<<endl;
  }
  else{
    cout<<"not matching"<<endl;
  }
  // TO GET A SUBSTRING
  string get="open your notebook and dry run the code";
  cout<<get.substr(10,8); 
}




