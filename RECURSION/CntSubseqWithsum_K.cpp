#include<iostream>
#include<vector>
using namespace std;

int cntSubseq(vector<int> &arr, int i, int sum, int k ){
    if(i== arr.size()){
        if(sum== k){
            return 1;
        }
        return 0 ;
    }

    sum += arr[i];
    int l= cntSubseq(arr, i+1 , sum , k);

    sum -=arr[i];
    int r= cntSubseq(arr, i+1 , sum , k );

    return l+ r;
}
int main(){

    int n ; cout<<"Enter array size : "; cin>> n ;
    int k ; cout<<"Enter k : " ; cin>> k ;

    vector<int> arr(n);
    for(int i =0; i<n ; i++ ){
        cin>> arr[i];
    }

    cout<<"Count is : "<< cntSubseq(arr,0, 0, k );
    
    return 0;
}