// Given N bags of candies, eat from the bag with the maximum candies K times.
// After eating, replace that bag with half its candies (integer division).
// Example: N=3, K=3, bags={2,5,3} -> eat 5, 3, 2 -> total = 10.

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
            auto n=bag.end();
            n--;
            eat += *n;
            bag.erase(bag.find(*n));
            bag.insert(*n/2);

        }
        cout<<"candy eat in loop-"<<i+1<<" "<<eat;
    }
    
}
