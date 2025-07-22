int main(){
    int arr[5] = {1,2,3,4,5};
    int i;
    arr[0] = 99;
    for(i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}