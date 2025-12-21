// /* Check if a number(n) is "power of 2" ,return true else false */
// /**M-1 T.C=O(logn) , each iteration doubles the ans **/ 
// #include<iostream>
// using namespace std;

// bool isPowerOfTwo(int n){
//     long long ans= 1;
//     while(ans<=n){
//         if(ans == n)  return true ;
        
//         ans = ans *2 ;
//     }
//     return false ;
// }

// int main(){
//     int n ;cout<<"Enter a number :"; cin>>n ;
//     cout<<boolalpha<<isPowerOfTwo(n);
//     return 0;
// }


/******* M-2 , using BITWISE AND *****/
/*in Binary Repst ,power of 2 wala no : has exactly 'one 1', all other bits are 0
if n is power of 2 :-  n & (n-1) = 0  (logical AND)
-> n has one 1
-> n - 1 flips that 1 to 0 and turns all bits after it to 1*/
#include<iostream>
using namespace std;

bool isPow2(int n){
    if(n<=0) return false ;// negatie numbbers are not power of 2
    if( (n & (n-1)) == 0) return true ;
    else return false ;
}
int main(){
    int n ;cout<<"Enter a number :"; cin>>n ;
    cout<<boolalpha<<isPow2(n);
    return 0;
}