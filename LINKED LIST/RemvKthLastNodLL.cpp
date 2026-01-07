#include<iostream>
using namespace std;

class Node{
    public :
     int data ;
     Node *next ;

    Node(int val){
        data = val ;
        next = NULL ;
    }
};

Node* RemvKth_LastNode(Node *head , int k){
  
    Node *fast = head , *slow= head , *prev = NULL; 

    if(head == NULL ){ // empty list
         return head ;
    }
    for(int i=1;i<k ;i++ ){     
        fast = fast-> next ;   // 'fast' is Lead of 'k' Steps than slow
        if(fast == NULL ){
            return head ;  // k is greather than list length  
        }
    }

    if(fast ->next == NULL){ //when (k== size); fast->at last , slow->at start 
        Node* temp = head ;  
        head = head ->next ; // head will change
        cout <<"Kth Node from last is : "<<temp->data <<endl ;
        delete temp ;
        return head ;
    }
                      
    while(fast ->next != NULL){ 
        fast= fast->next ;   // Maintain fast fixed distance(k) btw 2 pointers
        prev = slow ;
        slow= slow->next ; 
    } 
    // return slow ; // 'slow' points to last kth node  
    cout<<"Kth Node from last is : "<< slow->data <<endl ;

  
    prev->next = slow->next ;
    delete slow ;  //remove Kth Last Node

    return head ;

}

void printLL(Node* head){
    Node *curr= head ;
    while(curr != NULL){
        cout<<curr->data <<"--> ";
        curr= curr->next ;
    }
    cout<<"NULL " ;
}

int main(){
    int k ; cout<<"Enter k : " ; cin>> k;
   
    int n ,el; cout<<"Enter List size " ; cin>> n;
    Node *dummy = new Node(-1);
    Node *curr = dummy ;
    
    cout<<"enter elements : ";
    for(int i=0;i<n ; i++){
        cin>>el ;
        curr ->next = new Node(el);
        curr = curr->next ;
    }

    Node *head = dummy ->next ;
    delete dummy ;

    Node *p = RemvKth_LastNode(head,k);

    cout<<"Linked list after removal : " ;
    printLL(p);

    return 0;
}