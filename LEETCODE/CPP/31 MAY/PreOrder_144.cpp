// LEETCODE SOLUTION
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans ;
        preorder(root , ans) ;
        return ans ;    
    }

    void preorder(TreeNode* root , vector<int>&ans) {
        if(root!=NULL) {
            // NLR
            ans.push_back(root->val) ;
            preorder(root->left , ans) ;
            preorder(root->right , ans);
        }
    }
};

// GENERAL SOLUTION
#include<iostream>
#include<queue>
using namespace std ;

class Node{
    public:
    int data ;
    Node* right ;
    Node* left ;

    Node(int data) {
        this->data = data ;
        this->left = NULL ;
        this->right = NULL ;
    }

} ;

Node* buildTree(Node* root) {
    cout<<"Enter data : "<<endl ;
    int data ; cin>>data ;

    if(data == -1 ) {
        return NULL ;
    }

    root = new Node(data) ;

    cout<<"Enter data for the left of : "<<data<<endl ;
    root->left = buildTree(root->left) ;

    cout<<"Enter data for the right of : "<<data<<endl ;
    root->right = buildTree(root->right) ;

    return root ;
}

void preorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    // NLR
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main() {
    Node* root = nullptr;
    root = buildTree(root);

    cout << "Level Order Traversal:" << endl;
    levelOrderTraversal(root);

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    return 0;
}
