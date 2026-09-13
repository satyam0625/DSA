#include <stdio.h>
int bs(int arr[],int n,int key){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] == key )
        return mid;

        if (arr[mid]<key)
        low = mid+1;
        else
        high = low-1;
    }
}
int main(){
    int arr[]= {10,20,34,44,55,66};
    int key = 66;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = bs(arr,n,key);
    printf("%d",result); 

}