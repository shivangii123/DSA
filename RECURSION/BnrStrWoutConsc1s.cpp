#include<iostream>
#include<vector>
using namespace std;

 /****************** Binary String without Consecutive 1's ************ */

    void genrtStr( string str, int i ,int n ,vector<string> &result){

        if(i== n){ // base case
            result.push_back(str) ;
                return ;
        }

        // Add '0' everytime
        genrtStr(str +'0' ,i+1,n, result );

        // add '1' only for 0th post or prev not '1'
        if(str.empty() || str.back()!='1'){
            genrtStr(str+'1', i+1 , n , result);
        }

    }

    vector<string> generateBinaryStrings(int n) {
        vector<string> result ;
        genrtStr("" , 0,n, result);

        return result ;
    }


int main(){
    cout<<"Enter n : "; int n; cin>> n ;

    cout<<"Binry strings without Consecutive 1's : \n" ;
    vector<string> ans = generateBinaryStrings(n);

    for(auto x : ans ){
        cout<<x <<" ";
    }
    return 0;
}