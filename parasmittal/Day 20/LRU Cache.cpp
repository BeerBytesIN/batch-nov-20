struct Node{
    int val;
    int key;
    Node *left,*right;
    Node(int k,int v){
        key=k;
        val=v;
        left=NULL;
        right=NULL;
    }
};
class LRUCache {
    unordered_map<int,Node*> um;
public:
    int size;
    Node *start,*end;
    int count;
  //  Node* head;
    LRUCache(int capacity) {
  //     head=NULL;
        size=capacity;
        count=0;
        start=new Node(0,0);
        end=new Node(0,0);
        start->right=end;
        end->left=start;
    }
    void deleteNode(Node* root){
      //  if(root->right)
        root->right->left=root->left;
      //  if(root->left)
        root->left->right=root->right;
       // root->left=NULL;
       // root->right=NULL;
      //  if(head==root)
       //     head=NULL;
    }
    void addToHead(Node* root){
        root->right=start->right;
        start->right->left=root;
        start->right=root;
        root->left=start;
       
//        if(head==NULL){
    //        start->right=root;
   // //        root->left=start;
  //          root->right=end;
     //       end->left=root;
  //          head=root;
         
  //    }
     //   else{
       //root->right=head;
       // root->left=head->left;
       //  if(head->left)
      //  head->left->right=root;
         //   if(head->right)
      //  head->right->left=root;
      //  head=root;
    //    }
        
       
        
    }
    int get(int key) {
        if(um[key]==NULL)
            return -1;
        Node* root=um[key];
        int val=root->val;
        
        deleteNode(root);
        addToHead(root);
        return val;
    }
    
    void put(int key, int value) {
        if(um[key]==NULL){
           Node* root=new Node(key,value);
            um[key]=root;
            if(count==size){
                um[end->left->key]=NULL;
                deleteNode(end->left);
                addToHead(root);
            }
            else{
                count++;
                addToHead(root);
            }
        }
        else{
           Node* root=new Node(key,value);
           deleteNode(um[key]);
            addToHead(root);
           um[key]=root;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */