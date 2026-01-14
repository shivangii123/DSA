#include<iostream>
#include<vector>
using namespace std;
/***********Print only ONE Subsequence with Sum _K  */
/******Approach:Genrt all subseq then check if sum=k , SuBseq- can't change order, */
// We cant say if (sum >k)- return : can't do prunning , only works for POSITIvE NO. 

bool Subseq(vector<int> arr,int i ,int sum, int k,vector<int> &ans, vector<vector<int>> &result){
    if(i==arr.size()){  // base case
        if(sum == k){
            result.push_back(ans);
            return true ;
        }
        return false;
    }

    ans.push_back(arr[i]);
    sum += arr[i];
    if(Subseq(arr, i +1, sum,k,ans,result)){
        return true ;
    }

    ans.pop_back();
    sum -=arr[i];
    if(Subseq(arr, i+1, sum ,k ,ans , result) ){
        return true ;
    }
    return false ;
        
}


int main(){
    int n ; cout<<"Enter array size : ";cin>> n ;

    int k ; cout<<"enter k : " ; cin>> k;
    vector<int> arr(n);
    cout<<"Enter elements : ";
    for(int i=0 ;i< n ;i++){
        cin>>arr[i] ;
    }

    vector<int> ans;
    vector<vector<int>> result ;

    Subseq(arr,0,0,k,ans, result);

    cout<<"Sub sequences with sum k : \n";
    for(auto i : result){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl ;
    }
    return 0;
}

