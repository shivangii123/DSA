// #include<iostream>
// using namespace std;

// string remDuplc(string s , int arr[], int i, int j){
//     if(j==s.size()){

//         return s.substr(0,4);
//     }
    
//     arr[s[j]-'a'] ++ ;
//     if(arr[s[j]-'a'] == 1){ // unique char
//         s[i] =s[j] ;
//         i++ ;
//     }
//     return remDuplc(s,arr, i, j+1);

// }

// int main(){

//     string s ;cout<<"Enter string : " ; cin>> s ;
//     int arr[26] ={0};

//     cout<<remDuplc(s,arr, 0, 0);
//     return 0;
// }


#include<iostream>
using namespace std;

string remDuplc(string s , bool arr[], int i, int j){
    if(j==s.size()){

        return s.substr(0,i);
    }
    
    if(arr[s[j]-'a'] ==false){ // unique char
        arr[s[j]-'a']= true ; //mark seen
        s[i] =s[j] ;
        i++ ;
    }
    return remDuplc(s,arr, i, j+1);

}

int main(){

    string s ;cout<<"Enter string : " ; cin>> s ;
    bool arr[26] ={false};

    cout<<remDuplc(s,arr, 0, 0);
    return 0;
}