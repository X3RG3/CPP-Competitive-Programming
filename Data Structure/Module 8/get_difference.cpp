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
void find_diff(Node* head){
    if(head == NULL ){
        cout<<0<<endl;
        return;
    }
    int max,min;
    max = head->value;
    min = head->value;
    Node* temp = head;
    while(temp!= NULL){
        if(temp->value > max){
            max = temp->value;
        }
        if(temp->value < min){
            min = temp->value;
        }

        temp = temp->next;
    }
    cout<<max-min<<endl;
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
    find_diff(head);
    return 0;
}