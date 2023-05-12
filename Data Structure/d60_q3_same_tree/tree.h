#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

class Tree{
    class Node{
        public:
            friend class Tree;
            Node() {data = -1; left = NULL; right = NULL;}
            Node(const int x, Node* left, Node* right) : data(x), left(left), right(right) {}

        protected:
            int data;
            Node* left;
            Node* right;
    };
public:

    Tree() {
        mRoot = NULL;
        mSize = 0;
    }

    ~Tree() {
        clear(mRoot);
    }

    void clear(Node*& r) {
        if (!r) return;
        clear(r->left);
        clear(r->right);
        delete r;
    }

    void insert(int x) {
        insertAt(mRoot, x);
    }

    bool check(Node *me, Node *you) {
        if (me->data != you->data) {
            return false;
        } else {
            bool b = true;
            if (me->left != nullptr || you->left != nullptr)
                b = b & check(me->left, you->left);
            if (me->right != nullptr || you->right != nullptr)
                b = b & check(me->right, you->right);
            return b;
        }
    }

    bool verify(Node *n1, Node *n2, bool& b) {
        if (n1->data != n2->data)
            return false;
        if (n1->left != nullptr || n2->left != nullptr)
            b = b & verify(n1->left, n2->left, b);
        if (n1->right != nullptr || n2->right != nullptr)
            b = b & verify(n1->right, n2->right, b);
        return b;
    }

    bool isSameBinaryTree(Tree& t) {
        if (mSize != t.mSize) return false;
        bool b = true;
        //return check(mRoot, t.mRoot);
        return verify(mRoot, t.mRoot, b);

    }
    // You can also put your code here

protected:
    void insertAt(Node*& r, int x) {
        if (!r) {
           r = new Node(x, NULL, NULL);
           mSize++;
           return;
        }
        if (r->data == x) return; // Do nothing
        if (x < r->data) insertAt(r->left, x); else
        insertAt(r->right, x);
    }
    Node* mRoot;
    int mSize;

};

#endif // TREE_H_INCLUDED
