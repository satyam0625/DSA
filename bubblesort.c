#include <stdio.h>
int main(){
    int temp;
    int n;
    int arr[] = {2,3,4,12,1,24};
    n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]= temp;
            }
        }
    }
    for(int k =0; k<n; k++){
        printf("%d ",arr[k]);
    }
}