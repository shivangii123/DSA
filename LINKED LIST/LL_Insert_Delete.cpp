// #include<iostream>
// using namespace std;

// class Node{
//     public :
//     int data ;
//     Node *next ;

//     Node(int val){
//         data = val;
//         next= nullptr ;
//     }
// };

// class List{
//     public :
//     Node * head ,*tail ;

//     List(){
//         head= tail= NULL ;
//     }
//     void insertAtFront(int val ){
        
//         Node* newNode = new Node(val) ;
//         if(head == NULL){
//             head=tail= newNode ;
//         }
//         else{
//             newNode -> next = head;
//             head= newNode ;
//         }
//     }

//     void print(){
//         Node * h  = head ;
//         if(h== NULL){
//             cout<<"Linked List is empty !! " ;
//         }
//         else{
//             Node* curr= h ;
//             while(curr != NULL){
//                 cout<<curr->data <<"--> ";
//                 curr= curr->next ;
//             }
//             cout<<"NULL " ;
//         }
//     }

// };


// int main(){
//     List ll;
//     ll.insertAtFront(1);
//     ll.insertAtFront(2);
//     ll.insertAtFront(3);
//     ll.insertAtFront(4);
//     ll.insertAtFront(5);
//     ll.insertAtFront(6);
//     ll.insertAtFront(7);

//     cout<<endl ;
//     ll.print() ;
 
//     // Node* head = NULL, *tail= NULL ;



//     return 0;
// }

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

void InsertAtFront(Node *&h, Node *&t, int el){
    Node* n = new Node(el) ;

    if(h == NULL){
       h= t = n ;
    }

    else{
        n -> next = h ;
        h = n;
    }
}

void InsertAtEnd(Node *&h, Node *&t, int el){
    Node * n = new Node(el);
    t-> next = n;
    t = n ;

}

void InsertAfterPos(Node *&h, int el, int key){
    Node * n = new Node(el) ;

    Node * curr = h;
    while((curr != NULL) &&(curr->data != key) ){//we reach that keym
        curr = curr-> next ; // traverse to the position
    }
    if(curr -> data == key){ // pokey found
        n-> next = curr->next;
        curr ->next = n ;
    }
    else{   // pkey not found
        cout<<"key Element not found !! " <<endl ;
        return ;
    }
}

void InsertBeforePos(Node *&h,int el, int key){
    Node *n = new Node(el) ;
    // traverse to that position
    Node *curr = h , *prev = NULL ;
    while((curr != NULL) && (curr->data != key)){
        prev =  curr ;
        curr = curr-> next ;
    }
    if(curr->data == key){
        if(curr == h){ //key is at first position
            n->next = curr ;
            h = n ;
        }
        else{
        prev -> next = n;
        n-> next = curr ; 
        }
    } 
    else{
        cout<< "Key Element not found !! "<<endl ;
        return ;
    }
}

void deleteFromFront(Node *&h){
    if(h == NULL){ 
        cout<<"List is empty !! "; return ;
    }
    Node *temp = h;
    h = h-> next ;
    delete temp ;
}

void deleteAtEnd(Node *&h ){
    if(h == NULL){
        cout<<"List is empty !! "; return ;
    }
    else if(h->next == NULL){ // when 1 node only
        cout<<"Deleted elm : "<<h->data <<endl ;
        delete h;
        h = NULL ;
    }
    Node *curr = h, *prev = h ;
    while(curr->next != NULL){
        prev = curr ;
        curr = curr->next ;
    }
    prev -> next = NULL;
    cout<<"Deleted el : "<<curr->data <<endl ;
    delete curr ;
}

void deleteAfterPos(Node *&h, int key){
    Node * curr = h ;
    if(h == NULL){
        cout<<"List is empty !! "<<endl;  return ;
    }
    // traverse to that posElm
    while((curr  != NULL) && (curr->data != key) ){
        curr = curr->next ;
    }
    if(curr == NULL ){ // key not found
        cout<<"Key Element not found !!" <<endl ; return ;
    }
    if(curr -> next == NULL){
        cout<<"No elemnt after the key !!" <<endl; return ;
    }
    Node *temp = curr -> next;
    curr->next = temp ->next ;
    cout<<"Deleted item (after key "<<key<<") : "<<temp->data << "   "<<endl ;
    delete temp ;
    
}

void deleteBeforePos(Node *&h, int key){
    if(h == NULL){
        cout<<"List is empty !! "<<endl;
        return ;
    }
    Node *curr = h ,*prev = NULL , *secnPrev= NULL;
    // traverse to that key elm
    while(curr != NULL && curr->data != key){
        secnPrev = prev ;
        prev = curr;
        curr = curr->next ;
    }
    if(curr == NULL){
        cout<<"Key not found !!" <<endl ; return ;
    }
    if(prev == NULL){// or curr points to Head
        cout<<"No elm before is present !! "<<endl ; return ;
    }
    if(secnPrev == NULL){ // when prev points to Head
        h = curr;
        cout<<"Deleted item (before key " <<key<<" ) :"<<prev->data<<endl ;
        delete prev ;
        return ;
    }

    secnPrev ->next = curr ;
    cout<<"Deleted item (before key "<<key<<") : "<< prev->data <<endl ;
    delete prev ;

}

void print(Node * h){
    Node *curr = h ;
    while(curr != NULL){
        cout<< curr-> data << "--> ";
        curr = curr -> next ;
    }
    cout<<" NULL ";
}

int main(){
    Node *head = NULL , *tail = NULL ;

    for(int i=1;i<=5;i++){
        InsertAtFront(head,tail, i);
    }
    for(int i=6;i<=10;i++){
        InsertAtEnd(head,tail, i);
    }
    print(head) ;
    cout<<endl<<endl ;

    InsertAfterPos(head, 25, 2 );
    
    InsertBeforePos(head, 30, 1);
    print(head) ;
    cout<< endl <<endl ;
    
    deleteFromFront(head);
    deleteAtEnd(head) ;
    print(head) ;
    cout<<endl<<endl  ;
    deleteAfterPos(head, 25);
    print(head) ;
    cout<<endl <<endl ;

    deleteBeforePos(head, 3);
    print(head);
    cout<<endl <<endl ;

    return 0;
}