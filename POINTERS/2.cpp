#include<iostream>
using namespace std;

// int main(){
//     int  x=1;
//     void* vptr=&x;
//     cout<<vptr<<" "<<&x <<endl;

//     char c='p';
//     void *vvptr=&c;
//     cout<<vvptr<<endl ;
//     return 0;
// }

void passAll(void* vptr,int sz){
    if(sz==4){
        int * iptr=(int*)vptr ;
        cout<<iptr<<endl;
    }
    if(sz==1){
        int * bptr=(int*)vptr ;
        cout<<bptr<<endl;

    }
    if(sz==8){
        int * dptr=(int*)vptr ;
        cout<<dptr<<endl;

    }
}

int main(){
    int x=1;
    passAll(&x,sizeof(x));

    char c='o';
    passAll(&c,sizeof(c));
    
    double d =9.82;
    passAll(&d,sizeof(d));


}