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

void insert_at_tail(Node* &head,Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = tail->next;

}

void delete_at_any_position(Node* &head,Node* &tail,int idx){
     if(head == NULL){
        return;
    }
    if(idx == 0){
        Node* deleteNode = head;
        head = head->next;
        if(head == NULL){
            tail = NULL;
        }
        delete deleteNode;
        return;
    }

    Node* temp = head;
    for(int i=1;i<idx;i++){
        if(temp->next == NULL){
            return;
        }
        temp = temp->next;
    }
    if(temp->next == NULL){
            return;
    }

    Node* deleteNode = temp->next;
    if(deleteNode == tail){
        tail = temp;
    }
    temp->next = deleteNode->next;
    delete deleteNode;
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->value<<" ";
        temp = temp->next;
    }
}

void check_duplicate(Node* &head,Node* &tail){
    if(head == NULL || head->next == NULL){
        return;
    }
    int idx = 1;
    Node* cur = head;
    
    while(cur!= NULL ){
        Node* ck = cur->next;
        while(ck != NULL){
            if(cur->value == ck->value){
                delete_at_any_position(head,tail,idx);
                idx++;
            }
            ck = ck->next;
        }
        cur = cur->next;
    }
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;
    while(true){
        int v;
        cin>>v;
        if(v==-1){
            break;
        }
        else{
            insert_at_tail(head,tail,v);
        }
    }
    check_duplicate(head,tail);
    print_linked_list(head);
    return 0;
}