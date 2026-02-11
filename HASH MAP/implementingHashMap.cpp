#include<iostream>
#include<string>
#include<unordered_map>
#include<climits>
#include<vector>
using namespace std ;

class node{
    public:
    int key;
    int val;
    node* next;
    node(int key,int val){
        this->key=key;
        this->val=val;
        this->next=next;
    }
};

class hashpmap{
    public:
    int sz=4;
    vector<node*> v;
    int threshold=1 ;
    int keyCount=0;

    hashpmap(int sz){//constructor
        this->sz=sz;
        v.resize(sz, nullptr);
    }
    int hashfn(int key){
        return key%sz ;  //this is hashfunc we created , modulo of size
    }

    void push(int key, int val){
        int hid=hashfn(key);
        node* head=v[hid];
        if(head==nullptr){
            node* x= new node(key, val);
            v[hid]=x;
        }
        else{
            while(head->next !=nullptr){
                head=head->next;
            }
            node* x= new node(key, val);
            head->next=x;
        }
        keyCount++;
        float loadf=(float)keyCount/(float)sz;
        if(loadf >threshold){
            rehash();
        }
    }

    int find(int key){
        int hid=hashfn(key);
        node* head=v[hid];
        if(head==nullptr){
            return -1;
        }
        else{
            while(head!=nullptr){
                if(head->key==key){
                    return head->val;
                }
            }
            return -1;
        }
    }
    void rehash(){
        cout<<"Rehash called : "<<endl ;
        int osz=this->sz; //old wala store kiya
        sz*=2; // purane wale mein change kiya
        this->keyCount=0;
        vector<node*>ov=this->v ;
        // v.resize(sz,nullptr);
        vector<node*>nv(sz,nullptr);
        for(int i=0;i<osz;i++){
            node* head=ov[i];
            while(head!=nullptr){
                int key=head->key;
                int val=head->val;
                // int hid=hashfn(key);
                push(key,val);
                head=head->next;

            }
        }
    }
    

};
int main(){
    unordered_map<string, int>mp;
    hashpmap hmp(2) ;

    for(int i=0;i<66;i++){
        cout<<i<<endl;
        hmp.push(i,i*i);
    }
}