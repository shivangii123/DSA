#include<iostream>
#include<cstring>
using namespace std;

int main(){

    int n; cin>>n;
    cout<<"Enter : " ;

    char arr[n+1];//n+1 bcoz last mein null charcter stre karna h
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    arr[n]='\0' ;  //last char par NULL store kya,otherwie garbage value
    // //1st Method : iterate over array
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }

    //2nd Method:
    cout<<arr;

    /**********To compute length of char array******/
    // Meth-1inbuild func
    // cout<<strlen(arr)<<endl ;

    //Meth-2 manually calculate using count variable
    int count=0,i=0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }

    return 0;
}
