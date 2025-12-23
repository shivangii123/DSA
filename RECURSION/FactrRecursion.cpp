#include<iostream>
using namespace std;

int fact(int n){
    if(n<0){
        return -1;
    }
    else if(n==0 || n==1){
        return n;
    }
    else{
        return n * fact(n-1);
    }
}

int main(){

    int n; cout<<"Enter no : ";
    cin>>n;

    int ans =fact(n);

    if(ans=-1){
        cout<<"\nHEY enter positive number !! ";
    }
    else{
    cout<<"\nFactorial of "<<n <<" is : "<<ans;
    }
    return 0;
}