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
        cout<< temp->value<<endl;
        temp = temp->next;
    }
}

int main() {
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
    return 0;
}