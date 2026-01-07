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
Node* lastKthNode(Node *head , int k){
    Node *fast = head, *slow = head ;
    for(int i=1;i<k;i++){
        fast = fast->next ;
    }

    while(fast->next != NULL){
        fast = fast ->next ;
        slow = slow ->next ;
    }

    return slow ;
}
void printLL(Node *head){
    Node *curr = head ;
    while(curr != NULL){
        cout<<curr->data <<"--> ";
        curr = curr->next ;
    }
    cout<<"NULL ";
}

int main(){
    int n , el; cout<<"Enter LList size : "; cin>>n ;
    Node *dummy = new Node(-1);
    Node *curr = dummy ;
    for(int i=0; i<n; i++){
        cin>>el ;
        curr->next = new Node(el);
        curr= curr->next ;
    }
    Node *head = dummy->next;
    delete dummy ;
    int k ; cout<<"Enter k : "; cin>>k ;
    cout<<"Linked list is : ";
    printLL(head);

    Node* ans = lastKthNode(head, k) ;
    cout<<"\nLast " <<k <<"th node is : " << ans->data ;
    return 0;
}