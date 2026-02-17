#include<bits/stdc++.h>
using namespace std;


int comp(char* s1,char* s2){
    int i=0,j=0;
    while(s1[i]!='\0' && s2[i]!='\0'){
        if(s1[i]>s2[i]){//dictionary mein s1 baad mein ayega
            return 1;
        }
        else if(s2[i]>s1[i]){//dictionary mein s2 baad mein ayega
            return -1;
        }
        else{ //if both char same moe to next char
            i++;
        }
    }

    if(s1[i]=='\0' && s2[i]=='\0'){ // both char array are same as they nd at same time
        return 0;
    }
    else if(s1[i]=='\0'){
        return -1;
    }
    else{
        return 1;
    }
}
int main(){


    // char* s1;
    // char* s2;
    
    // int n1,n2;
    // for(int i=0;i<n1;i++){
    //     cin>>s1[i];
    // }

    // int n1=strlen(s1);

    // for(int i=0;i<n2;i++){
    //     cin>>s2[i];
    // }
    // int n2=strlen(s2);

  /////

    int n1;
    cout<<"Enter array 1 size :";
    cin>>n1;

    char arr1[n1+1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    arr1[n1]='\0' ;

    int n2;
    cout<<"Enter array 2 size :";
    cin>>n2;

    char arr2[n2+1];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    arr2[n2]='\0' ;

    // 0-> SAME, (-1) -> ARRAY1 SMALL , (1)-> ARRAY2 SMALL
    cout<<"Output is : "<<comp(arr1,arr2);



    return 0;
}