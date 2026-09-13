#include <stdio.h>
int ls(int arr[],int n,int key){
    for(int i = 0;i<n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]= {10,23,33,44,32,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 2;

    int result = ls(arr,n,key);
    if (result != -1 ){
        printf("result found at index %d ", result);
    }else{
        printf("not found");
    }
}