#include<iostream>
#include<vector>
using namespace std;

// num= 23456 

vector<string> keypad = {"", "", "ABC" ,"DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "XYZ" };


void solve(string num,int index, string ans, vector<string> &res){
    //base case
    if(index == num.size()){
        res.push_back(ans) ;
        return ;
    }

    //recursive case

    int digit = num[index]-'0' ; //num[index] is a char so converting to int

    for(char el :keypad[digit]){
        ans.push_back(el);
        solve(num, index+1, ans, res);
        ans.pop_back() ;
    }
}

int main(){
    string num ; cout<<"Enter number : " ;cin>>num;

    for(char ch: num){ // checking no alphabets, 0, 1 not allowed..
        if (ch< '2' || ch> '9'){
            cout<<"Please enter digit from 2 to 9.." ;
            return 0;
        }
    }
    vector<string> res;
    solve(num, 0, "",res);

    for(auto x: res){
        cout<< x<<" ";
    }
    
    return 0;
}