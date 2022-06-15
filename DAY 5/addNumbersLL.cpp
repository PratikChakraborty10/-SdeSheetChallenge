#include<bits/stdc++.h>
#include "class.cpp"
using namespace std;
Node *addTwoNumbers(Node *l1, Node *l2) {
    Node *dummy = NULL;
    Node *temp = dummy;
    int carry = 0;
    while((l1 != NULL || l2 != NULL) || carry) {
        int sum = 0;
        if(l1 != NULL) {
            sum = sum + l1->data;
            l1 = l1->next;
        }
        if(l2 != NULL) {
            sum = sum + l2->data; 
            l2 = l2->next; 
        }
        sum = sum + carry;
        carry = sum/10;
        Node *node = new Node(sum%10);
        temp->next = node;
        temp = temp->next;
    }
    return dummy->next;
}
int main() {
    Node *l1 = takeInput();
    Node *l2 = takeInput();
    Node *l3 = addTwoNumbers(l1, l2);
    print(l3);
}