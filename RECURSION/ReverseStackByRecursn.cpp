// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
using namespace std ;
    void insertBottom(stack <int> &st, int x){
            if(st.empty()){
                st.push(x) ;
                return ;
            }

            int a= st.top();
            st.pop() ;
            insertBottom(st, x);
            st.push(a) ;
    }
    void reverseStack(stack<int> &st) {
        if(! st.empty()){
            int x= st.top() ;
            st.pop() ;
            reverseStack(st) ;
            insertBottom(st , x) ;
        }

    }


int main() {
    stack<int>st ;
    
    cout<<"enter no of elemnets : " ;
    int n , value ; cin>>n ;

    cout<<"Enter values in stack from Bottom to Up : "<<endl  ;
    for(int i=0 ; i< n ;i++){
        cin>> value ;
        st.push(value) ;
    }
    
    reverseStack(st);
    cout<<"reversed stack is : \n" ;
    while(! st.empty()){
        cout<<st.top() <<endl ;
        st.pop() ;
    }

    return 0;
}