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

void check_same(Node* head1,Node* head2){
    bool same = true;
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->value != temp2->value){
            same = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if(temp1 == NULL && temp2 == NULL){
        same = true;
    }
    else{
        same = false;
    }
    if(same){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;

    int val;
    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insert_at_tail(head1,tail1,val);
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;

    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insert_at_tail(head2,tail2,val);
    }
    check_same(head1,head2);
    return 0;
}