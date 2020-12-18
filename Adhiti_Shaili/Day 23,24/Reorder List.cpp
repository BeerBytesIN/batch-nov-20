
#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nex=head->next;
        
        while(curr!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=nex;
            if(nex!=NULL)
            {
                nex=nex->next;
            }
        }
        return prev;
    }
    
    
    void reorderList(ListNode* head) {
        
        if(head==NULL||head->next==NULL)
        {
            return;
        }
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* temp=slow->next;
        slow->next=NULL;
        
        temp=reverse(temp);
        ListNode* curr=head;
       
        ListNode* add=head;
        curr=curr->next;
        add->next=temp;
        
        temp=temp->next;
        add=add->next;
        while(temp!=NULL&&curr!=NULL)
        {
            add->next=curr;
            curr=curr->next;
            add=add->next;
            
            add->next=temp;
            temp=temp->next;
            add=add->next;           
            
        }
        add->next=curr;
        
        return;
    }
};