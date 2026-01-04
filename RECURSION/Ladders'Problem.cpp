#include<iostream>
using namespace std;

//i=kan khada hu, k=kitna ka jumpe saakte , int t=target
int calways(int i,int k,int t ){
    if(i==t){
        return 1;//e got one more way to reach target
    }
    int ans=0;//ways if standing on ith step se aage jane ke ays
    for(int j=1;j<=k;j++){
        if(i+j<=t){
            ans+= calways(i+j,k,t);
        }
    }
    cout<<i<<" "<<t<<" "<<ans<<endl ;//debugging
    return ans;
}

int main(){

    int n, k;cout<<"enter n  and k : ";
    cin>>n>>k;

    cout<<calways(0,k,n)<<endl ;
    return 0;
}