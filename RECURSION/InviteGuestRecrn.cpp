#include<iostream>
using namespace std;

int inviteGuest(int n){
    if(n == 0){
        return 1;
    }
    if(n<0){
        return 0;
    }

    return inviteGuest(n-1) +inviteGuest(n-2);
}

int main(){
    int n ; cout<<"Enter no. of guests : "; cin>>n ;
    cout<<"No. of Ways is : " <<inviteGuest(n);

    return 0;
}