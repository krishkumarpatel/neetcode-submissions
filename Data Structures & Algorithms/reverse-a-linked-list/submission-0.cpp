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
    ListNode* reverseList(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        ListNode* node = head;

        while(node != NULL) {
            ans.push_back(node->val);
            node = node->next;
        }

        int n = ans.size();
        for(int i=n-1; i>=0; i--) {
            head->val = ans[i];
            head = head->next;
        }
        return temp;
    }
};
