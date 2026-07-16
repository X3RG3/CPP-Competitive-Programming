#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = tail->next;
}

void insert_at_head(Node* &head,Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void delete_at_any_position(Node* &head,int idx){
    Node* temp = head;
    for(int i=1;i<idx;i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
void print(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    
}
int main() {
    int t;
    cin>>t;
    Node* head = NULL;
    Node* tail = NULL;
    while(t--){
        
        int x,v;
        cin>>x>>v;
        if(x == 0){
            insert_at_head(head,tail,v);
        }
        else if(x == 1){
            insert_at_tail(head,tail,v);
        }
        else if(x == 2){
            delete_at_any_position(head,v);
        }

        print(head);
        cout<<endl;
    }

    return 0;
}