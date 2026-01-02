#include<iostream>
using namespace std;

class ListNode{
    public :
    int data;
    ListNode *next ;

    ListNode(int val){
        data = val;
        next = NULL ;
    }
};

ListNode* middleOfList(ListNode* head){
    ListNode *fast = head, *slow = head ;
    while(fast != NULL && fast->next != NULL){
        fast =fast->next->next ;
        slow= slow->next ;
    }
    return slow ;

}

int main(){
    
    ListNode *head = new ListNode(-1); // Dummy Node
    ListNode *curr = head ;
    int n, el ; cout<<"Enter no of nodes : "; cin>>n ;
    cout<<"Enter Node elements : ";
    for(int i=0; i<n ; i++){
        cin >>el ;
        curr ->next = new ListNode(el) ;
        curr= curr->next ;
    }
    ListNode *temp = head ;
    head = head->next ;
    delete temp ; // prevent mry leak 

    ListNode *mid = middleOfList(head);
    cout<<"Middle element is : "<< mid-> data<<endl ;

    return 0;
}