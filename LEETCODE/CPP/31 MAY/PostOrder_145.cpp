// LEETCODE SOLUTION
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postorder(root , ans) ;
        return ans ;
    }

    void postorder(TreeNode* root , vector<int>&ans) {
        // LRN
        if(root != NULL) {
            postorder(root->left , ans) ;
            postorder(root->right , ans) ;
            ans.push_back(root->val) ;
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

void postorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    // LRN
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = nullptr;
    root = buildTree(root);

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}
