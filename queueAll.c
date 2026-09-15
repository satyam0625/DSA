#include <stdio.h>
#define max 5

int main() {
    int arr[max];
    int front = 0;
    int rear = -1;
    int choice;
    int item;

    while(1) {

        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {

            if(rear >= max - 1) {
                printf("Queue overflow\n");
            }
            else {
                printf("Enter item: ");
                scanf("%d", &item);

                rear++;
                arr[rear] = item;

                printf("%d inserted\n", item);
            }
        }

        else if(choice == 2) {

            if(front > rear) {
                printf("Queue underflow\n");
            }
            else {
                printf("Deleted element: %d\n", arr[front]);
                front++;
            }
        }

        else if(choice == 3) {

            if(front > rear) {
                printf("Queue is empty\n");
            }
            else {
                printf("Queue: ");

                for(int i = front; i <= rear; i++) {
                    printf("%d ", arr[i]);
                }

                printf("\n");
            }
        }

        else if(choice == 4) {
            printf("Exiting...\n");
            break;
        }

        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}