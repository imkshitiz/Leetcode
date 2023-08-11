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
    int getlen(ListNode* head){
        int ans=0;
        while(head!=NULL){
            ans++;
         head=head->next;
         }
        return ans;
    }
    ListNode* middleNode(ListNode* head) {
        int len = getlen(head);
        int ans=(len/2);
        ListNode* temp =head;
        for(int i=0;i<ans;i++){
        temp=temp->next;
        }
        return temp;
    }
      
};