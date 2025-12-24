#include<iostream>
using namespace std;

pair<int , int> first_N_LastOcc(string s,char T,int i ){
    static int first =-1 ;
    static int last = -1 ;
    if(i==s.size()){
        return {first , last };
    }
    if(s[i]==T ){
        if(first == -1){
            first = i;
        }
        else{
        last = i;
        }
    }
    return first_N_LastOcc(s,T,i+1);

}

int main(){

    string s;
    cout<<"Enter string : "; cin>> s ;

    char T; cout<<"Enter target : " ; cin>> T ;
    
    pair<int, int> ans =first_N_LastOcc(s,T, 0);

    if(ans.first == -1){
        cout<<"Oops!! Element not found ";
    }
    else{
        cout<<"First occur index : " << ans.first<<endl  ;
        cout<<"Last occurence index :"<<ans.second <<endl;
    }

    return 0;
}