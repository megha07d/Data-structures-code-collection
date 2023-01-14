/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        //if length == 0
        if(head == NULL)
        {
            return false;
        }
        
        // if length is == 1
        // return -1
        if(head->next == NULL)
        {
            return false;
        }
        
        //if length == 2
        //has cycle or not?
        
        else if(head->next->next == NULL)
        {
            return false;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while((slow!=NULL)&&(fast!=NULL)&&(fast->next!=NULL))
        {
            slow = slow -> next;
            fast = fast-> next -> next;
            if((fast)&&(slow))
            {
                // if(((slow -> val) == (fast->val))&&((slow->next) == (fast->next)))
                
                //focus on addresses pointed rather than values coz 
                //what if input is [1,1,1,1,1] & has no cycle? 
                //slow and fast still would point same value but not equal addresses
                
                if((slow->next) == (fast->next))
                    {
                        //cycle found
                        return true;
                    }
            }
        }
        //due to some condition , loop stopped and reached this point coz
        //it didnot return anything in loop
        //so
        
        return false;
    }
};