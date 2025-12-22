#include<iostream>
#include<vector>
using namespace std;

    void getAns(vector<int>& candidates,int index,int target, int sum , vector<int> &ans, vector<vector<int>>&res){
        if (sum == target){
            res.push_back(ans);
            return ;
        }

        else if (sum > target){
            return ;
        }

        for(int i=index;i< candidates.size() ;i++){
            sum +=candidates[i] ;// make choice , add elem
            ans.push_back(candidates[i]) ;

            getAns(candidates, i,target, sum, ans, res);// explore
            sum -=candidates[i];// UNDO
            ans.pop_back();

        }

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>> res ;
        getAns(candidates,0,target,0,ans, res);
        return res ;
    }


int main(){
    int n; cout<<"enter array size : "; cin>> n ;

    vector<int> candidates(n);
    for(int i =0;i<n ; i++){
        cin>>candidates[i];
    }
    int target; cout<<"enter target " ; cin>> target ;
    vector<vector<int>>res;
    res= combinationSum(candidates, target);
    for(auto x: res){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl ;
    }

    return 0;
}