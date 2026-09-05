// input 10
// input arr[]={7.3.4.4.5.10,11,15,14,13}
// output (3-5) 7 (10-11) (13-15)
 
// 1) remove duplicate
// 2) sort the array
// 3) subrange - (3-5) (10-11) (13-15)
 

#include<iostream>
#include<set>
using namespace std;

int main(){
	int n;
	cin>>n;
	set<int> s;

	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		s.insert(x);
	}


	int start=*s.begin();
	int prev=start;

	for(auto x:s){
        if (x!=prev+1 && start != prev){
            cout<<"("<<start<<"-"<<prev<<")";
            start=x;
        }
        prev=x;
	}
    cout<<"("<<start<<"-"<<prev<<")";
	return 0;
}
