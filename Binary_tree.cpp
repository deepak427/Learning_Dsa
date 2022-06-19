#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* right=NULL;
    Node* left=NULL;
    
    Node(int item){
        data=item;
    }
};

class Binary_Tree{
    public:
    Node* root;
    Binary_Tree(int root_data){
        root=new Node(root_data);
    }
    
    void insert(Node* root){
        int left;
        int right;
        cin>>left>>right;
        if(left!=-1){
            Node* left_data= new Node(left);
            root->left=left_data;
            insert(left_data);
        }
        if(right!=-1){
            Node* right_data= new Node(right);
            root->right= right_data;
            insert(right_data);        
        }
        return;
    }
};

void traversal(Node* node){
    if(node==NULL){
        return;
    }
    cout<<node->data<<" ";
    traversal(node->left);
    traversal(node->right);   
}

int main()
{
    Binary_Tree binary_tree_1(13);
    Node* r_node = binary_tree_1.root;
    binary_tree_1.insert(r_node);
    traversal(r_node);
    return 0;
}
