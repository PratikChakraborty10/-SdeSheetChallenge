#include<bits/stdc++.h>
#include "class.cpp"
using namespace std;
Node* deleteNode(Node *head, int i) {
    if(head == NULL) 
       return NULL; 
    if(i == 0) { 
        Node *res = head; 
        head=head->next;
        delete res; 
        return head;   
    } 
    head->next = deleteNode(head->next, i-1); 
    return head; 
}
int main() {
    Node *head = takeInput();
    int pos;
    cin >> pos;
    head = deleteNode(head, pos);
    print(head);
}