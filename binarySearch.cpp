#include <iostream>

using namespace std;
void BinarySearch(int a[], int n, int x);

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
    BinarySearch(arr,n,val);
    return 0;
}

void BinarySearch(int a[], int n, int x){
    int lb=0,ub=n-1,mid;
    while(lb<=ub){
        mid = (lb+ub)/2;
        if(a[mid]==x){
            cout<<x<<" found at index "<<mid;
            return;
        }
        else if(a[mid] < x){
            lb = mid+1;
        }
        else{
            ub = mid-1;
        }
    }
    cout<<x<<" not found!";
}