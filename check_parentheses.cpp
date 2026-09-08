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

#include <bits/stdc++.h>
using namespace std;

unordered_map<char,int> symbol{{'{',-1},{'[',-2},{'(',-3},{'}',1},{']',2},{')',3}};

string isBalance(string s){
    stack<char> match;
    for(char bracket:s){
        if(symbol[bracket] < 0){
            match.push(bracket);
        }
        else{
            if(match.empty()){
                return "No";
            }
            char top = match.top();
            match.pop();
            if(symbol[top] + symbol[bracket] != 0 ){
                return "No";
            }
            
        }
    }
    if(match.empty()){
        return "Yes";
    }
}
int main()
{
    int count;
    cin>>count;
    while(count--){
        string s;
        cin>>s;
        cout<<isBalance(s)<<endl;
    }
    
}
