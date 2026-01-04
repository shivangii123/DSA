#include<iostream>
using namespace std;

class Node{
    public :
    int data ;
    Node * next ;

    Node(int val){
        data = val;
        next = NULL ;
    }
};

Node* mergeSort(Node *head){
    
}

void printLL(Node* head){
    Node* temp = head ;
    while(temp != NULL){
        cout<< temp->data <<"--> ";
        temp = temp->next ;
    } 
    cout<<"NULL " ;
}

int main(){
    
    int n ,el ; cout<<"enter no. of elements : "; cin>>n ;
    Node *curr = new Node(-1); // dummy node
    Node * head = curr ;

    for(int i=0; i<n; i++){
        cin>> el;
        curr->next = new Node(el);
        curr = curr->next;
    }
    Node *p = head ;
    head = head->next ;
    delete p ;

    Node *h = mergeSort(head) ;

    printLL(h);
    return 0;
}