#include<iostream>
#include<vector>
using namespace std;

// void bubbleSort(vector<int>&arr, int n , int i){
//     if(i== n-1){  //base case
//         return ;
//     }

//     for(int j=0;j<n-1-i;j++){ // recursive
//         if(arr[j]>arr[j+1] )
//         swap(arr[j], arr[j+1]);
//     }
//     bubbleSort(arr, n , i+1);
// }

/********* Replace 'j' loop with recursion ********/
void bubbleSort(vector<int> arr, int n , int i,int j){
    if(i==n-1){
        return ;
    }

    if(j<n-1-i){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]) ;
        }
        bubbleSort(arr, n , i, j+1 ) ;  // if we exit loop of 'j', we increment i
    }
    
    bubbleSort(arr, n, i+1, 0) ;
}

int main(){
    int n ; cout<<"enter n :" ;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n ; i++){
        cin >>arr[i] ;
    }

    bubbleSort(arr, n, 0);
    cout<<"Sorted array becomes : ";
    for(int el : arr){
        cout<< el <<" " ;
    }
    return 0;
}