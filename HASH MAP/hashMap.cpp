#include<iostream>
#include<string>
#include<unordered_map>
using namespace std ;

int main(){
    unordered_map<string, int>mp;

    mp["John"]=123457 ;
    mp["Jack"]=7564532;

    cout<<"value is :"<<mp["Jack"]<<endl ;


}
