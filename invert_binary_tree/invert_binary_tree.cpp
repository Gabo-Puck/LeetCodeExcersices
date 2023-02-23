// #include "../BinaryTree.h"
#include <iostream>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *invertTree(TreeNode *root)
{
    if (root == nullptr)
        return nullptr;
    invertTree(root->left);
    invertTree(root->right);
    TreeNode *tmp = root->left;
    root->left = root->right;
    root->right = tmp;
    return root;
}

int main()
{
    std::cout << "Hello world1!";

    TreeNode *nodeL = new TreeNode(1);
    TreeNode *nodeR = new TreeNode(3);
    TreeNode *tree = new TreeNode(2, nodeL, nodeR);
    invertTree(tree);
    return 1;
}