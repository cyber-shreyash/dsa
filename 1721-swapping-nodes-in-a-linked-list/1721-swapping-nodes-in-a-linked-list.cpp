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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> a;
        ListNode* temp = head;

        while (temp != NULL) {
            a.push_back(temp->val);
            temp = temp->next;
        }
        int n = a.size();
        int p = n-k;

        swap(a[k - 1], a[p]);
        temp = head;
        for (int i = 0; i < n; i++) {
            temp->val = a[i];
            temp = temp->next;
        }
    
    return head;}
};