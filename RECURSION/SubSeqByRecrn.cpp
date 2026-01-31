#include<iostream>
#include<unordered_set>
using namespace std;

// void subSeq(string s , string newstr, int i, unordered_set<string> &set){

//     if(i== s.size()){
//         set.insert(newstr);
//         return ;
//     }

//     subSeq(s , newstr + s[i] , i+1, set);
//     subSeq(s, newstr , i+1, set);
// }

// int main(){

//     string s ; cout<<"Enter string : " ;cin>> s ;
//     unordered_set<string > set ;

//     subSeq(s, "", 0 , set);
//     for(auto x : set){
//         cout<<x<<endl ;
//     }
//     return 0;
// }


void subSeq(string s , string newstr, int i, unordered_set<string> &set){

    if(i== s.size()){
        if(set.count(newstr)){ // already present-DUPLICATE
            return;
        }
        else{

            cout<< newstr <<endl ;
            set.insert(newstr);
            return ;
        }
    }

    subSeq(s , newstr + s[i] , i+1, set);
    subSeq(s, newstr , i+1, set);

}

int main(){

    string s ; cout<<"Enter string : " ;cin>> s ;
    unordered_set<string > set ;

    subSeq(s, "", 0 , set);

    return 0;
}