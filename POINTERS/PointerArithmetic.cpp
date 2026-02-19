#include<iostream>
using namespace std;

int main(){

    // int x=10;
    // int* xptr=&x;

    // cout<<"Earlier xptr is :" <<xptr <<endl ;
    
    // xptr++; //increment hoga to 4byte aage int take 4byte
    // cout<<"Now xptr is :" <<xptr <<endl ;



    // bool b=67;
    // bool* bptr =&b ;
    // bool* bbptr =&b;

    // bbptr++;//bool increase by 1 Byte
    // cout<<"old addr: "<<bptr<<" "<<"New addr: "<<bbptr <<endl;


    // /*************** POINTER TO A POINTER *************/
    
    // float f=28.5;
    // float* fptr= &f;
    // float** fptr2 =&fptr ;
    // float** fptr3 =fptr2; //both are pointer to pointer
    // float** fptr4 =&fptr; //both are of type pointer to pointer(double ptr)

    // cout<<"\nAddres of f : "<< &f <<" " <<fptr<<endl;// same:m addr of 'f'
    // // cout<<"Value at f : "<<f <<" " <<*fptr<<endl; //value of 'f'
    // cout<<"Addr of fptr : "<<&fptr <<" "<< fptr2<<endl;
    // cout<<" Valu of fptr : "<<fptr<<" "<<*fptr2<<endl ;
    // cout<<"Double ptr->Addr of fptr : "<<fptr2<<" "<<fptr3<<" "<<fptr4<<endl;
    // cout<<" Value at double ptr->fptr:->valu of ptr(add of 'f' ): "<<*fptr2<<" "<<*fptr3<<" "<<*fptr4<<endl;
    // cout<<"Value of 'f' :using double dereferencing : "<<**fptr2<<" "<<*fptr<<" "<<**fptr4<<endl;
    // cout<<"addrs of 'f' : " <<&f <<" "<<fptr <<" "<<*fptr2<<endl;

    // cout<<"Derefence fptr : " <<*fptr <<endl;


    // /********* NULL POINTER ************/

    // int m=65 ;
    // int* mptr= NULL ;
    // cout<<"Printing NULL pointer : " <<mptr<<endl ;
    // cout<<"Dereferencing Null pointer : " <<*mptr<<endl ; //Segmentation Fault


    // int a=10;
    // int* p=&a;
    // int** q= &p;

    // cout<<"Addrs of 'a' : "<<&a <<" "<<p<<" "<<*q  <<endl ;
    // cout<<"Value of 'a' : "<<a <<" "<<*p<<" "<<**q  <<endl ;

    // int arr[]={1,2,3,4,5};
    // cout<<"Array addr is : "<< arr <<" , Dereferenc value : "<<*arr<<endl ;

    // cout<<"Elements of array are : " ;
    // for(int i=0 ;i<5;i++){
    //     cout<<*(arr+i)<<" ";
    // }
    

    /****** Subtract 2 pointers ********/

    int a=100;
    int b=20;
    int *ptr1=&a;
    int *ptr2=&b;

    cout<<"Addr : "<<ptr1 <<" "<<ptr2<<endl ;
    cout<< ptr1 -ptr2 <<endl ;

    /*********COMPARE POINTERS (<, >,==,!=) TRUE/FALSE****************/

    int* pt1;
    int* pt2;
    cout<<"Addr of p1 n p2 are : "<< pt1 <<"  "<<pt2<<endl;

    cout<<"Ans is : " <<(pt1 < pt2 ) <<endl;// 1 (True) p1 Addr smaller than p2 Addr
    cout<<"Ans is : " <<(pt1 == pt2 ) <<endl; // 0(false)

return 0 ;
    
}
