#include <stdio.h>
#include <stdlib.h>
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
    insert(0, 10);
    insert(1, 20);
    insert(1, 15);
    display();
    printf("\n");
    delete(0);
    display();
    int index = search(15);
    if(index != -1){
        printf("\nElement found at index: %d\n", index);
    } else {
        printf("\nElement not found\n");
    }
    display();
    printf("\n");
    update(0,50);
    display();
    return 0;
}