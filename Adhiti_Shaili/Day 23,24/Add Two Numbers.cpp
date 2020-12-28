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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        queue<int> s1;
        queue<int> s2;
        queue<int> total;
        int carry=0;
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        
        while(curr1!=NULL)
        {
            s1.push(curr1->val);
            curr1=curr1->next;
        }
        while(curr2!=NULL)
        {
            s2.push(curr2->val);
            curr2=curr2->next;
        }
        
        while(!s1.empty()&&!s2.empty())
        {
            int sum=s1.front()+s2.front()+carry;
            s1.pop();
            s2.pop();
            carry=sum/10;
            total.push(sum%10);
        }
        
        while(!s1.empty())
        {
            int sum=s1.front()+carry;
            s1.pop();
            carry=sum/10;
            total.push(sum%10);
        }
        while(!s2.empty())
        {
            int sum=s2.front()+carry;
            s2.pop();
            carry=sum/10;
            total.push(sum%10);
        }
        if(carry)
        {
            total.push(carry);
        }
        
        
        ListNode* ans=new ListNode(total.front());
        total.pop();
        ListNode* head=ans;
        while(!total.empty())
        {
            ListNode* temp=new ListNode(total.front());
            total.pop();
            ans->next=temp;
            ans=ans->next;
        }
        return head;       
    }
};