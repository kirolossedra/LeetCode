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


// Function to convert a vector to a linked list
ListNode* vectorToLinkedList(const std::vector<int>& vec) {
    if (vec.empty()) {
        return nullptr;
    }

    ListNode* head = new ListNode(vec[0]);
    ListNode* current = head;

    for (size_t i = 1; i < vec.size(); ++i) {
        current->next = new ListNode(vec[i]);
        current = current->next;
    }

    return head;
}



class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        vector <int> s;
        int temp = 0; 
        
        
   ListNode* current = head;
    while (current != nullptr) {
        if(current->val == 0 and temp != 0){
            s.push_back(temp);  
            temp = 0;
                      
        }
        if(current->val!= 0){
            
            temp += current->val;
            
        }
        
        current = current->next;
    }
        
        
        
        return vectorToLinkedList(s);
        
    }
};