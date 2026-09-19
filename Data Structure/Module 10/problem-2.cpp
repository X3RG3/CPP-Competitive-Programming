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

void doubly_linked_list_reverse(Node* &head, Node* &tail){
    for(Node* i=head,*j = tail; i!=j && i->prev !=j ;i=i->next,j=j->prev){
        swap(i->value,j->value);
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



    doubly_linked_list_reverse(head,tail);
    print_forward(head);

 

    return 0;
}