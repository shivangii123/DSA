// Reverse Linked List 1->2->3-> 4->NULL  becomes :--- 4->3->2->1->NULL
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

void reverseLList(Node *&h){
    Node * prev = NULL , *curr = h, *temp = h ;
    while(temp != NULL){
        temp = curr-> next ;
        curr->next = prev ;
        prev = curr;
        curr= temp;
    }
    h = prev ;
}

void printLList(Node *h){
    Node * curr= h ;
    while(curr != NULL){
        cout<<curr->data <<"--> ";
        curr = curr->next ;
    }
    cout<<"NULL "<<endl ;
}

int main(){

    Node * head = new Node(10);
    Node *curr = head ;
    int arr[]= {20,30,40,50,60};
    for(auto el : arr){
        Node * n = new Node(el) ;
        curr ->next = n ;
        curr = curr->next ;
    }

    cout<<"Original Linked List is : ";
    printLList(head);

    reverseLList(head);// here Head Pass by Ref so Head's Updated value
    cout<<"Reversed Linked List is : ";
    // reverseLList(head);
    printLList(head);

    return 0;
}