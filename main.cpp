#include "BST.h"
#include "Node.h"
#include <iostream>

int main(){
    BST *bst = new BST(5);
    bst->root->left = new Node(3);
    bst->root->left->right = new Node(4);
    bst->root->right = new Node(8);
    bst->root->right->right = new Node(9);
    bst->root->right->left = new Node(6);
    bst->root->right->left->right = new Node(7);
    
    /*
     *         ┌─┐
     *         │5│
     *  ┌──────┴─┴─────────┐
     *  │                  │
     * ┌▼┐                ┌▼┐
     * │3│                │8│
     * └─┴──┐         ┌───┴─┴────┐
     *      │         │          │
     *     ┌▼┐       ┌▼┐        ┌▼┐
     *     │4│       │6│        │9│
     *     └─┘       └─┴─┐      └─┘
     *                   │
     *                  ┌▼┐
     *                  │7│
     *                  └─┘
     */

    delete bst;

    return 0;
}
