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
        
   
        
       int count=0; 
        ListNode * fp;
       
        int Fvalue;
        ListNode * temp = head;
        int finder = k;
        while(temp != nullptr){
            
            if(finder==1){
                Fvalue = temp->val;
                fp = temp;
            }
                
            count++;
            finder--;
            temp = temp->next;
        }
        
        temp = head;
        finder = 0;
         while(temp != nullptr){
            
            if(finder==count-k){
                int swap = temp->val;
                temp->val = Fvalue;
                fp->val = swap;
                
               
            }
                
            
            finder++;
            temp = temp->next;
        }
        
        
        
        return head;
        
        
        
    }
};