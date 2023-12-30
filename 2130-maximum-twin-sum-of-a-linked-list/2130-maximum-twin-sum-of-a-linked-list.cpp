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
    int pairSum(ListNode* head) {
      int maxSum = INT32_MIN;
        vector<int> arr; 
        ListNode* p = head;
        while(p!= nullptr){
            arr.push_back(p->val);
            p = p->next;
        }
        int lp = 0;
        int rp = arr.size()-1;
        while(lp<=rp){
            if(arr[lp]+arr[rp] > maxSum)
                maxSum = arr[lp]+arr[rp];
            lp++;
            rp--;
            
        }
        return maxSum;
    }
};