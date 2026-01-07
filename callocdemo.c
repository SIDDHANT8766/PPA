#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length = 0;
    int *Arr = NULL;
    
    printf("Enter the number of elements\n");
    scanf("%d",&length);
        // Allocate the memory 
    Arr=(int*)calloc(length , sizeof(int));

    if(Arr==NULL)
    {
        printf("Unable to allocate memory\n");

    }
    else 
    {
      printf("Memory gets allocated succesfully\n");
    }
     
    // Use the memory

    // free the memory

    free(Arr);
    


    return 0;
}