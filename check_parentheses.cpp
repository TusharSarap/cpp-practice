// Write a program to check whether the parentheses in a given string
// are balanced or not using a stack.
// Input: A string containing '(' and ')' characters.
// Output:
// "You have Equal perenthesis closing" if all parentheses are balanced,
// otherwise "You dont have Equal perenthesis closing".

// Example 1:
// Input:
// (()())

// Output:
// You have Equal perenthesis closing

// Example 2:
// Input:
// (()

// Output:
// You dont have Equal perenthesis closing

// Example 3:
// Input:
// ())

// Output:
// You dont have Equal perenthesis closing

#include <iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
    string s;
    stack<char> check;
    cin>>s;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            check.push(s[i]);
        }
        else if(s[i]==')'){
            check.pop();
        }
        // cout<<check.top();
    }
    
    if(check.empty()){
        cout<<"You have Equal perenthesis closing";
    }
    else{
        cout<<"You dont have Equal perenthesis closing";
    }
    
    
    
    

    return 0;
}
