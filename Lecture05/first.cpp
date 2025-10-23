#include<iostream>
using namespace std;
// int main(){
//     for(int i = 100;i<=200;i=i+1){
//         cout<<i<<endl;
//     }
// }


// int main(){
//     char name;
//     for(name='a';name<='z';name=name+1){
//         cout<<name<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i =1;i<=n;i=i+3){
//         cout<<i<<endl;
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1;i<=n;i=i+1){
//         cout<<n*i<<endl;
//     }
// }

// int main(){
//     int n,pow,num;
//     cout<<"enter the numberr";
//     cin>>n;
//     cout<<"enter the power:";
//     cin>>pow;
//     num=n;
//     for(int i =1;i<pow;i=i+1){
//         num=num*n;
//     }
//     cout<<num;
// }



// int main(){
//     int n,sum;
//     cin>>n;
//     sum=0;
//     for(int i = 1;i<=n;i=i+1){
//         sum=sum+i;
//     }
//     cout<<"sum of numbers till "<<sum;
// }

// int main(){
//     int n;
//     cin>>n;
//     int fact = 1;
//     for(int i=1;i<=n;i=i+1){
//         fact=fact*i;
//     }
//     cout<<fact;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(n<2){
//         cout<<"not a prime";
//         return 0;
//     }
//     else{
//         for(int i=2;i<n;i=i+1){
//             if(n%i==0){
//                 cout<<"not a prime";
//                 return 0;
//             }
//             cout<<"prime";
//             return 0;
//         }
//     }


int main(){

    int i,n,prev,last,curr;
    cin>>n;
    



    last = 0;
    prev = 1;

    if(n==1){
        cout<<last;
        return 0 ;
    }

    for(i=2;i<n;i=i+1){
        curr = prev+last;
        last = prev;
        prev = curr;
    }
    cout<<prev;
}




