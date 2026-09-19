#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node* prev;
    Node(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insert_at_tail(Node* &head,Node* &tail, int val){
    Node* newNode = new Node(val);
    
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}

void check_same(Node* head,Node* head2){
    Node* temp = head;
    Node* temp2 = head2;

    bool flag = true;

    while(temp != NULL &&  temp2 != NULL){
        if(temp->value == temp2->value){
            temp = temp->next;
            temp2 = temp2->next;
            continue;
        }
        else{
            flag = false;
            break;
        }
    }

    if(temp != NULL || temp2 != NULL){
        flag = false;
    }

    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}


int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }

    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insert_at_tail(head2,tail2,val);
    }

    check_same(head,head2);

    return 0;
}