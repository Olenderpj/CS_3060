#include <iostream>

#include "BinaryTree.h"


/*/////////////////////////////////////////////////////////////////////////////////////////////
 CLASS: CS 3060
 NAME: PJ OLENDER
 DATE: 09/03/2022
 ASSIGNMENT #: 21.1

 Binary Tree Template:
    Write your own version of a class template that will create a binary tree that can hold
    values of any data type. Demonstrate the class with a driver program

 /////////////////////////////////////////////////////////////////////////////////////////////*/


// Driver Code
using namespace std;
int main() {
    // Create a DOUBLE binary tree
    BinaryTree<double> tree;

    // Insert initial double values
    cout<<"Inserting nodes" << endl;
    tree.insertNode(0.0);
    tree.insertNode(1.1);
    tree.insertNode(2.2);
    tree.insertNode(3.3);
    tree.insertNode(4.4);
    tree.insertNode(5.5);
    tree.insertNode(6.6);
    tree.insertNode(7.7);
    tree.insertNode(8.8);
    tree.insertNode(9.9);
    tree.insertNode(10.10);
    tree.insertNode(11.11);
    tree.insertNode(12.12);

    // Display all nodes in the tree IN ORDER
    cout<<"Displaying Nodes in order\n" <<
          "---------------------------------------" << endl;
    tree.displayInOrder();

    // Demonstrate the deletion of tree nodes
    cout<<"\nDeleting some nodes in the tree\n" <<
        "---------------------------------------" << endl;

    cout<<"[DELETE]: node containing (9.9)" << endl;
    tree.remove(9.9);

    cout<<"[DELETE]: node containing (12.12)...\n" << endl;
    tree.remove(12.12);

    // Re-display the nodes in the tree to confirm the deletion of nodes
    cout<<"Displaying Nodes in order\n" <<
          "---------------------------------------" << endl;
    tree.displayInOrder();

    return 0;
}

