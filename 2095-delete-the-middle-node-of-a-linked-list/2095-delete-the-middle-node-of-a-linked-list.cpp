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
    
     void deleteNode(ListNode* node) {
        
        
        if(node->next == nullptr){
            node = new ListNode();
            return;
            
        }
        
    
        node->val = node->next->val;
        node->next=node->next->next;
    

       
        
        
    }
    ListNode* deleteMiddle(ListNode* head) {
        int countPlace = 0;
        
        ListNode * test = head;
        while(test!= nullptr){
            countPlace++;
            test=test->next; 
            
            
        }
        if(countPlace == 1)
            return nullptr;
        int index = countPlace/2;
        ListNode * finale = head;
        while(finale->next!= nullptr && index-1){
            finale = finale->next;
            index--;
            
            
        }
        cout<<finale->val<<endl;
       finale->next = finale->next->next;
        
      
       // cout<<countPlace;
        
        return head;
        
    }
};