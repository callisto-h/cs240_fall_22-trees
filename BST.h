#ifndef BST_H
#define BST_H

#include "Node.h"

class BST{
    public:
        // member variables + functions
        Node* root;


        BST(){
            root = nullptr;
        }
        BST(int val){
            root = new Node(val);
        }

        ~BST(){
            deleteTree(root);
        }

    private:

        /**
         * @brief Deletes the tree recursively
         *
         * @param node node to delete
         */
        void deleteTree(Node *node){}
};


#endif
