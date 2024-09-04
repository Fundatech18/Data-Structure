#include<stdio.h>
#define MAX 5

void insert(int queue[], int *front, int *rear, int element) {
  if (*rear == MAX - 1) {
    printf("Queue is Full");
  } else {
    *rear += 1;
    queue[*rear] = element;
    if (*front == -1) {
      *front = 0;
    }
  }
}

void delete (int queue[], int *front, int *rear) {
  if (*front == -1) {
    printf("Queue is Empty");
  } else {
    queue[*front] = 0;
    if (*front == *rear) {
      *front = *rear = -1;
    } else {
      *front += 1;
    }
  }
}

void modify(int queue[], int *front, int *rear, int index, int element) {
    if (*front == -1) {
    printf("Queue is Empty");
  }else{
      

  if (index <= *rear && index >= *front) {
    queue[index] = element;
  } else {
    printf("Enter Valid Index");
  }
  }
}

void display(int queue[], int *front, int *rear) {
  int i;
  if (*front == -1) {
    printf("Queue is Empty");
  } else {
    for (i = 0; i <= *rear; i++) {
      printf("%d   ", queue[i]);
    }
  }
}


void main(){
    int queue1[MAX],queue2[MAX];
    int r1 = -1,f1 = -1;
    int r2 = -1,f2 = -1;
    int *rear1 = &r1,*front1=&f1;
    int *rear2 = &r2,*front2 =&f2;
    int choice,element,newElement,index;
    
    

    while(1){
         printf("\n1. insert to Queue 1\n");
        printf("2. insert to Queue 2\n");
        printf("3. Delete from Queue 1\n");
        printf("4. Delete from Queue 2\n");
        printf("5. Modify Queue 1\n");
        printf("6. Modify Queue 2\n");
        printf("7. Display Queue 1\n");
        printf("8. Display Queue 2\n");
         printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("Enter the Element : ");
            scanf("%d", &element);
            insert(queue1, front1, rear1, element);
            break;
            
            case 2:
            printf("Enter the Element : ");
            scanf("%d", &element);
            insert(queue2, front2, rear2, element);
            break;
            
            case 3:
            delete (queue1, front1, rear1);
            break;
            
            case 4:
            delete (queue2, front2, rear2);
            break;
            
            case 5:
              printf("Enter the index : ");
              scanf("%d", &index);
              printf("Enter the New Element : ");
              scanf("%d", &newElement);
              modify(queue1, front1, rear1, index, newElement);
              break;
              
            case 6:
              printf("Enter the index : ");
              scanf("%d", &index);
              printf("Enter the New Element : ");
              scanf("%d", &newElement);
              modify(queue2, front2, rear2, index, newElement);
              break; 
              
             case 7:
              display(queue1, front1, rear1);
              break;
              
             case 8:
              display(queue2, front2, rear2);
              break;
            
        }
    }
}