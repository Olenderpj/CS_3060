
#ifndef HW_21_1_OLENDER_BINARYTREE_H
#define HW_21_1_OLENDER_BINARYTREE_H

using namespace std;

// Binary Tree Template
template <class T>
class BinaryTree{
private:
    struct TreeNode{
        T value;
        TreeNode *left;
        TreeNode *right;
    };// Binary Tree node Struct

    TreeNode *root;

    // Function Headers
    void insert(TreeNode *&,TreeNode *&);
    void destroySubTree(TreeNode *);
    void deleteNode(T,TreeNode *&);
    void makeDeletion(TreeNode *&);

    /*
     * Recursively traverse the current node's left subtree.
     * Visit the current node (in the figure: position green).
     * Recursively traverse the current node's right subtree.
     */
    void displayInOrder(TreeNode *&nodePtr){
        if(nodePtr){
            displayInOrder(nodePtr->left);
            cout<<nodePtr->value<<endl;
            displayInOrder(nodePtr->right);
        }
    }

    /*
     * Visit the current node
     * Recursively traverse the current node's left subtree
     * Recursively traverse the current node's right subtree
     */
    void displayPreOrder(TreeNode *nodePtr){
        if(nodePtr) {
            cout << nodePtr->value << endl;
            displayPreOrder(nodePtr->left);
            displayPreOrder(nodePtr->right);
        }
    }

    /*
     * Recursively traverse the current node's left subtree
     * Recursively traverse the current node's right subtree
     * Visit the current node
     */
    void displayPostOrder(TreeNode *nodePtr){
        if(nodePtr){
            displayPostOrder(nodePtr->left);
            displayPostOrder(nodePtr->right);
            cout<<nodePtr->value<<endl;
        }
    }

public:
    // Constructor
    BinaryTree(){
        // Assign the starting node's root to a null pointer as it's at the highest level
        root = nullptr;
    }
     // Destructor
    ~BinaryTree(){
        destroySubTree(root);
    }

    // Function Templates
    void insertNode(T);

    void remove(T value){
        deleteNode(value,root);
    }
    void displayInOrder(){
        displayInOrder(root);
    }
    void displayPreOrder(){
        displayPreorder(root);
    }
    void displayPostOrder() {
        displayPostOrder(root);
    }

};

// Function Definitions
template <class T>
void BinaryTree<T>::insert(TreeNode *&nodePtr,TreeNode *&newNode){

    // Check if the initial tree is empty
    if(nodePtr== nullptr){
        nodePtr = newNode;
    }

    // Place the node on the left side of the subtree
    else if(newNode->value < nodePtr->value){
        insert(nodePtr->left,newNode);
    }

    // Place the node on the right side of the subtree
    else{
        insert(nodePtr -> right,newNode);
    }
}

// Create a new subtree and insert the current node at the top level of the individual tree
template <class T>
void BinaryTree<T>::insertNode(T nodeValue){
    TreeNode *newNode = nullptr;
    newNode=new TreeNode;
    newNode->value=nodeValue;
    newNode->left= nullptr;
    newNode->right= nullptr;
    insert(root,newNode);

}//end insert node

// Delete a node from the tree and re-arrange nodes to fit as necesary
template <class T>
void BinaryTree<T>::makeDeletion(TreeNode *&nodePtr){
    TreeNode *tempNodePtr= nullptr;

    // Check for tree root
    if(nodePtr == nullptr){
        cout<<"cannot delete empty node";
    }

    // delete right node
    else if(nodePtr->right == nullptr){
        tempNodePtr=nodePtr;
        nodePtr=nodePtr->left;
        delete tempNodePtr;
    }

    // delete left node
    else if(nodePtr->left == nullptr){
        tempNodePtr=nodePtr;
        nodePtr=nodePtr->right;
        delete tempNodePtr;
    }


    else{
        tempNodePtr=nodePtr->right;

        while(tempNodePtr->left){
            tempNodePtr = tempNodePtr->left;
        }

        tempNodePtr->left=nodePtr->left;
        tempNodePtr=nodePtr;

        nodePtr=nodePtr->right;
        delete tempNodePtr;
    }
}

// Destroy entire subtree by deleting the top level node of the tree
template <class T>
void BinaryTree<T>::destroySubTree(TreeNode *nodePtr){
    if(nodePtr->left){
        destroySubTree(nodePtr->left);
    }
    if(nodePtr->right){
        destroySubTree(nodePtr->right);
    }
    delete nodePtr;
}

// Delete a single node from the tree
template <class T>
void BinaryTree<T>::deleteNode(T value, TreeNode *&nodePtr) {
    if (value < nodePtr->value) {
        deleteNode(value, nodePtr->left);
    } else if (value > nodePtr->value) {
        deleteNode(value, nodePtr->right);
    }
    else{
        makeDeletion(nodePtr);
    }
}

#endif //HW_21_1_OLENDER_BINARYTREE_H
