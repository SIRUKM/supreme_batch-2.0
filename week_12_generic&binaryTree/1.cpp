#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
class BinaryTree{
    public: 
    Node * root;

    BinaryTree(){
        root = nullptr;
    }

    void insert(int data){
        Node* newNode = new Node(data);
        if(root == nullptr){
            root = newNode;
            return;
        }

        queue <Node*> q;
        q.push(root);

    }
};

void preorder(Node * node){
    if(node == NULL) return ;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}
Node * createNode(){

}
int main()
{
    Node *root = createNode();
 
    return 0;
}