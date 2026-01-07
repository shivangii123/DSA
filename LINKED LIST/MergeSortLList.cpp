// list = 8 -1 -4 -5 9 2
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

Node* merge(Node *l1, Node *l2 ){
    if(l1 == NULL){ return l2 ;}
    if(l2 == NULL){ return l1 ;}    

    Node *dummy = new Node(-1) ;
    Node* p = dummy ;

    while(l1 != NULL && l2!= NULL){
        if(l1->data <= l2->data){
            p->next = l1 ;
            l1= l1->next ;
            p= p->next ;
        }
        else{
            p->next =l2;
            l2= l2->next ;
            p= p->next ;
        }
    }
    while(l1 != NULL){
        p->next = l1 ;
        l1 = l1->next ;
        p= p->next ;
    }
    while(l2 != NULL){
        p->next = l2 ;
        l2 =l2->next ;
        p = p->next ;
    }
    Node * nhead = dummy ->next ;
    delete dummy ;
    return nhead ;
}

Node* mergeSortLL(Node* head){
    // Base Case:- Single elm or List Empty
    if(head == NULL || head->next == NULL ){ 
        return head ;
    }

    Node *slow = head , *fast = head->next ;
    while(fast != NULL && fast->next != NULL){
        fast = fast ->next->next ;
        slow = slow->next ;
    }

    Node *mid = slow ; //1) Divide 
    Node *s2 = mid->next ;
    mid->next = NULL ; //to divide LList in 2 parts

    Node *l1= mergeSortLL(head) ; // 2) Recursive MergeSort
    Node *l2= mergeSortLL(s2);

    return merge(l1, l2) ; // 3) Merge

}
void printLL(Node *head){
    Node *curr = head ;
    while(curr != NULL){
        cout<< curr->data <<"--> ";
        curr = curr->next ; 
    }
    cout<<"NULL " ;
}

int main(){
    int n, el ; cout<<"No. of elements :  "; cin>> n;

    Node *dummy = new Node(-1) ; // dummy node
    Node *curr =  dummy ;

    for(int i=0;i<n ;i++){
        cin>>el ;
        curr->next = new Node(el) ;
        curr = curr->next ;
    }
    Node *head = dummy->next ;
    delete dummy ; // delete dummy node

    cout<<"Initially Linked List is : " ;
    printLL(head) ;

    Node *nh = mergeSortLL(head);
    cout<<"\nAfter MergeSort : " ;
    printLL(nh);

}
