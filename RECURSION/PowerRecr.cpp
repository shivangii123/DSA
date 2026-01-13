#include<iostream>
using namespace std;

int power(int x, int y){
    cout<<"x: "<<x<<" and  y :"<<y<<endl ;
    if(y==0){
        return 1;
    }
    // either y==0 or y==1 amy one
    // if(y==1){
    //     return x;
    // }
    else{
        return x * power(x, y-1);
    }
}

int main(){

    int x,y;
    cout<<"Enter x n y : ";
    cin>>x>>y;

    cout<<x <<" to the Power of " << y <<" is : "<<power(x,y);


    return 0;
}


// not working for larger y on LEETCODE
// #include <iostream>
// using namespace std ;

// int pow(int x,int y){
//     if(y==0) return 1;
//     return x * pow(x,y-1);
// }
// double calc(int x , int y){
//     double ans ;
//     if(y< 0){  // neg power
//         y= -y ;
//         ans = 1.0/pow(x,y);
//     }
//     else{
//         ans= pow(x,y) ;
//     }
//     return ans ;
// }

// int main() {
//     int x, y ;cout<<"enter x and y :";
//     cin>> x>> y ;
    
//     cout<<"ANS is:  "<< calc(x,y);

//     return 0;
// }