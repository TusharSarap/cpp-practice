// input 10
// input arr[]={7.3.4.4.5.10,11,15,14,13}
// output (3-5) 7 (10-11) (13-15)
 
// 1) remove duplicate
// 2) sort the array
// 3) subrange - (3-5) (10-11) (13-15)
 

#include<iostream>
#include<set>
using namespace std;

int main()
{
    int i;
    set<int> m;
    cin>>i;
    while(i--){
            int value;
            cin>>value;
            m.insert(value); 

    }

    auto it= m.begin();
    int start=*it;
    int current=*it;
    int prev=*it;

    while (it!=m.end()){
        current =*it;
        if(current !=prev+1 && start!=prev){
            cout<<'('<<start<<'-'<<prev<<')';
            start= current;
            
        }
        ++it;
        prev=current;
    }
    //for last pair to print
    if(start!=prev){
        cout<<'('<<start<<'-'<<prev<<')';
    }
    
}
