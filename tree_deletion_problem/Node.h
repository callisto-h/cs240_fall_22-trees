#ifndef NODE_H
#define NODE_H

class Node
{
    public:
        Node *left;
        Node *right;
        int value;

        Node()
        {
            left = nullptr;
            right = nullptr;
            value = 0;
        }
        Node(int n)
        {
            value = n;
            left = nullptr;
            right = nullptr;
        }
};

#endif
