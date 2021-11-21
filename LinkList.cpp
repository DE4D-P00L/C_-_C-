#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Node{
    int data;
    Node* next;
};

class Linklist
{
    public:
        Node* head;
        Node* temp;
        Linklist(){
            head = NULL;
        }

        void insert(int val){
            Node* new_node = new Node();
            new_node->data = val;
            new_node->next = NULL;
            if(head == NULL){
                head = new_node;
                cout<<"Head Inserted\n\n";
            }
            else{
                temp->next = new_node;
                cout<<"Node Inserted\n\n"; 
            }
            temp = new_node;
        }

        void remove(int val){                       //Head can't be removed
            Node* it = head;               
            while(it->next !=NULL){
                if(it->data == val){
                    temp->next = it->next;
                    cout<<"\nElement removed\n";
                }
                temp = it;
                it = it->next;
            }

        }

        void print(){                               //Condition for empty Linklist
            Node* it = head;
            cout<<"\nNode Elements are : "<<endl;
            while(it->next !=NULL){
                cout<<it->data<<"->";
                it = it->next;
            }
            cout<<it->data<<"\n\n";
        }
};

int main(){
    Linklist list;
    int ch,x;

    cout<<"Link List \n1. Insert\n2. Delete\n3. Print\n4. Exit\n";
    while (true)
    {
        cout<<"Enter Choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"\nEnter the element : ";
            cin>>x;
            list.insert(x);
            break;
        case 2:
            cout<<"\nEnter the element : ";
            cin>>x;
            list.remove(x);
            break;
        case 3:
            list.print();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout<<"Enter correct choice!";
            break;
        }
    }
    return 0;
}


