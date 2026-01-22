//Given the head of a linked list, reverse the nodes of the list k at a time, 
// and return the modified list
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
    Node *curr = head ;
    while(curr != NULL){
        cout<<curr->data <<"--> ";
        curr = curr->next ;
    }
    cout<<"NULL " ;
}

Node* rev_in_Kgrp(Node *head, int k){
    if(head== NULL || k<=1 ) return head ;

    Node *dummy = new Node(-1); //insert dummy at start of LList
    dummy->next = head ;  // if l=1,(head changes);no need to handle separately

    Node *p= dummy , *tail = head ;
    
    while(true) {// if k nodes is there, only then Reverse
        tail = head ;
        for(int i =1; i<k && tail!= NULL; i++){ // Place Tail at correct posn
            tail = tail->next ; //moving tail n checking it doesn't becomes NULL
        }
        
        if(tail ==NULL) { break ; }

        Node *n =tail->next ; // To pevent Mry Leak

        Node *curr = head, *prev = NULL ,*nxt; //Reverse K- Nodes
        for(int i=0; i<k; i++){ 
            nxt = curr-> next ;
            curr->next = prev;
            prev = curr;
            curr = nxt ;
        }
        p ->next = tail ;   //Re-wire
        head ->next = n ;

        p = head ; //move pointers
        head = n ;
    }

    Node *res = dummy ->next ;
    delete dummy ;
    return res ;
}


//*************M-2 same time , Find remaing Length***************//
// int lengthLL(Node *h){
//     int cnt = 0;
//     while(h != NULL){
//         cnt++;
//         h = h->next ;
//     }
//     return cnt;
// }

// Node *rev_in_Kgrp(Node *head, int k){
//     if(head == NULL || k<=1 ){
//         return head ;
//     }

//     Node *dummy = new Node(-1);
//     dummy->next = head ; // connect dummy to the LList

//     Node *prvGrp = dummy ;
//     int remainingLen = lengthLL(head) ;
//     while(remainingLen >=k){

//         Node *tail = head ; // Place tail at corect Position
//         for(int i=1;i<k;i++){
//             tail= tail->next;
//         }
//         remainingLen -= k ;
        
//         Node *nxtgrp = tail->next ;
        
//         Node *curr = head, *prev = NULL, *nxt ; // Reverse K Nodes
//         for(int i=0;i<k;i++){
//             nxt = curr->next ;
//             curr->next = prev ;
//             prev = curr ;
//             curr = nxt ;
//         }

//         prvGrp->next = tail ; // Re-Connect Sublist to main List
//         head->next = nxtgrp ;
//         prvGrp = head ;// adance grp pointers
//         head = nxtgrp ; 
//     }
//     Node *res = dummy->next;
//     delete dummy;
//     return res ;
// }


int main(){
    int n , el ; cout<<"No.of nodes : "; cin>>n ;
    Node *dummy = new Node (-1);
    Node *curr = dummy ;
    
    for(int i=0;i<n;i++){ // Created a linked List
        cin>>el;
        curr->next = new Node(el);
        curr = curr->next ;
    }
    Node *head = dummy->next ;
    delete dummy ;

    int k ; cout<<"Enter k : "; cin>>k ;

    cout<<"\nInitially Linked List : " ;
    printLL(head);

    Node *nh = rev_in_Kgrp(head,k);
    cout<<"\n\nAfter reversing in group of k : "; printLL(nh);

    return 0;
}