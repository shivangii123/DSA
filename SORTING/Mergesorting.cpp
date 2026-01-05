//Sort array using Merge Sort : arr=[6 5 7 4 3 8 9 0 1 2], arr2= {5,2,3,7,4,1};

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr,vector<int>&b, vector<int>&c, int s,int e){
    int m= s+ (e-s)/2 ;
    int i= s, j=m+1 , k=s;
    
    while(i<=m && j<=e){
        if(b[i] <c[j] ){
            arr[k++]= b[i++];
        }
        else{
            arr[k++] =c[j++] ;
        }
    }
    while(i<=m){
        arr[k++]=b[i++];
    }
    while(j<=e){
        arr[k++]= c[j++] ;
    }

}

void mergeSort(vector<int>&arr, int s,int e){
    if(s>= e) return ; // single element left
    
    vector<int>b(100), c(100);
    int m = s + (e-s)/2 ;
    //1. divide into 2
    for(int i=s;i<=m;i++){
        b[i]= arr[i] ;
    }

    for(int i=m+1;i<=e;i++){
        c[i]= arr[i] ;
    }

    // 2.sorting(break down to single elm , so they are sorted)
    mergeSort(b,s,m);
    mergeSort(c,m+1,e);

    //3. merge
    merge(arr,b ,c,s,e);
}


int main(){
    int n;
    cout<<"Enter n : "; cin>> n ;

    // int arr[n];
    vector<int>arr(n);
    cout<<"Enter array elements : " ;
    for(int i=0;i<n ; i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);

    cout<<"Sorted array is : " ;
    for(int i=0;i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}