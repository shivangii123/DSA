#include<iostream>
#include<vector>
using namespace std;
/***********Print ALL the Subsequence with Sum _K  */
/******Approach:Genrt all subseq then check if sum=k , SuBseq- can't change order, */
// We cant say if (sum >k)- return : can't do prunning , only works for POSITIvE NO. 

void Subseq(vector<int> arr,int i ,int sum, int &cnt ,int k,vector<int> &ans, vector<vector<int>> &result){
    if(i==arr.size()){  // base case
        if(sum == k){
            result.push_back(ans);
            cnt++ ;
        }
        return ;
    }

    ans.push_back(arr[i]);
    sum += arr[i];
    Subseq(arr, i +1, sum,cnt, k,ans,result) ;

    ans.pop_back();
    sum -=arr[i];
    Subseq(arr, i+1, sum ,cnt,k ,ans , result);
        
}


int main(){
    int n ; cout<<"Enter array size : ";cin>> n ;
    vector<int> arr(n);
    cout<<"Enter elements : ";
    for(int i=0 ;i< n ;i++){
        cin>>arr[i] ;
    }
    
    int k ; cout<<"enter k : " ; cin>> k;

    vector<int> ans;
    vector<vector<int>> result ;
    int cnt =0 ;
    Subseq(arr,0,0,cnt,k,ans, result);

    cout<<"Sub sequences with sum k : \n";
    for(auto i : result){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl ;
    }

    cout<<"Count of subsequences is : " << cnt ;
    return 0;
}

