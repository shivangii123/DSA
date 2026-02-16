#include<iostream>
using namespace std;

int main(){

    int n; cout<<"enter n : " ;
    cin>>n;
    int arr[n] ;//arr mein first element ka address dalega

    for(int i=0;i<n;i++){
        cin>>arr[i]; //or cin>>[arr+i];
    }

    cout<<arr<<endl;
    
    cout<<arr<<" "<<&arr[0] <<endl ;
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" " <<*(arr+i)<<endl ;
    }

    // char arr2[n];
    // cout<<"Enter :" ;
    // for(int i=0;i<n;i++){
    //     cin>>arr2[i] ;
    // }
    //     cout<<arr2<<endl; //print full array
    
}