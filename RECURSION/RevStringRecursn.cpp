#include<iostream>
using namespace std;

void revString1(string s,int n){ // Tail Recursion
    if(n<0){
        return ;
    }

    cout<< s[n] ;
    revString1(s, n-1);
}

// void revString2(string s,int n ,int i){  // HEAD RECURSION
//     if(i== n ){
//         return ;
//     }
//     revString2(s, n, i+1);
//     cout<<s[i];
// }

int main(){
    string s;
    cout<<"Enter string : " ; cin>> s;

    revString1(s , s.size()-1 );
    // revString2(s , s.size()-1 , 0);

    return 0;
}