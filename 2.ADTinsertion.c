#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

}
int indInsertation(int arr[],int size ,int element ,int capacity,int index){
       if(size>=capacity){
           return -1; //insertation unscufull
       }
       for(int i=size-1 ; i>=index;i--){
           arr[i+1]=arr[i];
       }
       arr[index]=element;
       return 1;
}

int main(){
    int arr[100]={1,3,5,34,39};
    int size=5 ,index=3, element=45;
    printf("\n");
    printf("Without insertation array look like:");
    display(arr,size); 
    
    indInsertation(arr,size, element, 100, index);
      size+=1;
      printf("\n");
      printf("After insertation array:");
       display(arr,size); 
    

    return 0;

}