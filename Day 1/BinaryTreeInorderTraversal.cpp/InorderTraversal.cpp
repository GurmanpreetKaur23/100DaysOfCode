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

void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    // LNR
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = nullptr;
    root = buildTree(root);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
