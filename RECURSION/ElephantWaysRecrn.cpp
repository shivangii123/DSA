/*Count no.of ways for elephant to reach any cell (i,j) .
Moves allowed: right , down: 
We can come to (i,j) cell from :- 
Vertically 1,2,3..n steps left se, Horizontally 1,2,3,4.. steps upper se 
 [ fn(i,j) = for(1 to n)left + for(1 to n)Up ] */

#include<iostream>
using namespace std;

int elphWays(int i , int j ){
    if(i== 0 && j== 0){return 1;}
    if(i<0 || j<0 ){return 0 ;}
    
    int sum = 0;
    for(int k= 0; k<i; k++){
        sum += elphWays(k,j);
    }
    for(int k=0; k<j; k++){
        sum +=elphWays(i,k) ;
    }
    return sum ;

}

int main(){
    int n,m; cout<<"Enter n and m :";cin>>n>>m ;

    cout<<"Ways to reach "<<n<<"," <<m<<" cell is :"<<elphWays(n,m);
    return 0;
}

