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

void  search(Node* head, int v){
    Node* temp = head;
    int idx = 0;
    bool found = false;
    while(temp != NULL){
        if(temp->value == v){
            found = true;
            break;
        }
        temp = temp->next;
        idx++;

    }
    if(found){
        cout<<idx<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        Node* head = NULL;
        Node* tail = NULL;

        int val;
        while(true){
            cin>>val;
            if(val == -1){
            break;
            }
            insert_at_tail(head,tail,val);
        }
        int v;
        cin>>v;
        search(head,v);

        
    }

    return 0;
}