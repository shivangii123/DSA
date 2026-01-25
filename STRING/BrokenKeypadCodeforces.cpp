/* "CODEFORCES QUES" - "Broken Keyboard " :Given a string typed using a keyboard where broken keys print characters twice, 
find all characters that must be working.*/
#include<iostream>
#include<algorithm>
using namespace std;

string solve(string s){
    int i=0 , j= i;
    string res = "" ;
    int freq[26]= {0} ;
    
    while(j<s.size() ){       
        if(s[i]!= s[j] ){ // diff char-> ne grp started--> so check len of prev grp
            if( (j-i)%2 != 0  && freq[s[i]-'a']== 0){ //odd len-> take that char
                res += s[i] ;
                freq[s[i]-'a']= 1;
            }
            i= j ;
        } 

        j++ ;
    }
    if( (j-i)%2 != 0  && freq[s[i]-'a']== 0){ //for last group
                res += s[i] ;
                freq[s[i]-'a']= 1;
    }
   
    sort(res.begin(), res.end());
    return res ;
}

int main(){
    cout<<"enter t : ";
    int t;cin>>t ;
    while(t--){
        string s; cout<<"enter s : " ; cin>> s;
        cout<<"Ans :"<<solve(s)<<endl ;
    }
    return 0;
}