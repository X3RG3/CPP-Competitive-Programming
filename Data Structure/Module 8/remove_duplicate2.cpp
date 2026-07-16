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

    Node* cur = head;
    
    while(cur!= NULL ){
        Node* prev = cur;
        Node* ck = cur->next;
        while(ck != NULL){
            if(cur->value == ck->value){
                prev->next = ck->next;
                if (ck == tail){
                    tail = prev;
                }
                delete ck;
                ck = prev->next;
            }
            else{
                prev = ck ;
                ck = ck->next;
            }
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