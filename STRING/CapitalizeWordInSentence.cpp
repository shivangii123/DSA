#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string str ; cout<<"Enter a sentence : ";
    getline(cin, str);

    bool isSpace = false;
    for(int i=0;i<str.size();i++){
        if(str[i] == ' '){
            isSpace =true ;
        }
        else if (i == 0 || isSpace ){
            str[i] = toupper(str[i]); // Capitalize first Char of Word 
            isSpace = false;
        }
    }

    cout<<"Now after capitaization : "<<str;
    return 0;
}