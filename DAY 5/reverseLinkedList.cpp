#include<bits/stdc++.h>
#include "class.cpp"
using namespace std;
Node *reverseLL(Node *head) {
    if(head==NULL || head->next==NULL) {
        return head;
    }
    Node* temp = head;
    head = reverseLL(head->next);
    Node* temp1 = head;
    while(temp1->next!=NULL) {
        temp1=temp1->next;    
    }
    temp1->next=temp;
    temp->next=NULL;
    return head;
}
int main() {
    Node *head = takeInput();
    head = reverseLL(head);
    print(head);
}