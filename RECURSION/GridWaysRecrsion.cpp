/* Count ways to reach last cell: (n-1,m-1) from (0,0)
we can come to (i,j) cell from left or from above so,
 [ fn(i,j) = f(i-1,j) + f(i,j-1) ] 
*/

#include<iostream>
using namespace std;

int gridWays(int i,int j){
    // first row ya col ke liye only one way
    if(j== 0 || i== 0){return 1 ;}
    

    return gridWays(i,j-1) +gridWays(i-1,j) ;
}

int main(){
    int n,m; cout<<"Enter n and m : " ;cin>>n>>m ;

    cout<<"No. of ways to reach "<<n-1<<","<<m-1<<" cell :"<<gridWays(n-1,m-1) ;
    return 0;
}