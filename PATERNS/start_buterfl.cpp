#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    int mid = (n/2) +1 ;

    //top half
    for(int i=1;i<=mid; i++){
        if(i == mid){
            for(int j=1; j<=n; j++) cout<<"*" ;
        }
        else{
            for(int j=1;j<=i;j++)  cout<<"*" ;
            for(int k=1; k<= 2*(mid-i)-1; k++) cout<<" " ;
            for(int j=1;j<=i;j++)  cout<<"*" ;
        }
        cout<<endl;  
    }        

    //bottom half
    for(int i=n/2; i>0; i--){
        for(int j=1; j<=i; j++)  cout<<"*";
        for(int k=1; k<= 2*(mid -i)-1; k++ )  cout<<" ";
        for(int j=1; j<=i; j++)   cout<<"*" ;
            
        cout<<endl ;
    }
    
    return 0;
}