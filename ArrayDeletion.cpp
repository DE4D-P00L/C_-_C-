#include <iostream>

using namespace std;
void printArray(int a[],int n);
void removeAtIndex(int a[], int &n);

int main(){
    int arr[20],n;
    cout<<"Enter Size of Array : ";
    cin>>n;

    cout<<"Enter Elements : "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    removeAtIndex(arr,n);
    printArray(arr,n);
    return 0;
}

void printArray(int a[],int n){
    cout<<"\nArray Elements :\n";
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
}

void removeAtIndex(int a[], int &n){
    int val,index;
    cout<<"Enter index : ";
    cin>>index;
    if(index > 0 && index < 20){
        val = a[index];
        for(int i = index; i < n; i++){
            a[i] = a[i+1];
        }
        n--;
        cout<<val<<" Removed"<<endl;
    }
    else
    {
        cout<<"Array index out of bounds\n";
    }
}