/*
a school has following rules for grading system :
a. below 25-f
b. 25 to 44 -e
c. 45 to 49 - d
d. 50 to 59- c
e. 50 to 79 - b
f. 80 to 100- a
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int grade;
    cin>>grade;
    if (grade < 25)
    {
        cout << "f";
    }
    else if (grade<=44)
    {
        cout << "e";
    }
    else if(grade<=49){
        cout<<"d";
    }
    else if(grade<=59){
        cout<<"c";
    } 
    else if (grade<=79){
        cout<<"b";
    }
    else{
        cout<<"a";
    }
    return 0;
}