#include<iostream>
using namespace std;  // T.C= O(N)+O(N) = O(N)

string moveXEnd(string s, string newstr, int i, int cnt){
    if(i== s.size()){
        for(int i=0 ;i<cnt ;i++){
            newstr += 'x';
        }
        // cout<<newstr ;
        return newstr;
    }
    if(s[i]!= 'x'){
        newstr += s[i] ;
        return moveXEnd(s , newstr, i+1, cnt);
    }
    else {
        cnt ++;
        return moveXEnd(s,newstr, i+1, cnt);
    }
}

int main(){

    string s="";
    cout<<"Enter string : " ;cin>>s ;

    string ans =moveXEnd(s,"", 0, 0) ;
    cout<<ans ;

    return 0;
}