#include <bits/stdc++.h>
using namespace std;


#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


void bottomView(Node *root);

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}



int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);

        bottomView(root);
        cout << endl;
    }
    return 0;
}


#include<unordered_map>
#include<queue>
void bottomView(Node *root)
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
            hash[temp]=blah->data;
         
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
