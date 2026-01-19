// Cycle detection in Linked List
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
    while(curr !=NULL){
        cout<<curr->data <<"--> " ;
        curr = curr->next ;
    }
    cout<<"NULL " ;
}
void breakCycle(Node *head, Node *f){
    Node *s = head, *fprev = f ;
    while(f !=s){
        fprev = f ;
        f = f->next ;
        s = s->next ;
    }
    fprev ->next = NULL ;
}

bool isCycle(Node *head){
    if(head == NULL){ 
        return false ;
    }
    Node *slow = head , *fast = head ;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next ;
        if(slow == fast ){//cycle present
            breakCycle(head, fast ) ;
            return true ;
        }
    }
    return false ;
}


int main(){
    int n , el; cout<<"No. of elements : "; cin>>n;
    Node *dummy = new Node(-1) ;
    Node *curr = dummy ;

    for(int i=0;i<n;i++){
        cin>> el;
        curr->next = new Node(el) ;
        curr = curr->next ;
    }
    Node *head =dummy->next ;
    delete dummy ;

    int pos; cout<<"enter pos(-1 for No Cycle) :"; cin>>pos ;
   
    if(pos >=0){
        Node *cycleNode = head ;
        for(int i=0;i<pos && cycleNode !=NULL ;i++){//if(pos>n) cause error
            cycleNode = cycleNode->next ;
        }
        if(cycleNode !=NULL)
            curr->next = cycleNode ;  //create cycle when (pos <n)s
    }

    if(isCycle(head)){
        cout<<"Cycle is present" <<endl ;
        cout<<"After removing cycle : " ;
        printLL(head);
    }else{
        cout<<"No cycle !! "<<endl ;
    }

    return 0;
}