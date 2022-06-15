#include<bits/stdc++.h>
#include "class.cpp"
using namespace std;
Node *midPoint(Node *head) {
    if(head==NULL || head->next==NULL) {
        return head;
    }
    Node *slow = head;
    Node *fast = head->next;
    while(fast != NULL || fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main() {
    Node *head = takeInput();
    Node *mid = midPoint(head);
    if(mid != NULL) {
        cout << mid->data;
    }
    cout << endl;
}