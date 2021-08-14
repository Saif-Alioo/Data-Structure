#include<stdio.h>
#include<stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;    //point to the first address of array. pointer variable declration.
};

void createArray(struct myArray *a,int tsize,int usize){   //*a is structure point .which refers to marks. (*) value at oprator .
//  (*a).total_size=tsize;
//  (*a).used_size=usize;
//  (*a).ptr=(int *) malloc(tsize*sizeof(int));   //ptr=point to the first address of given array. This line resered the memory with size= 100(elements)*Size of int.

 a->total_size=tsize;
 a->used_size=usize;
 a->ptr=(int *) malloc(tsize*sizeof(int));  //Request for memory in heap.

};
void show(struct myArray *a)
{
    for(int i=0 ; i<a->used_size;i++){

        printf("%d\n",(a->ptr)[i]);   //Print Array
    
    }
    
};
void setVal(struct myArray *a)
{
    int n;
    for(int i=0 ; i<a->used_size;i++){
        printf("Enter the element %d ",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
    
};

int main (){
      struct myArray marks; //complier create a structure and store the variavles which are in struct myArray.
      createArray(&marks , 10 , 2);   //&mark coze pointer refers to address(&) . total size of array is 10 and use array is 2. 
      printf("We are running Set value:");
      setVal(&marks);
      printf("We are running Show value:");
      show(&marks);

      return 0;
      
    
}