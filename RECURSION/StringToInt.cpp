// "4321" -> 4321
#include<iostream>
using namespace std ;

int strToInt(int i,string str){
	if(i < 0 ){ return 0 ;}
	
	// To convert Char/String  to integer do :-
    // s[3]-'0'  -> Ascii of 3- Ascii of 0 = 3 (Ascii of that no i.e '3')


	return  strToInt(i-1, str) *10 + (str[i]-'0') ;

}

int main() {
	string str ; cout<<"Enter string : ";
	cin>> str ;
	int n =str.size() ;

	cout<<strToInt(n-1,str);

	return 0;
}

