#include <iostream>

using namespace std;
void printArray(int a[],int n);
void insertAtIndex(int a[], int &n);

int main(){
    int arr[20],n;
    cout<<"Enter Size of Array : ";
    cin>>n;

    cout<<"Enter Elements : "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    insertAtIndex(arr,n);
    printArray(arr,n);
    return 0;
}

void printArray(int a[],int n){
    cout<<"\nArray Elements :\n";
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
}

void insertAtIndex(int a[], int &n){
    int val,index;
    cout<<"Enter value and index : ";
    cin>>val>>index;
    if(index > 0 && index < 20){
        for(int i = n; i >=index; i--){
            a[i+1] = a[i];
        }
        a[index] = val;
        n++;
        cout<<val<<" Inserted"<<endl; 
    }
    else{
        cout<<"ERROR: 0 < Index < "<<n;
        exit(0);
    }
}