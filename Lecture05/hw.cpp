#include<iostream>
using namespace std;

int main(){
    int n,prev,last,curr;
    cin>>n;
    last = 0;
    prev=1;
    if(n==1){
        cout<<last;
        return 0;
    }
    for(int i=2;i<n;i=i+1){
        curr=prev+last;
        last = prev;
        prev = curr;
    }
    cout<<prev;
    return 0;
}