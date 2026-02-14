#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> v;

    public :
    void push(int value){
        v.push_back(value);
        cout<<"\nPushed "<<value<<" into the stack ";

    }
    void pop(){
        if(v.empty()){
            cout<<"\nStack underflow!! ";
        }
        v.pop_back();
        cout<<"\nPopped "<<v[v.size()]<<" from stack ";
    }

    int peek(){
        if(v.empty()){
            cout<<"\nStack is empty ";
            return -1;
        }
        return v[v.size()-1];
    }
    int isSize(){
        return v.size();
    }
    bool isEmpty(){
        return v.size()== 0;
    }
};

int main(){
    Stack S;
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.pop();
    cout<<"\nStack size is : "<<S.isSize();
    S.push(50);
    cout<<"\nNow Stack size is : "<<S.isSize();
    cout<<"\nStack top element is : "<<S.peek();
    cout<<boolalpha<<"\nStack empty ?? ->>" <<S.isEmpty();

    while( !S.isEmpty()){
        cout<<S.peek()<<" ";
        S.pop();
    }

    return 0;
}