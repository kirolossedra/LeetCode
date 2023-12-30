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
    
    
    ListNode* mergeKListsHelper(vector<ListNode*>& lists, int start, int end) {
        if (start == end) {
            return lists[start];
        }
        if (start + 1 == end) {
            return merge(lists[start], lists[end]);
        }
        int mid = start + (end - start) / 2;
        ListNode* left = mergeKListsHelper(lists, start, mid);
        ListNode* right = mergeKListsHelper(lists, mid + 1, end);
        return merge(left, right);
    }
    
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        
        while (l1 && l2) {
            if (l1->val < l2->val) {
                curr->next = l1;
                l1 = l1->next;
            } else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        
        curr->next = l1 ? l1 : l2;
        
        return dummy->next;
    }
    ListNode* nonEm(vector<ListNode*>& lists){
vector <int> result;
        ListNode * temp = nullptr;
        void * ptr;
        
        
        for(int i=0; i<lists.size(); i++){
temp = lists[i];
            while(temp!= nullptr){
                result.push_back(temp->val);
                temp = temp->next;


}
            


}
        sort(result.begin(),result.end());
        
        
        ListNode * head = new ListNode();
        ListNode * last = head;
    head = last;
    
    for(int i=0; i<result.size(); i++){
        last->val = result[i];
        if(i!=result.size()-1){
             last->next = new ListNode();
        } else{
            last->next = nullptr;
        }
        last = last->next; 
    }
          return head;



}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        
        if(lists.empty()){

return nullptr;
}
        if(lists.empty()){

return nullptr;
}
        
     
        
        
        if(lists.empty()){

return nullptr;
}
        
     
    //  return nonEm(lists);
        
     return mergeKListsHelper(lists, 0, lists.size() - 1);
        
        return nonEm(lists);
        
        
    }
};