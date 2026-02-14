#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; cout<<"Enter size : ";
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    v.push_back(8);
    v.push_back(9);
    v.push_back(3);
    v.pop_back();

    v.resize(8);

    for(int i=0;i<v.size();i++){
        cout<< v[i]<<" ";
    }


    return 0;
}