
// 1           1
// 1 2       2 1
// 1 2 3   3 2 1
// 1 2 3 4 3 2 1


// for(int i=1;i<=n;i++){
//     int c=i;
//     for(int j=1;j<2*n;j++){
//         if(j<=i ){
//              cout<<j<<"\t" ;
//          }
//         else if(j>(2*n)-1-i){
//             cout<<c<<"\t" ;
//              c-- ;
//         }
//         else{
//             cout<<" "<<"\t";
//         }
//     }
//     cout<<"\n" ;
// }


#include<iostream>
using namespace std;

int main() {

	int n;
    cout<<"Enter n : ";
	cin>>n ;

	for(int i=0;i<=n;i++){
		for(int j=1;j<=i;j++){ // Increasing sequence from 1 to i
			cout<<j<<"\t" ;
		}
		for(int k=1;k<=2*(n-i)-1;k++){ // Spaces in the middle (2 * (n - i) )
			cout<<" "<<"\t" ;
		}
		if(i==n){                       // Decreasing sequence from i to 1
			for(int l=i-1;l>=1;l--){
				cout<<l<<"\t" ;
			}
		}
		else{
			for(int l=i;l>=1;l--){
				cout<<l<<"\t" ;
			}
		}
		cout<<"\n" ;
	}
	return 0;
}