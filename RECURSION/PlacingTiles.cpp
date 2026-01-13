/******* It's DP problem , Recursion- T.C : O(2^n)-Exponential -v.bad */
#include<iostream>
using namespace std;

int countWays(int n , int m ){
    if(n < m){ return 1;}
    if (n == 0){return 1;} // got one way

    if(n == m ){  return 2; }
    // when n > m
    return countWays(n-m , m) + countWays(n-1, m) ;
}

int main(){
    int n , m ;cout<<"Enter n and m : "; cin>>n >>m;
    cout<<"No of ways are : " << countWays(n , m );

    return 0;
}