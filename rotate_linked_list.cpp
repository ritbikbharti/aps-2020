#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void rotate(Node **head, int k) {
    if(k==0)
        return;
    
    Node* current = *head;

    int count = 1;
    while(count < k && current!=NULL) {
        current = current->next;
        count++;
    }

    if(current==NULL)
        return;

    Node *kthnode = current;

    while(current->next!=NULL)
        current=current->next;

    current->next = *head;
    *head = kthnode->next;
    kthnode->next = NULL;

}

void push(Node** head, int data) {
    Node* newnode = new Node();
    newnode->data = data;
    newnode->next = (*head);
    *head = newnode;
}

void printList(Node* node) {
    while(node!=NULL) {
        cout<< node->data << " ";
        node=node->next;
    }
}

int main() {
    Node* head = NULL;

    for(int i=0;i<5;i++) {
        push(&head,i);
    }
    printList(head);
    cout<<" "<<endl;

    rotate(&head,3);
    printList(head);

    return 0;
}