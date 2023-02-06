// STUDENT GRADES PROBLEM USING FUNCTION
#include <iostream>
using namespace std;
void grade(char A, char B, char c)
{
    int marks;
    cin >> marks;
    if (marks >= 85)
    {
        cout << "A";
    }
    else if (marks >= 60)
    {

        cout << "B";
    }
    else if (marks >= 20)
    {
        cout << "c";
    }
}

int main()
{
    char A, B, C;
    grade(A, B, C);
}