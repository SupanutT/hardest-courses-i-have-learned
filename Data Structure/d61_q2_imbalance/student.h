// Your code here

int countLevel(node* n) {
    if (n == nullptr) return -1;
    if (n->left == nullptr && n->right == nullptr) return 0;
    if (n->left == nullptr) return 1 + countLevel(n->right);
    if (n->right == nullptr) return 1 + countLevel(n->left);
    return std::max(countLevel(n->left), countLevel(n->right));
}

void process(node* n, int& maxLevel, KeyT& minKey) {
    int diff = std::abs(countLevel(n->left) - countLevel(n->right));
    if (diff >= maxLevel && n->data.first < minKey) {
        minKey = n->data.first;
        maxLevel = diff;
    }
    if (n->left == nullptr && n->right == nullptr) return;
    if (n->left == nullptr) return process(n->left, maxLevel, minKey);
    if (n->right == nullptr) return process(n->right, maxLevel, minKey);
    process(n->left, maxLevel, minKey);
    process(n->right, maxLevel, minKey);
}

KeyT getValueOfMostImbalanceNode() {
    int maxLevel = 0;
    KeyT minKey = mRoot->data.first;
    process(mRoot, maxLevel, minKey);
    return minKey;
}
