#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

class BSTree
{
    public:
        Node* root;
        Node* it = root;
        BSTree(){
            root = NULL;
        }

        void insert(int val){
            Node* new_node = new Node;
            new_node->data = val;
            new_node->left = NULL;
            new_node->right = NULL;
            if(root==NULL){
                root = new_node;
                cout<<"HELLO Root :"<<new_node->data<<endl;
            }
            else{
                insertNode(root, new_node, val);
            }
        }

        void insertNode(Node* n,Node* nod, int val){
            if(n==NULL){
                n = nod;
                cout<<"\nHELLO Middle :"<<nod->data<<endl;
                return;
            }
            else if(n->data>val){
                cout<<"\nHELLO Left :"<<nod->data<<endl;
                insertNode(n->left, nod, val);
            }
            else if(n->data<val){
                cout<<"\nHELLO Right :"<<nod->data<<endl;
                insertNode(n->right, nod, val);
            }
        }

        void insertLeft(int parent, int val){
            Node* new_node = new Node;
            new_node->data = val;
            new_node->left = NULL;
            new_node->right = NULL;
            Node* par = search(root,parent);
            if(par!=NULL){
                par->left = new_node;
            }
            else{
                cout<<"\nParent not found"<<endl;
            }
        }

        void insertRight(int parent, int val){
            Node* new_node = new Node;
            new_node->data = val;
            new_node->left = NULL;
            new_node->right = NULL;
            Node* par = search(root,parent);
            if(par!=NULL){
                par->right = new_node;
            }
            else{
                cout<<"\nParent not found"<<endl;
            }
        }


        void insertRoot(int val){
            Node* new_node = new Node;
            new_node->data = val;
            new_node->left = NULL;
            new_node->right = NULL;
            root = new_node;
        }


        Node* search(Node* n,int val){
            if(n->data>val){
                return search(n->left,val);
            }
            else if(n->data<val){
                return search(n->right,val);
            }
            return n;
        }

        void preOrder(Node* n){
            if(n==NULL){
                return;
            }
            cout<<n->data<<" ";
            preOrder(n->left);
            preOrder(n->right);
        }

        void postOrder(Node* n){
            if(n==NULL){
                return;
            }
            postOrder(n->left);
            postOrder(n->right);
            cout<<n->data<<" ";
        }

        void inOrder(Node* n){
            if(n==NULL){
                return;
            }
            inOrder(n->left);
            cout<<n->data<<" ";
            inOrder(n->right);
        }
};

int main(){
    BSTree tree;
    // tree.insert(5);
    // tree.insert(3);
    // cout<<tree.root->left->data<<endl;
    // tree.insert(7);
    // tree.insert(1);
    // tree.insert(4);
    // tree.insert(6);
    // tree.insert(8);
    tree.insertRoot(5);
    tree.insertLeft(5,3);
    tree.insertRight(5,7);
    tree.insertLeft(3,1);
    tree.insertRight(3,4);
    tree.insertLeft(7,6);
    tree.insertRight(7,8);
    cout<<"\n\nPreOrder"<<endl;
    tree.preOrder(tree.root);
    cout<<"\n\nInOrder"<<endl;
    tree.inOrder(tree.root);
    cout<<"\n\nPostOrder"<<endl;
    tree.postOrder(tree.root);
    return 0;
}
