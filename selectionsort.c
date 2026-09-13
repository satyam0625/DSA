#include <stdio.h>
int main(){
    int arr[] = {2,7,1,5,8,2};
    int n = 6;
    for(int i = 1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        
arr[j+1] = key;
    }
    for(int k = 0;k<n;k++){
        printf("%d ",arr[k]);
    }
}