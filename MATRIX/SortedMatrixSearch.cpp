#include<iostream>
using namespace std;

int main(){

    int m,n,T;
    int arr[m][n];
    cout<<"Enter m and n : ";
    cin>>m>>n;
    cout<<"Enter elemnet to search : " ;
    cin>>T ;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int l,h,mid;
    int BinarySearch(int arr , int l , int h,int mid){
        mid=(l+h)/2 ;
        if(T>arr[i][j]){
            BinarySearch(int arr,int )
        }

    }



    return 0;
}