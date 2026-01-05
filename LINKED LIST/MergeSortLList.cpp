#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next ;

    Node(int val){
        data = val;
        next = NULL ;
    }
};

Node* merge(Node* list1, Node* list2 ){
    Node *p = new Node(-1) ;  // dummy node
    Node *temp = p, *nh= p;
    while(list1 != NULL && list2 != NULL){
        if(list1 ->data <= list2->data){
            p->next = list1 ;
            list1 = list1 ->next ;
            p= p->next ;
        }
        else{ 
            p->next = list2 ;
            list2 =list2->next ;
            p = p->next ; 
        }
    }
    while(list1 != NULL){
        p->next = list1;
        list1= list1->next ;
        p= p->next ;
    }
    while(list2 != NULL){
        p ->next = list2 ;
        list2= list2->next ;
        p= p->next ;
    }

    nh= nh->next ;
    delete temp ;
    return nh ;
}

Node* mergeSort(Node* head){

    if( head == NULL || head->next == NULL ){
        return head;
    }
    
    Node* slow = head, *fast = head->next ;
    while(fast != NULL && fast->next != NULL){
        fast =fast->next ->next ;
        slow = slow->next ;
    }

    Node *mid = slow ;
    Node *s2 = mid->next ;
    mid->next = NULL ;

    Node* l1= mergeSort(head) ;
    Node* l2 = mergeSort(s2) ;

    return  merge(l1,l2 ) ;
    
}

void printLL(Node* head){
    Node *curr= head;
    while(curr != NULL){
        cout<<curr->data <<"--> ";
        curr= curr-> next ;
    }
    cout<<"NULL ";
}

int main(){

    int n , el ; cout<<"No. of elem : "; cin>>n ;
    Node* head = new Node(-1) ;
    Node* curr = head ;

    cout<<"Enter list elements : ";
    for(int i=0;i<n;i++){
        cin >> el;
        curr->next = new Node(el) ;
        curr= curr->next ;
    }

    Node *temp = head ;
    head= head->next ;
    delete temp ;

    cout<<"Initially Linked list is : ";
    printLL(head);
    Node *newHead= mergeSort(head) ;

    cout<<"\nMerge linked list is : ";
    printLL(newHead) ;

    return 0 ;
}