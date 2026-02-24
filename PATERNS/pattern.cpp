#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: " ;
    cin>>n;

    for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" "<<"\t" ;
		}
		for(int k=i;k<=2*i-1;k++){
			cout<<k<<"\t" ;
		}
		for(int l=2*i-2;l>=i;l--){
			cout<<l<<"\t" ;
		}
		cout<<endl;
	}
    return 0;
}

//       1
//     2 3 2
//   3 4 5 4 3
// 4 5 6 7 6 5 4