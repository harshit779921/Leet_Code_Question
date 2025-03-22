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
    void deletenode( ListNode* root , int prev , ListNode* prevnode ){
        if ( ! root ) return;
        if ( root -> val == prev ){
            prevnode -> next = root -> next;
            deletenode ( root -> next , prev , prevnode );
        }
        else deletenode ( root -> next , root -> val , root );
    }
    ListNode* deleteDuplicates(ListNode* head) {
        if ( !head ) return head;
        deletenode( head , -1000 , new ListNode() );
        return head;
    }
};