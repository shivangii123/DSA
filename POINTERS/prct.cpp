// #include<iostream>
// using namespace std;

// string greet(){
//     return "hello" ;
// }

// int add(int x,int y){
//     cout<<greet()<<endl;
//     return x+y ;
// }

// int main(){
// cout<<add(1,2)<<endl;

//     return 0;
// }

#include<iostream>
using namespace std;

// float* f(){
//     float x=34.5 ;
//     return &x;
// }

int* f1(){
    int* ptr= new int ;//using HEAP (dynamc mry),returns Adr
    *ptr =10;
    return ptr;//heap ka addr is returned
}

int main(){
    // float* xptr=f();
    // cout<<*xptr<<endl;//error-> addr of local 'x' returned

    int* yptr =f1();
    cout<<*yptr<<endl;//print VALUE stored at heap addr
    cout<<yptr<<endl;//prints Addr of HEAP
    
    return 0;
}