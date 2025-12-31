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

        Node *head = new Node(-1);
        Node *curr = head ;
        
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

        Node *temp = head ;
        head = head-> next ;
        delete temp ;
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
    Node *head1 = new Node(1);
    Node *curr = head1 ;

    Node *head2 = new Node(1);
    Node *curr2 = head2 ;

    int arr1[] ={3,5};
    int arr2[]={2,4,6,8} ;
    for(auto el : arr1){
        curr-> next = new Node(el); 
        curr = curr->next ;
    }
    for(auto el2 : arr2){
        curr2-> next = new Node(el2); 
        curr2 = curr2 ->next ;
    }

    Node * ptr = mergeTwoLists(head1, head2);
    
    cout<<"Merged List is : "<<endl;
    printList(ptr);

    return 0;
}