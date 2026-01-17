#include<iostream>
using namespace std;

class Node{
    public :
    int data ;
    Node *next;

    Node(int val){
        data = val;
        next = NULL ;
    }
};

bool isCycle(Node *head){
    Node *slow=head, *fast = head ;
    while(fast !=NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){
            return true ;
        }
    }
    return false ;
}

int main(){
    int n , el; cout<<" No of Nodes : "; cin>>n ;
    Node *dummy = new Node(-1);
    Node *curr = dummy;

    for(int i=0;i<n;i++){
        cin>>el;
        curr->next = new Node(el);
        curr= curr->next ;
    }

    Node *head =dummy->next;
    delete dummy ;


    int pos ;cout<<"Enter pos(-1 for no cycle): ";cin>>pos ;
    Node *tail =head ;
    Node *cycleNode = NULL ;
    int indx =0;

    Node *temp=head;
    while(temp !=NULL){
        if(indx ==pos){
            cycleNode =temp;
        }
        tail=temp;
        temp= temp->next;
        indx++;
    }
    if(pos != -1 &&cycleNode !=NULL){
        tail->next = cycleNode ; //create cycle
    }

    
    if(isCycle(head)){
        cout<< "\nCycle is present " ;
    }else{
        cout<<"\nNo cycle " ;
    }

    return 0;
}