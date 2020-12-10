#include<bits/stdc++.h>
using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:

    Node* copyRandomList(Node* head) {
        
        if(head==NULL)
        {
            return NULL;
        }
       
        Node* curr=head;
        while(curr!=NULL)
        {
            Node* temp=curr->next;
            Node* currRep=new Node(curr->val);
            curr->next=currRep;
            currRep->next=temp;
            curr=curr->next->next;
        }
        curr=head;
        while(curr!=NULL)
        {
            if(curr->random!=NULL)
            {
                curr->next->random=curr->random->next;
            }
            else
            {
                curr->next->random=NULL;
            }
            curr=curr->next->next;
        }
        
        curr=head;
        Node* newHead=curr->next;
        Node* newCurr=newHead;
        while(curr->next!=NULL&&newCurr->next!=NULL)
        {
            curr->next=curr->next->next;
            curr=curr->next;
            newCurr->next=newCurr->next->next;
            newCurr=newCurr->next;
        }
        curr->next=NULL;
        return newHead;
    }
};