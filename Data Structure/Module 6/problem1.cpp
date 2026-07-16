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
int main() {
    Node* head = new Node(5);
    Node* a = new Node(1);
    Node* b = new Node(4);
    Node* c = new Node(5);
    
    head->next = a;
    a->next = b;
    b->next = c;
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    cout<<count<<endl;
    return 0;
}