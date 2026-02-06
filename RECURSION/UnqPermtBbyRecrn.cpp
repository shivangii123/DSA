// #include<iostream>
// #include<vector>
// #include<unordered_set>
// using namespace std;

// void  permt(vector<int> &nums, int index, vector<vector<int>> &result){
//     if(index == nums.size()){
//         result.push_back(nums);
//             return ;
//     }

//     for(int i=index ;i< nums.size(); i++){

//         if(i !=index && nums[i] == nums[index] ){
//             continue ;
//         }
//         swap(nums[index], nums[i]);
//         permt(nums, index+ 1, result);
//         swap(nums[index], nums[i]);

//     }
// }

// int main(){

//     int n ; cout<<"Enter size : "; cin>> n;

//     vector<int> nums(n) ;
//     cout<<"Enter elements : " ;
//     for(int i=0;i<n; i++){
//         cin>> nums[i];
//     }

//     vector<vector<int>> result ;
//     permt(nums, 0 , result);

//     cout<<"ALL PERMUTATIONS are : " ;
//     for(auto x: result){
//         cout<<"[" ;
//         for(auto y : x){
//             cout<< y<<" ";
//         }
//         cout<<"] ";
//     }

//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

void strPermt(string &s , int index, vector<string> &result){
    if(index == s.size()){
        result.push_back(s);
        return ;
    }

    for(int i= index; i<s.size(); i++){

        swap(s[index], s[i]);
        strPermt(s, index + 1, result);
        swap(s[index], s[i]);
    }
}

int main(){

    string s; cout<<"Enter a string : "; cin>> s;

    vector<string> result ;

    strPermt(s ,0 ,result);
    cout<<"All STRING PERMUTATIONS are: " ;
    for(auto el: result){
        cout<<el<<" " ;
    }
    return 0;
}