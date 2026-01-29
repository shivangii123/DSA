#include<iostream>
#include<stack>
using namespace std;

      void insertSorted(stack <int> &st , int x){
        if(st.empty() || st.top() < x){ // push element 'x'
            st.push(x) ;
            return ;
        }
        else{
            int a = st.top() ;
            st.pop() ;
            insertSorted(st, x);
            st.push(a);
        }
    }
    void sortStack(stack<int> &st) {
            if(! st.empty()){
            int x= st.top() ;
            st.pop();
            sortStack(st);  
            insertSorted(st, x);
            }
        }

int main(){

    int n , el; cout<<"Enter no of elements : "; cin>>n ;

    stack<int> st ;
    cout<<"Enter elements : ";
    for(int i=0;i<n ;i++){
        cin>>el ;
        st.push(el) ;
    }

    sortStack(st);
    cout<<"Sorted stack is : " ;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}