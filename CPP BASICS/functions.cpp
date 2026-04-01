/*
1.set of code which performs something for you
2.used to modularise code
3.used to increase readiblity
4. used to use same code multiple times
*/

// types of functions
// void
// return
// parameterised
// non parameterised

// #include <bits/stdc++.h>
// using namespace std;
// string name;

// void printName(){
//     cout<<name;
// }

// int main() {
//     getline(cin,name);
//     printName();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void printName(string name1,string name2){
//     cout<<"hey "<<name1<<" "<<name2;
// }

// int main() {
//     string name1;
//     string name2;
//     cin>> name1>>name2;
//     printName(name1,name2);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void printName(string name1){
//     cout<< name1<<endl;
// }

// int main() {
//     string name1;
//     cin>>name1;
//     printName(name1);

//     string name2;
//     cin>> name2;
//     printName(name2);

//     return 0;
// }

// add two values

// return function
//  #include <bits/stdc++.h>
//  using namespace std;
//  int sum(int num1,int num2){
//      int num = num1+num2;
//      return num;
//  }
//  int main() {
//      int num1,num2;
//      cin>> num1>>num2;
//      int res = sum(num1,num2);
//      cout<<res;
//      return 0;
//  }

// void function
//  #include <bits/stdc++.h>
//  using namespace std;
//  void sum(int num1,int num2){
//     int  num=num1+num2;
//      cout<<num;
//  }
//  int main() {
//      int num1,num2;
//      cin>> num1>>num2;
//      sum(num1,num2);
//      return 0;
//  }

// user defined maxx function
//  #include <bits/stdc++.h>
//  using namespace std;
//  int maxx(int num1,int num2){
//      if(num1>=num2){
//          return num1;
//      }
//      else {
//          return num2;
//      }
//  }
//  int main() {
//      int num1,num2;
//      cin>>num1>>num2;
//      int maximum = maxx(num1,num2);
//      cout<<maximum;
//      return 0;
//  }

// inbuilt max
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int maximum = max(num1, num2);
    cout << maximum;

    return 0;
}