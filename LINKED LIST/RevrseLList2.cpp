#include<iostream>
using namespace std;

class Node{
    public :
    int data ;
    Node *next ;
    
    Node(int val){
        data = val;
        next = NULL ;
    }
};

void printLL(Node *head){
    Node *curr = head;
    while(curr !=NULL){
        cout<<curr->data << "--> ";
        curr = curr->next;
    }
    cout<<"NULL ";
}

Node* revLList2(Node *head , int l, int r){
    if(head == NULL || l== r){return head ;}

    Node *dummy = new Node(-1) ;//Insert dummy at start of LList(if l=1,head changes)
    dummy ->next = head ; // dummy's next points to head of LList
    Node *temp = dummy ;
    for(int i=1; i<l; i++){// reach to posn 'l'
        temp= temp->next ;
    }
    Node *prev =  NULL , *curr = temp->next;

    for(int i=0;i<r-l+1;i++){ // Reverse SubList
        Node *nx = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nx ;
    }
    Node *p = temp->next ;//re wire the Nodes
    p->next = curr ;
    temp->next = prev ;// connect head of reversed part

    Node *nh =dummy->next ;// return new head
    delete dummy ;
    return nh ;
}

int main(){
    int n,el ; cout<<"No. of elements :"; cin>>n;
    Node *dummy = new Node(-1);
    Node *curr = dummy ;
    for(int i=0;i<n;i++){
        cin>>el;
        curr->next = new Node(el);
        curr= curr->next ;
    }

    Node *head = dummy->next ;
    delete dummy ;

    int l, r;cout<<"Enter l and r : "; cin>>l>>r ;
    cout<<"Initially Linked List is : "; printLL(head) ;

    Node *nh = revLList2(head, l , r);
    cout<<"After reversing : "; printLL(nh);
    return 0;
}