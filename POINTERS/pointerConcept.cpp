#include<iostream>
using namespace std;

void func(int* ptr){
    cout<<"\nValue of ptr inside function : "<<*ptr<<endl ;
}


int main(){

    int x=10;
    int *ptr=&x; //ptr->100
    int **xptr=&ptr; //xptr ->addr of ptr
    //**xptr-> times reference-> we feach  to original x
    //,and 'Dereference' se  print value of x
    cout<<&x<<" "   <<ptr<<" "  <<*xptr   <<" "   <<  **xptr   <<endl;
 //addrs of x   //addr of x // Addr of x= value in ptr  // x ki value


    // int a=30;
    // int * iptr=&a ;
    // cout<<"Value  at 'a' is  : "<<*iptr<<endl ;

    // char c='n' ;
    // char* cptr= &c;

    // bool b=true ;
    // bool* bptr=&b ;

    // cout<<iptr<<" " <<&a <<&iptr<<endl  ;
    // cout<<cptr<<" " <<*cptr<<" " <<&cptr<<endl ;//when we print char pointer ,it prints value inside that char pointer
    // // char pointerpritns value garbage value untill it gets NULL
    // // Soe can't print Address of character variables
    // cout<<bptr<<" " <<&b <<endl ;


    // // Dereferencing a pointer
    // cout<<"Dereferencing a pointer  : " ;
    // int x=516;
    // char * ptr=(char*)&x;
    // cout<<(int)*ptr <<endl;

    // float f=23.8;
    // float* fptr=&f;
    // cout<< *fptr <<" "<< &f ;


    // func(iptr);//func mein iptr pass kiya
    
    char ch='g' ;
    int* chptr =(int*) &ch;
    cout<<chptr <<" "<<&ch; //'chptr' : is int* pointer so prints Addr
                            // but '&ch'-> char* pointer so prints value
    cout<<*chptr<<" "<<ch;//print Random value ,'chptr'is int* type ->take 4bytes, but get 1byte as ch=char type , so rest 3byte are garbage
                         // ch gives value:'g'

    return 0;
}