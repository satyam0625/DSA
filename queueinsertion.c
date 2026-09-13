#include <stdio.h>
#define MAX 5
int main(){
    int Q[MAX];
    int rear = -1;
    int item;
    printf("enter item: ");
    for(int i = 0;i<MAX ;i++){
        scanf("%d",&item);
    }
    if(rear>=MAX-1){
        printf("stackover flow");
        return 0;
    }
    rear = rear + 1;
    Q[rear] = item;
  
    return 0;
}