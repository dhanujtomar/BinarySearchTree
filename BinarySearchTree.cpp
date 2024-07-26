#include <iostream>
#include <vector>
#include <queue>

using namespace std;

template <typename T>
class TreeClass
{
public:
    T data;
    TreeClass<T> *left;
    TreeClass<T> *right;
    TreeClass<T>(int data);
};

template <typename T>
TreeClass<T>::TreeClass(int data) : data(data), left(nullptr), right(nullptr) {}

template <typename T>
class BinaryTree
{
private:
    TreeClass<T> *head = nullptr;

public:
    // Initialize Binary Tree
    BinaryTree(T data);

    // Traversals
    void preorder();
    void inorder();
    void postorder();

    // Insert elemenet in binary Tree
    void insert(T);

    // Level Order Traversal
    void traverse();

    // Delete Object
    ~BinaryTree();
};

template <typename T>
BinaryTree<T>::BinaryTree(T data)
{
    head = new TreeClass<T>(data);
}

template <typename T>
void BinaryTree<T>::preorder()
{
    static TreeClass<T> *root = head;
    if (root == nullptr)
        return;

    // Print Element
    cout << root->data << " ";

    // Left called
    TreeClass<T> *prev = root;
    root = root->left;
    preorder();

    // Right called
    root = prev;
    root = root->right;
    preorder();
}

template <typename T>
void BinaryTree<T>::inorder()
{
    static TreeClass<T> *root = head;

    if (root == nullptr)
        return;

    // Left called
    TreeClass<T> *prev = root;
    root = root->left;
    inorder();

    root = prev;
    // Print Element
    cout << root->data << " ";

    // Right called
    root = root->right;
    inorder();
}

template <typename T>
void BinaryTree<T>::postorder()
{
    static TreeClass<T> *root = head;
    if (root == nullptr)
        return;

    // Left called
    TreeClass<T> *prev = root;
    root = root->left;
    postorder();

    // Right called
    root = prev;
    root = root->right;
    postorder();

    // Print Element
    root = prev;
    cout << root->data << " ";
}

template <typename T>
void BinaryTree<T>::insert(T data)
{
    TreeClass<T> *temp = head;

    while (temp != nullptr)
    {
        if (temp->data > data)
        {
            if (temp->left == nullptr)
            {
                temp->left = new TreeClass<T>(data);
                break;
            }
            temp = temp->left;
        }
        else
        {
            if (temp->right == nullptr)
            {
                temp->right = new TreeClass<T>(data);
                break;
            }
            temp = temp->right;
        }
    }
}

template <typename T>
void BinaryTree<T>::traverse()
{
    TreeClass<T> *root = head;
    queue<TreeClass<T> *> q;

    q.push(root);

    while (!q.empty())
    {
        TreeClass<T> *frontNode = q.front();
        q.pop();

        cout << frontNode->data << " ";
        if (frontNode->left)
        {
            q.push(frontNode->left);
        }
        if (frontNode->right)
        {
            q.push(frontNode->right);
        }
    }
}

template <typename T>
BinaryTree<T>::~BinaryTree()
{
}

int main()
{
    BinaryTree<int> b(20);
    b.insert(30);
    b.insert(30);
    b.insert(40);
    b.insert(50);
    b.insert(60);
    b.insert(50);
    b.insert(35);

    b.inorder();

    return 0;
}