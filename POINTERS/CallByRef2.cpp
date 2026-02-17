#include<iostream>
using namespace std;

void changeA(int* a){ //pass by reference 1) using pointers
    *a =30;
}

void fun2(float &x){
    x=44;
}

void fun3(int &n){
    n=200;

}
int main(){

    int a=10;
    int* iptr=&a;
    changeA(iptr);
    cout<<"now 'a' is : " <<a<< endl ;

    float x=25.5 ;
    cout<<"x is : "<< x<<endl;
    fun2(x);
    cout<<"Now 'x' is : " <<x<<endl ;

    int m=100;
    fun3(m);
    cout<<"Now 'm' is : "<<m<<endl;


    
    return 0;
}