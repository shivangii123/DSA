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

int lengthLL(Node *head){
    int cnt = 0;
    Node *ptr = head ;
    while(ptr != NULL){
        cnt++ ;
        ptr = ptr->next ;
    }
    return cnt ;
}

Node* bubbleSortLL(Node *head){
    int len= lengthLL(head);
    if(head == NULL || head ->next == NULL){
        return head ;
    }
    
    for(int i=0;i<len-1 ; i++){
        Node *curr = head , *pv = NULL ;
        while(curr->next != NULL){// stop comparison at 1 node earlier
            Node *n = curr->next ; 
            if(curr->data > n->data ){ // swapping takes place
                if(pv == NULL){
                curr->next = n->next ;
                n->next = curr;
                head = n; // head changes
                pv = n; // prev is always 1 step behind curr
                }
                else{
                    curr->next = n->next ;
                    n->next = curr ;
                    pv ->next = n ;
                    pv = n; 
                }

            }
            else{  // elm smaller -> No swapping
                pv = curr ;
                curr = n;
            }
        }
    }
    return head ;
}

void printLL(Node *head){
    Node *curr = head ;
    while(curr != NULL){
        cout<< curr->data <<"-->" ;
        curr = curr->next ;
    }
    cout<<"NULL" ;
}

int main(){
    int n , el; cout<<"Enter n : "; cin>>n ;

    Node *dummy = new Node(-1);
    Node *curr = dummy ;
    for(int i=0;i<n ; i++){
        cin>>el ;
        curr->next = new Node(el);
        curr = curr->next ;
    }
    Node *head = dummy->next ;
    delete dummy ;
    cout<<"Initially Linked List ";
    printLL(head) ;

    Node *nh = bubbleSortLL(head) ;
    cout<<"\nAfter Bubbble Sort List is : ";
    printLL(nh) ;
    return 0;
}