/*
Problem:
You are given N student records, where each record contains a student's
name and marks. Multiple records may exist for the same student.

Print all records in descending order of marks.
If two records have the same marks, sort them lexicographically by name.

Input Format:
- First line contains an integer N.
- Next N lines contain a student's name and marks.

Output Format:
Print each record in the format:
<name>: <marks>

Example:

Input:
4
Alice 94
Alice 87
Bob 97
Cat 80

Output:
Bob: 97
Alice: 94
Alice: 87
Cat: 80

*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int>a,pair<string,int>b){
    if(a.second != b.second){
        return a.second > b.second;
    }
    else{
        return a.first > b.first;
    }
    
}

int main(){
    int count;
    cin>>count;
    
    vector<pair<string,int>> student;
    
    while(count--){
        int marks;
        string name;
        cin>>name>>marks;
        student.push_back({name,marks});
    }
    sort(student.begin(),student.end(),cmp);
    
    for(auto m:student){
        cout<<m.first<<": "<<m.second<<endl;
    }
    
}

