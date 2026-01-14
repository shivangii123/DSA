// given num= 123, print: one two three four..
#include<iostream>
using namespace std;

string words[] ={"zero" ,"one", "two" , "three", "four", "five", "six", "seven",
    "eight", "nine"};

void decrNo(int n){
    if(n== 0){
        return ;
    }
    int d= n %  10;
    decrNo(n/10);
    cout<<words[d] <<" ";

}

int main(){
    int num ; cout<<"Enter n : " ; cin>>num ;

    cout<<"Printing elements " <<num <<" to 1 in decreasing order : \n" ;
    decrNo(num );
    
    return 0;
}

