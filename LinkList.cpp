#include <iostream>
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
        Node* tail;
        Node* temp2;
        Node* prev;
        Linklist(){
            head = NULL;
        }

        void insert(int val){
            Node* new_node = new Node;
            new_node->data = val;
            new_node->next = NULL;
            if(head == NULL){
                head = new_node;
                cout<<"Head Inserted\n\n";
            }
            else{
                tail->next = new_node;
                cout<<"Node Inserted\n\n"; 
            }
            tail = new_node;
        }

        void remove(int val){                       
            Node* it = head; 
            bool flag = false;  


            if(head != NULL){
                if(head->data == val){
                    head = head->next;
                    cout<<"Head Removed\n\n";
                }     
                else{      
                    while(it !=NULL){
                        if(it->data == val){
                            if(it->next == NULL){
                                prev->next = NULL;
                                tail = prev;
                                flag = true;
                                break;
                            }
                            prev->next = it->next;
                            // delete it;
                            flag = true;
                            cout<<"Element removed\n\n";
                            break;
                        }
                        prev = it;
                        it = it->next; 
                    } 
                    if(!flag){
                        cout<<"\nElement not found!\n";
                    }  
                }
            }
            else{
                cout<<"Underflow!\n\n";
            }
        }

        void print(){                               
            Node* it = head;
            if(head == NULL){ 
               cout<<"List is empty!\n"<<endl; 
            }
            else{
                cout<<"\nNode Elements are : "<<endl;
                while(it->next !=NULL){
                    cout<<it->data<<"->";
                    it = it->next;
                }
                cout<<it->data<<"\n\n";
            }
        }

        bool search(int val){
            Node* it = head; 
            bool flag = false;  
            while(it !=NULL){
                if(it->data == val){
                    flag = true;
                    return flag;
                }
                it = it->next; 
            }
            return flag;
        }
};

int main(){
    Linklist list;
    int ch,x;
    cout<<"Link List \n1. Insert\n2. Delete\n3. Print\n4. Search\n5. Exitn";
    while (true){
        cout<<"Enter Choice : ";
        cin>>ch;
        switch (ch){
        case 1:
            cout<<"Insert : ";
            cin>>x;
            list.insert(x);
            break;
        case 2:
            cout<<"Remove : ";
            cin>>x;
            list.remove(x);
            break;
        case 3:
            list.print();
            break;
        case 4:
            cout<<"Search : ";
            cin>>x;
            if(list.search(x)){
                cout<<"Element found!\n\n";
            }
            else{
                cout<<"Element not found!\n\n";
            }
            break;
        case 5:
            exit(0);
            break;

        
        default:
            cout<<"Enter correct choice!";
            break;
        }
    }
    return 0;
}


