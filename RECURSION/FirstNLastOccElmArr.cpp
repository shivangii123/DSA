//ARRAY  :[ 7 1 7 8 9 7] n=6, k=7
//first occurence of 7 is :0 , last occurence of 7 is :5
#include <iostream>
#include<vector>
using namespace std;

int first(vector<int>&arr, int i,int k){
    if (i== arr.size())
        return -1 ;
    if(arr[i]== k)
        return i;

        return first(arr, i+1,k) ;
}
int last(vector<int>& arr, int n, int k){
    if(n==0) return -1 ;
    if(arr[n-1]==k) return n-1 ;
    
    return last(arr,n-1, k) ;
}
void allIndices(vector<int>& arr, int i ,int k){
    if(i==arr.size())
        return ;
    if(arr[i]== k)
        cout<< i<<" ";
    allIndices(arr,i+1, k);

}

int main() {
    int n,k ; cout<<"Enter n and k: ";cin>> n >>k ;
    
    vector<int> arr(n);
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
    
    cout<<"index of first occurence of "<<k<<" is :"<<first(arr, 0, k);
    cout<<"\nindex of last occurence of "<<k<<" is :"<<last(arr,n, k);
    cout<<"\nindex of All occurence of "<<k<<" is :" ;
    allIndices(arr,0, k);

    

    return 0;
}
