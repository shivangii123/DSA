// // #include<iostream>
// // #include<vector>
// // using namespace std;
//  /****************** SUBSETS With DUPLICATE VALUES ************ */
// // void crtSubset(vector<int> &nums ,int i, vector<int> &comb, vector<vector<int>> &result){
// //     if(i==nums.size()){
// //         result.push_back({comb});
// //         return ;
// //     }

// //     comb.push_back(nums[i])  ;
// //     crtSubset(nums, i+1, comb, result);

// //     comb.pop_back()  ;
// //     crtSubset(nums, i+1, comb, result);
// // }

// // vector<vector<int>> printSubsets(vector<int> &nums , vector<vector<int>> &result ){
// //     vector<int> comb;

// //     crtSubset(nums, 0, comb , result);
// //     return result ;
// // }

// // int main(){

// //     int n; cout<<"enter array size : "; cin>> n ;
// //     vector<int> nums(n); // [1,2,3,4]
// //     cout<<"Enter elements : " ;
// //     for(int i=0;i<n ;i++){
// //         cin>>nums[i] ;
// //     }

// //     vector<vector<int>> result ; // powerset
// //     result = printSubsets(nums , result) ;

// //     cout<<"SUBSETS are : \n" ;
// //     for(auto x: result){
// //         if(x.empty()){
// //             cout<< "{}" ;
// //         }
// //         for(auto y: x){
// //             cout<<y<<" ";
// //         }
// //         cout<<endl ;
// //     }
// //     return 0;
// // }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 /****************** UNIQUE SUBSETS VALUES ************ */

void crtSubset(vector<int> &nums ,int i, vector<int> &comb, vector<vector<int>> &result){
    if(i==nums.size()){
        result.push_back({comb});
        return ;
    }

    comb.push_back(nums[i])  ;
    crtSubset(nums, i+1, comb, result);

    comb.pop_back()  ;
    int indx=i+1 ;
    while(indx< nums.size() && nums[indx]== nums[i]){
        indx ++ ;
    }
    
    crtSubset(nums, indx, comb, result);
}

// void crtSubset(vector<int> &nums ,int i, vector<int> &comb, vector<vector<int>> &result){
//     if(i==nums.size()){
//         result.push_back({comb});
//         return ;
//     }

//     int indx=i+1 ;
//     while(indx< nums.size() && nums[indx]== nums[i]){
//         indx ++ ;
//     }

//     comb.push_back(nums[i])  ;
//     crtSubset(nums, i+1, comb, result);
//     comb.pop_back()  ;
//     crtSubset(nums, indx, comb, result);
// }

vector<vector<int>> printSubsets(vector<int> &nums , vector<vector<int>> &result ){
    vector<int> comb;

    crtSubset(nums, 0, comb , result);
    return result ;
}

int main(){

    int n; cout<<"enter array size : "; cin>> n ;
    vector<int> nums(n); // [1,2,3,4]
    cout<<"Enter elements : " ;
    for(int i=0;i<n ;i++){
        cin>>nums[i] ;
    }

    sort(nums.begin (), nums.end());

    vector<vector<int>> result ; // powerset
    result = printSubsets(nums , result) ;

    cout<<"SUBSETS are : \n" ;
    for(auto x: result){
        if(x.empty()){
            cout<< "{}" ;
        }
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl ;
    }
    return 0;
}



// #include<iostream>
// #include<vector>
// #include<algorithm>



// using namespace std;

// void genrtSubset(vector<int> &nums, int i ,vector<int> &ans, vector<vector<int>> &result ){
// result.push_back(ans);

//     for(int j=i ; j<nums.size() ; j++){ // i=1->n then i=2->n , 3->n .. 
//         if(j> i && nums[j]== nums[j-1]){  // each ans array made using RECURSION
//             continue ;
//         }
//         ans.push_back(nums[j]);
//         genrtSubset(nums,j+1,ans,result);
//         ans.pop_back() ;
//     }
// }

// int main(){
//     int n ; cout<<"Enter array size : "; cin>> n;

//     vector<int> nums(n);
//     cout<<"Enter elements : " ;
//     for(int i=0;i<n ; i ++){
//         cin>>nums[i] ;
//     }

//     sort(nums.begin(), nums.end());

//     vector<int> ans ;
//     vector<vector<int>> result ;
//     genrtSubset(nums, 0, ans, result);

//     cout<<"SUBSETS are : " ;
//     for(auto x: result){
//         if(x.empty()){
//             cout<<"{}";
//         }
//         for(auto y : x){
//             cout<<y<<" " ;
//         }
//         cout<<endl ;
//     }

//     return 0;
// }