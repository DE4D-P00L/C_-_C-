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
    int ch,chIns,val,p;
    choice:
        cout<<"\nCreate Tree\n1.Create Root\n2.Exit\nChoice: ";
        cin>>ch;
        if(ch==1){
            cout<<"Enter Root value :";
            cin>>val;
            tree.insertRoot(val);
        }

        else if(ch==2){
            exit(0);
        }

        else{
            cout<<"Wrong Choice";
            goto choice;
        }
    while(true){
        cout<<"\nBinary Tree\n1.Insert\n2.Delete\n3.Traversals\n4.Exit\nChoice: ";
        cin>>ch;
        switch(ch){
            case 1: cout<<"\nInsert\n1.Insert Left\n2.Insert Right\n3.Back\nChoice: ";
                    cin>>chIns;
                    switch (chIns)
                    {
                    case 1:
                        cout<<"Enter Parent and Element value: ";
                        cin>>p>>val;
                        tree.insertLeft(p,val);
                        break;
                    case 2:
                        cout<<"Enter Parent and Element value: ";
                        cin>>p>>val;
                        tree.insertRight(p,val);
                        break;
                    default:
                        break;
                    }
                    break;

            case 3:  cout<<"\nPreOrder"<<endl;
                     tree.preOrder(tree.root);
                     cout<<"\nInOrder"<<endl;
                     tree.inOrder(tree.root);
                     cout<<"\nPostOrder"<<endl;
                     tree.postOrder(tree.root);
                     cout<<endl;
                     break; 

            case 4: exit(0);

            default: cout<<"\nWrong Choice!\n";
        }
    }
    return 0;
}
