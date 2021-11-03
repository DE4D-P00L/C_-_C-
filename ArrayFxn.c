#include<stdio.h>

int largest(int arr[]);
int largest2(int arr[],int x);
int largest3(int arr[],int t);

void main()
{
    int i,l1,l2,l3,List[5];
    printf("Enter Values :\n");
    for (i = 0; i <5; i++){
        scanf("%d",&List[i]);
    }
    l1 = largest(List);
    l2 = largest3(List,l1);
    l3 = largest3(List,l1);
    printf("Largest is %d at index %d",List[l1],l1);
    printf("\nSecond Largest is %d at index %d",List[l2],l2);
    printf("\nSecond Largest is %d at index %d",List[l3],l3);
}

int largest(int arr[]){
    int x = arr[0],i,loc=0;
    for (i = 0; i <5; i++){
        if(x<arr[i]){
            x = arr[i];
            loc = i;
        }
    }
    return loc;
}






int largest2(int arr[],int x){
    int info = arr[x],loc;
    arr[x] = 0;
    loc=largest(arr);
    arr[x] = info;
    return loc;
}

int largest3(int arr[],int t){
    int x,i,y,loc=0;
    x = (t==0)? arr[1]: arr[0];
    for (i = 0; i < 5; i++){
        if(i!=t){
            if(x<=arr[i]){
                x = arr[i];
                loc = i;
            }
        }
    }
    return loc;
}

