#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st,int value){
    stack<int> st2;
    while(!st.empty() ){
        st2.push(st.top());
        st.pop() ;
    }
    st.push(value);
    while(!st2.empty()){
        st.push(st2.top());
        st2.pop();
    }
}

int main(){
    stack<int> st;
    int n ; cout<<"\nEnter size of stack : ";cin>> n ;
    int el;
    for(int i=0;i<n ;i++){
        cout<<"\nEnter element : ";
        cin>> el;
        st.push(el);
    }
    int value; cout<<"\nEnter value to insert : " ; cin>> value;

    insertAtBottom(st, value);
    cout<<"\nNow stack becomes : " ;

    while(! st.empty()){
        cout<<st.top() <<" ";
        st.pop();
    }

    return 0;
}