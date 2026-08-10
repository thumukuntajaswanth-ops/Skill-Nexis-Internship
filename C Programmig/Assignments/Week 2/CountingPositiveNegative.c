#include<stdio.h>
int main(){
    int n, i, positiveCount = 0, negativeCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        if(arr[i] > 0){
            positiveCount++;
        } else if(arr[i] < 0){
            negativeCount++;
        }
    }
    printf("Number of positive elements: %d\n", positiveCount);
    printf("Number of negative elements: %d\n", negativeCount);
    return 0;
}