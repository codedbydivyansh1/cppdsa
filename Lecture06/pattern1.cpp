#include <iostream>
using namespace std;

// int main(){
//     for(int row = 1;row<=5;row=row+1){
//         for(int col =1;col<=5;col=col+1){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     for(int row = 1;row<=5;row = row+1){
//         for(int col= 5;col>=1;col = col-1){
//             cout<<col<<" ";
//         }cout<<endl;
//     } 
// }


// int main(){
//     int row,col;
//     for(row = 1;row<=5;row=row+1){
//         for(col=1;col<=5;col = col+1){
//             cout<<col*col<<" ";
//         }
//         cout<<endl;
//     }
// }


// alphabets pattern

// int main(){
//     int row,col;
//     for(row=1;row<=5;row=row+1){
//         for( col = 1;col<=5;col=col+1){
//             char name = 'a'+col-1;
//             cout<<name<<" ";
//         }cout<<endl;
//     }
// }


// increasing number pattern
int main(){
    int count=1;
    for(int row =1;row<=5;row=row+1){
        
        for(int col =1;col<=5;col=col+1){
            cout<<count<<" ";
            count = count+1;
        }cout<<endl;


    }
}
