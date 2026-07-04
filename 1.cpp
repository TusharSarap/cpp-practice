#include<iostream>
using namespace std;

inline char fn(static char a){
    cout<<"overload1"<<endl;
    a=++a;
    return a;
    }

int main()
{

    cout<<fn('4')<<endl; 
    return 0;
    //new edit 1
}