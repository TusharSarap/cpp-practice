
#include <iostream>
#include <set>
#include<algorithm>
using namespace std;

int main()
{
    int i;
    cin>>i;
    while(i--){
        int n,k;
        cin>>n;
        cin>>k;
        int eat =0;
        multiset<int> bag;
        for(int j=0;j<n;j++){
            int count;
            cin>>count;
            bag.insert(count);
        }

        while(k--){
            int n=*bag.rbegin();
            eat += n;
            bag.erase(n);
            bag.insert(n/2);

        }
        cout<<"candy eat in loop-"<<i+1<<" "<<eat;
    }
    
}
