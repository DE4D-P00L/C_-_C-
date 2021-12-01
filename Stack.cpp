#include <iostream>

using namespace std;

class Stack{
    int top,s[6];
    public:
        Stack(){
            top = -1;
        }

        void push(int val){
            if(top<6-1){
                top++;
                s[top] = val;
                cout<<val<<" Pushed\n";
            }
            else{
                cout<<"Overflow!"<<endl;
            }
        }
        void pop(){
            if(top>=0){
                cout<<s[top]<<" Popped\n";
                top--;
            }
            else{
                cout<<"Underflow!"<<endl;
            }
        }
        void display(){
            int it = top;
            cout<<"\nStack Elements :\n";
            while(it>=0){
                cout<<s[it]<<endl;
                it--;
            }
            cout<<endl;
        }
};

int main(){
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.display();
    s1.pop();
    s1.pop();
    s1.display();
    return 0;
}
