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

void check_pal(Node* &head, Node* &tail){
    bool flag = true;
    for(Node* i=head,*j = tail; i!=j && i->prev !=j ;i=i->next,j=j->prev){
            if(i->value != j->value){
                flag = false;
                break;
            }
    }

    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

    check_pal(head,tail);
    return 0;
}