#include<iostream>
using namespace std;

void toh(int n, char s,char h,char d){
        // Base case
    if(n==0){
        return ;
    }

        // Recursive case
    toh(n-1,s,d,h); //n-1 disk  from source to destination
    cout<<"Moving "<<n<<"Th disk from "<<s<<" to "<<d<<endl ;
    toh(n-1,h,s,d);
}
int main(){

toh(3,'A','B','C');// here 'A', 'B', 'C' are char literals like we direct pass:= 10 in int varb to a func parmater
// n, Sr,Help, Dest
    return 0;
}