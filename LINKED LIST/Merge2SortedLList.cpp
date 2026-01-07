// Merge the 2 Sorted Linked List 
#include<iostream>
using namespace std;

class Node{
    public :
    int data ;
    Node * next;

    Node(int val){
        data= val;
        next =NULL ;  
    }
};

Node* mergeTwoLists(Node* list1, Node* list2) {
        if(list1 == NULL ) {return list2 ;}
        else if(list2 == NULL ) { return list1 ;}

        Node *dummy = new Node(-1);
        Node *curr = dummy ;
        
        while(list1 != NULL && list2 != NULL){
            if(list1->data <= list2-> data ){
                Node *n = new Node(list1-> data );
                curr->next = n ;
                curr = curr->next ;
                list1 = list1-> next ;
            }
            else{
                Node *n =new Node(list2-> data ) ;
                curr-> next= n;
                curr = curr-> next ;
                list2 = list2-> next  ;
            }
        }
        while(list1 != NULL){
            Node *n = new Node(list1-> data );
            curr-> next = n;
            curr = curr-> next ;
            list1 = list1-> next ;
        }
        while(list2!= NULL){
            Node * n = new Node(list2 ->data) ;
            curr->next = n;
            curr = curr-> next ;
            list2 = list2 -> next ;
        }

        Node *head = dummy-> next ;
        delete dummy ;
        return head ;
    }

    void printList(Node * h){
        while(h != NULL){
            cout<< h->data <<"--> ";
            h = h-> next ;
        }
        cout<<"NULL ";
    }

int main(){

    int n1,el1 ; cout<<"Enter size of list1 :"; cin>>n1 ;
    Node *dummy1 = new Node(-1);
    Node *curr1 = dummy1 ;
    cout<<"Enter list1 elements :" ;
    for(int i=0;i<n1;i++){
        cin>>el1 ;
        curr1-> next = new Node(el1); 
        curr1 = curr1 ->next ;
    }
    Node *head1 = dummy1->next ;
    delete dummy1;


    int n2 ,  el2; cout<<"\nEnter size of list2 : "; cin>>n2 ;
    Node *dummy2 = new Node(-2);
    Node *curr2 = dummy2;
    cout<<"Enter list2 elements :" ;
    for(int i=0;i<n2;i++){
        cin>>el2;
        curr2-> next = new Node(el2); 
        curr2 = curr2 ->next ;
    }
    Node *head2 = dummy2->next ;
    delete dummy2 ;

    Node * ptr = mergeTwoLists(head1, head2);
    
    cout<<"Merged List is : "<<endl;
    printList(ptr);

    return 0;
}