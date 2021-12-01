#include <iostream>

using namespace std;
int LinearSearch(int a[], int n, int x);

int main(){
    int arr[20],n,val,index;
    cout<<"Enter Size of Array : ";
    cin>>n;

    cout<<"Enter Elements : "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Enter value you want to search :";
    cin>>val;

    index = LinearSearch(arr,n,val);
    if(index == -1){
        cout<<val<<" not found!";
    }
    else{
        cout<<val<<" found at index "<<index;
    }
    return 0;
}

int LinearSearch(int a[], int n, int x){
    for(int i = 0; i < n; i++){
        if(a[i]== x){
            return i;
        }
    }
    return -1;
}