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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> a;
        vector<int> b;
        vector<pair<int, int>> p;
        while (head != NULL) {
            a.push_back(head->val);
            head = head->next;
        }
        int mini = INT_MAX;

        int n = a.size();
        for (int i = 1; i < n - 1; i++) {
            if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
                // p.push_back({a[i],i});
                b.push_back(i);
            }
            if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
                //    p.push_back({a[i],i});
                b.push_back(i);
            }
        }
        sort(b.begin(),b.end());
        if (b.size() < 2) {
            return {-1, -1};
        }
        int maxi = b.back() - b.front();

        for (int i = 1; i < b.size(); i++) {
            mini = min(mini, b[i] - b[i - 1]);
        }

        return {mini, maxi};
    }
};