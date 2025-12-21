// // arr=[3,2,1,4]
// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main(){
//     int n ; cout<<"enter n : "; cin>> n ; 
//     int arr[n] ;

//     for(int i=0;i<n-1 ;i++){
//         cin>>arr[i];
//     }

//     unordered_map<int, int> freq(n) ;
//     for(int i=0;i<n-1; i++){
//         freq[arr[i]-1]++ ;
//     }
    
//     for(int i=0;i<n;i++){
//         if(freq[i]== 0){
//             cout<<"missing elm is : "<<i+1 ;
//         }
//     }
//     return 0;
// }

///********M-2 (using sum to N no. formula)******////
#include<iostream>
using namespace std;

int main(){
    int n ;cout<<"Enter n : " ; cin>>n;

    int arr[n-1];
    cout<<"Enter "<<n-1<<" numbers.."<<endl ;
    for(int i= 0;i<n-1;i++){ // i/p
        cin>> arr[i] ;
    }

    int sum =0;
    for(int i=0;i<n-1;i++){
        sum += arr[i] ;
    }

    int ans = (n*(n+1))/2 - sum ;
    cout<<"Missimg number is : "<< ans<<endl ;

    return 0;
}
