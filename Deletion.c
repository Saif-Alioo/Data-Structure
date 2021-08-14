#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);

    }

}
void indDeletion(int arr[],int size ,int index){
       //Deletion code 
       for(int i=index ; i<size-1 ;i++){
           arr[i]=arr[i+1];
       }
       
}

int main(){
    int arr[100]={1,3,5,34,39};
    int size=5 ,index=3;
    printf("\n");
    printf("Given Array look like:");
    display(arr,size); 
    
    indDeletion(arr,size,  index);
      size-=1;
      printf("\n");
      printf("After Deleted Array:");
       display(arr,size); 
    

    return 0;

}