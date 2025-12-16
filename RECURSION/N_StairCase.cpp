// count no. of ays to reach nth stair
// Approach: we can reach nth stair from n-1, n-2..n-k stair
// so take sum of all ways : i=1to k ;  sum+= f(n-i)
#include<iostream>
using namespace std ;

int nStairs(int n, int k){
    // base case
    if(n == 0){ return 1;}//only one path possible

    if(n<0){return 0;} //invalid path

    int ans= 0 ;
    for(int i=1; i<=k; i++){
        ans += nStairs(n-i, k) ;
    }
    return ans ;
}

int main(){

    int n, k; cout<<"Enter nth stair to reach AND 'K' Step ;";cin>>n>>k;

    cout<< nStairs(n,k) ;

    return 0;
}
