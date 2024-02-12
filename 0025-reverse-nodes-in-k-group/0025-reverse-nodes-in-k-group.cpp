/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* current = head;
    ListNode* prev = NULL;
    ListNode* next = NULL;
    int count = 0;

    // Count the number of nodes in the current k-group
    while (current != NULL && count < k) {
        current = current->next;
        count++;
    }

    // If the number of nodes is less than k, no need to reverse, return head as is
    if (count < k) {
        return head;
    }

    // Reverse the current k-group recursively
    current = head;
    count = 0;
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    // Recursively call for the next k-group
    if (next != NULL) {
        head->next = reverseKGroup(next, k);
    }

    // Return the new head of the reversed k-group
    return prev;
    }
};