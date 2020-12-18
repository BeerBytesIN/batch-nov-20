#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

void topView(struct Node *root);


int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,i,k;
        cin>>n;
        i=n;

        Node* root=NULL;
        queue <Node*> q;
        while(i>0)
        {
            int a,b;
            char c;
            cin>> a >> b >> c;
            if(!root){
                root = new Node(a);
                q.push(root);
            }
            Node* pick = q.front();
            q.pop();

            if(c == 'L'){
                pick->left = new Node(b);
                q.push( pick->left );
            }
            cin>> a >> b >> c;
            if(c == 'R'){
                pick->right = new Node(b);
                q.push( pick->right );
            }
            i-=2;
        }
//        inorder(root);
//        cout<<endl;
        topView(root);
        cout << endl;
    }
    return 0;
}


// function should print the topView of the binary tree
#include<unordered_map>
#include<queue>
void topView(struct Node *root)
{
    if(root==NULL)
    {
        return;
    }
    unordered_map<int,int> hash;
    queue<pair<Node*,int>> q;
    
    q.push({root,0});
    hash[0]=root->data;
    int min=0,max=0;
    
    while(q.size()!=0)
    {
        int count=q.size();

        while(count>0)
        {
            Node* blah=q.front().first;
            int temp=q.front().second;
            q.pop();
            if(blah->left!=NULL)
            {
                q.push({blah->left,temp-1});
            }
            if(blah->right!=NULL)
            {
                q.push({blah->right,temp+1});
            }
            count--;
            
            if(!hash[temp])
            {
                hash[temp]=blah->data;
            }
            if(temp<min)
            {
                min=temp;
            }
            if(temp>max)
            {
                max=temp;
            }
        }
        
    }
    
    for(int i=min;i<=max;i++)
    {
        cout<<hash[i]<<" ";
    }

}


