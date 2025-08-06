#define size 100
int arr[size];
int n = 0;

void insert(int pos, int val){
    int i;
    if(pos < 0 || pos > n){
        printf("Invalid Position!!");
        return;
    }
    if(n >= size){
        printf("Array is Full!!");
        return;
    }
    for(i=n; i>pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    n++;
}

void delete(int pos){
    int i;
    if(pos < 0 || pos >= n){
        printf("Invalid Position!!");
        return;
    }
    for(i = pos; i < n-1; i++){
        arr[i] = arr[i + 1];
    }
    n--;
}

int search(int val){
    int i;
    if(n==0){
        printf("Array is empty");
        return -1;
    }
    for(i = 0; i < n; i++){
        if(arr[i] == val){
            return i; 
        }
    }
    return -1;
}

int display(){
    int i;
    if(n==0){
        printf("Array is empty");
        return -1;
    }else{
        for(i=0; i<n; i++){
            printf("%d ",arr[i]);
        }
    }
}

void update(int pos, int val){
    if(pos<0 || pos>=n){
        printf("Invalid Position");
        return -1;
    }
    arr[pos] = val;
    return 0;
}

int main(){
    printf("Array Operations:\n");
    printf("1. Insert\n 2. Delete\n 3. Search\n 4. Display\n 5. Update\n 6. Exit\n");
    int choice, pos, val;
    while(1){
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter position and value to insert: ");
                scanf("%d %d", &pos, &val);
                insert(pos, val);
                break;
            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                delete(pos);
                break;
            case 3:
                printf("Enter value to search: ");
                scanf("%d", &val);
                pos = search(val);
                if(pos != -1)
                    printf("Value found at position: %d\n", pos);
                else
                    printf("Value not found\n");
                break;
            case 4:
                display();
                printf("\n");
                break;
            case 5:
                printf("Enter position and new value to update: ");
                scanf("%d %d", &pos, &val);
                update(pos, val);
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}