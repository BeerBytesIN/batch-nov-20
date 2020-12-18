#include<bits/stdc++.h>
using namespace std;
// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    
    ListNode* Intersection(ListNode* head,ListNode* slow)
    {
        while(slow!=head)
        {
            slow=slow->next;
            head=head->next;
        }
        return slow;
    }
    ListNode *detectCycle(ListNode *head) {
              
        if(head==NULL||head->next==NULL)
        {
            return NULL;
        }
        
        ListNode* slow=head->next;
        ListNode* fast=head->next->next;
        
        while(fast!=NULL&&fast->next!=NULL&&fast!=slow)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast==slow)
        {
            
            return Intersection(head,slow);
        }
        else
        {
            return NULL;
        }
        
    }
};