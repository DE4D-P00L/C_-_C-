#include <iostream>

using namespace std;
void printArray(int a[],int n);
void BubbleSort(int a[], int &n);

int main(){
    int arr[20],n;
    cout<<"Enter Size of Array : ";
    cin>>n;

    cout<<"Enter Elements : "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    BubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}

void printArray(int a[],int n){
    cout<<"\nArray after Sorting :\n";
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
}

void BubbleSort(int a[], int &n){
    int temp;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}