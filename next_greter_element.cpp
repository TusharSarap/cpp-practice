/*
Problem: Next Greater Element (NGE)

Given an array of integers, find the Next Greater Element for every element.
The Next Greater Element of an element x is the first greater element
present on its right side in the array. If no greater element exists,
output -1 for that position.

Example:

Input:
arr[] = {4, 5, 2, 25, 7, 8}

Output:
5 25 25 -1 8 -1
*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main(){
    int arr[]={4,5,2,25,7,8};
    stack<int> nL;
    vector<int> ans(6,-1);
    for(int i=0;i<=5;i++){
        
        while(!nL.empty() && arr[nL.top()]<arr[i]){
                ans[nL.top()]=arr[i];
                nL.pop();
        }
        
        nL.push(i);
    }
    for (auto it:ans){
        cout<<it<<" ";
    }
}
