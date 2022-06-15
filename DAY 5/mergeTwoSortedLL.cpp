#include<bits/stdc++.h>
#include "class.cpp"
using namespace std;
Node* mergeTwoSortedLinkedLists(Node *head1, Node *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    if (!head1) 
        return head2; 
    if (!head2) 
        return head1; 
  
    // start with the linked list 
    // whose head data is the least 
    if (head1->data < head2->data) { 
        head1->next = mergeTwoSortedLinkedLists(head1->next, head2); 
        return head1; 
    } 
    else { 
        head2->next = mergeTwoSortedLinkedLists(head1, head2->next); 
        return head2; 
    } 
    
}
int main() {
    Node *head1 = takeInput();
    Node *head2 = takeInput();
    Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
    print(head3);
}