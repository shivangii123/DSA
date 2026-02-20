#include<iostream>
using namespace std;

int main(){

    // int x=78.7; //or int x=78 or 78.2 , o/p: is alays 'N'
    // char* cptr= (char*) &x;

    // cout<<"character pointer : "<<cptr<<endl;

    
    int a=10;
    int *b=&a ;//'int pointer'

    char c='d';
    char* ctr=&c ; //'char pointer' gives value at tht address until finds NULL
    cout<<"Char pointer is : " <<ctr ;
    cout<<"so in ans ,Char pointer gives value stored in variable " <<endl ;

    cout<<"char ptr ko dereference kara : " <<*ctr; //we getvalue of char variable

    float* ictr=(float*)ctr;
    int* iictr=(int*) &c;  //type casting char pointr to integer pointer
    cout<<"\nChar varible address(type casting):" <<ictr <<"  or   " <<iictr<<endl ;
    

    int *iptr =b; //ek int pointer mein 'int' pointer store kiya
    int* iiptr=(int*)ctr; //expliticly convert 'char pointer' to 'int pointr' and store into 'int pointer'

    cout<<"iptr : " <<iptr <<"\nAddres of a : " <<&a<<endl;
    cout<<"Conclusion :Both are same " <<endl;
    
    ///int variable ko float pointer mein store kiya through explicit convversion    ///

    float p=45.5;
    bool* fp= (bool*)&p;
    cout<<fp<<" " << &p <<endl;

    return 0;
}