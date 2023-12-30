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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
          int countPlace = 0;
        
        ListNode * test = head;
        while(test!= nullptr){
            countPlace++;
            test=test->next; 
            
            
        }
     
         
       
        if(countPlace == 1)
            return nullptr;
        int index = countPlace - n;
        ListNode * finale = head;
        
           if(countPlace == n){
         head = finale->next;
          
          return head;
      }
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