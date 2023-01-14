/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

                //HARE TORTOISE ALGORITHM


class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode* rabbit= head;
        ListNode* tortoise = head;
        
        while(rabbit != NULL && tortoise != NULL)
        {
            if((tortoise -> next) != NULL )//made sure tortoise is not null
            {
                  rabbit= rabbit->next;
                  tortoise = tortoise->next->next;
            
                    if(rabbit == tortoise)
                    {
                        return true;
                    }
            }
            else
            {
                return false;
            }
      
        }
        
        return false;
    }
};