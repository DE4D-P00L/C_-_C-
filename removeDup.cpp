#include <iostream>
using namespace std;

void Remove_Duplicate(int a[], int &n);
void printArray(int a[], int n);

int main(){
    int arr[] = {2,5,6,6,7,2,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    Remove_Duplicate(arr,size);
    printArray(arr,size);
    return 0;
}

void Remove_Duplicate(int a[], int &n){
    for(int i = 0; i < n-1; i++){
        for (int j = i+1; j < n;j++){
            if(a[j] == a[i]){
                for (int k = j; k < n; k++){
                    a[k] = a[k+1];
                }
                n--;
            }
        }
    }
}

void printArray(int a[], int n){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}
