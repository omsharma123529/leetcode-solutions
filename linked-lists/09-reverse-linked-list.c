#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;

    while (curr != NULL) {
        struct ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}

// Helper to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

// Helper to print linked list
void printList(struct ListNode* head) {
    struct ListNode* curr = head;
    while (curr != NULL) {
        printf("%d%s", curr->val, curr->next ? " -> " : "");
        curr = curr->next;
    }
    if (!head) printf("NULL");
}

int main(void) {
    // Test Case 1: Standard List [1, 2, 3, 4, 5]
    struct ListNode* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    head1->next->next->next = createNode(4);
    head1->next->next->next->next = createNode(5);

    printf("Test 1: Input: ");
    printList(head1);
    head1 = reverseList(head1);
    printf(" | Reversed: ");
    printList(head1);
    printf(" (Expected: 5 -> 4 -> 3 -> 2 -> 1)\n");

    // Test Case 2: Empty List
    struct ListNode* head2 = NULL;
    head2 = reverseList(head2);
    printf("Test 2: Input: NULL | Reversed: ");
    printList(head2);
    printf(" (Expected: NULL)\n");

    // Test Case 3: Single Element [42]
    struct ListNode* head3 = createNode(42);
    head3 = reverseList(head3);
    printf("Test 3: Input: 42 | Reversed: ");
    printList(head3);
    printf(" (Expected: 42)\n");

    return 0;
}
