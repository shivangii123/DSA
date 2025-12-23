#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// 14 : {2, 7, 10}   ->  2 7 2 2   [2,7,10]..
/* 13 >> 11 >>9>>7
*/

void  makeNum(int num ,vector<int>&arr, vector<int>&curr, int index){
    if(num == 0){  // base case
        for(int x: curr){
            cout<<x<<" ";
        }
        cout<<endl ;
        return ;
    }

    if(num < 0){ return ;}

    for(int i=index; i<arr.size();i++){
        if(i>index && arr[i] == arr[i-1]) continue ; // skip duplicates
        //this ensures you don’t pick the same value at the same recursive level.
        /*"i":  is the current position in the loop.
        "index" :- is the starting point of this recursive call.
i > index means “this is not the first elem we’re picking at this level of recrn.”*/

        curr.push_back(arr[i]) ;
        makeNum(num -arr[i], arr, curr, i);
        curr.pop_back();
        
    }

}


int main(){
    int n , k;
    cout<<"Enter n  and k : ";
    cin>>n>> k;

    vector<int> arr(k ,0);
    cout<<"enter elements of arr : " ;
    for(int i=0;i<k ;i++){  // arr array
        cin>>arr[i] ;
    }
    sort(arr.begin(), arr.end());

    vector<int> curr ;
    makeNum(n,arr, curr , 0) ;

    return 0;
}



// /////////// METHOD-2if I have to return just True or False /////////////////
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;

// bool makeNum(int num, vector<int>&arr){
//     if(num == 0 ){ // base case
//         return true ;
//     }

//     if(num<0){return false ;}
    
//     //recursive case
//     for(int el: arr){
//         num =num- el ;    // make choice
//         if(makeNum(num , arr) ){// explore
//             return true ;
//         }
//         num = num +el ;// UNDO
//     }
//     return false ;
// }

// int main(){
//     int num; cout<<"enter a number : "; cin>> num ;
//     int k; cout<<"enter k : "; cin>> k;

//     vector<int> arr(k);
//     for(int i=0;i<k;i++){
//         cin>>arr[i];
//     }

//     vector<int>curr ;
//     vector<vector<int>> res;
//     cout<<boolalpha<<makeNum(num, arr);

//     return 0;
// }


// // // eg= 13= 2 2 2 2 2 2