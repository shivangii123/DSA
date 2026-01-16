// Find a Node in Linked List using Recursion

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

void printLL(Node* head){
    Node *curr = head ;
    while(curr !=NULL){
        cout<<curr->data <<"--> ";
        curr= curr->next;
    }
    cout<<"NULL ";
}

Node* findKeyElmLL(Node *head, int key){
    if(head == NULL) 
        return NULL ; // empty LList
    
    if(head->data == key){ // I did small work
        return head ;
    }

    return findKeyElmLL(head->next, key) ;
}
int main(){
    int n , el;cout<<"No.of nodes (greater than 0): " ;cin>>n;
    if(n<=0){ 
        cout<<"Enter n greater than 0 " ; return 0;
    } 
    Node *dummy = new Node(-1);
    Node *curr = dummy ;
    
    cout<<"Enter "<<n <<" elements : " ;
    for(int i=0;i<n;i++){
        cin>>el;
        curr->next = new Node(el);
        curr = curr->next ;
    }
    Node *head =dummy->next;
    delete dummy;

    int key ; cout<<"Enter key : "; cin>> key;

    Node* ans = findKeyElmLL(head, key);
    if(ans !=NULL){
        cout<<"\nHurray!! Found "<< ans->data <<endl;
    }else{
        cout<<"\nKey not found !! "<<endl ;
    }
    


    return 0;
}