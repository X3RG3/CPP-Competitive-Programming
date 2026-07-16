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
void check_duplicate(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        int flag =0;
        Node* target =  temp->next;
        while(target!= NULL){
            

            
            if(target->value == temp->value ){
                flag = 1;
                break;
            }
            else{
                target = target->next;
            }
            
        }
        temp = temp->next;
        if(flag){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
}



int main() {
    Node* head = new Node(5);
    Node* tail = head;

    insert_at_tail(head,tail,4);
    insert_at_tail(head,tail,8);
    insert_at_tail(head,tail,6);
    insert_at_tail(head,tail,2);
    insert_at_tail(head,tail,1);
    check_duplicate(head);

    return 0;
}