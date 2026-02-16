#include<iostream>
using namespace std;

// void inc(int a){ //CALL BY VALUE
//     a++ ;
// }

// int main(){

//     int a=0 ;
//     inc(a); //"call by value -> value unchanged"

//     cout<<"Ans is:" <<a ; //ans is 0
    
// }

        /***********************************/
// void inc(int &a){  // CALL BY REFERNCE USING- ALIAS(REFERENCE)
//     a++ ;
// }


// int main(){

//     int a=0 ;
//     inc(a); //"call by Reference -> value changes"

//     // yaha func call pe check hoga if call by value or reference

//     cout<<"Ans is:" <<a ;  //ans is 1
//     return 0;
// }

            /***********************************/

void inc(int* ptr){  //CALL BY REFERENCE -USING POINTERS
    (*ptr)++ ;
}

int main(){

    int a=76 ;
    inc(&a); //"call by Refernce -> value changes"

    cout<<"Ans is:" <<a ;  // 77

}