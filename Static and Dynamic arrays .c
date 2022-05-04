 
#include <stdio.h>

/*

    For using MALLOC and CALLOC we need to insert a headerfile  "#include<stdlib.h>"

-->#Static Array:Static array is a fixed size, CANNOT be incerase or decreased during RUNTIME.

-->#Dynamic Array:In Dynamic array the array size CAN be incerase or decreased during RUNTIME.
    1.Malloc    (MEMORY ALLOCATION)
    2.Calloc    (CONTIGUOUS ALLOCATION)
    3.Realloc   (RE_ALLOCATION)
-->Apart from above three Malloc and Calloc are very important when compared to REACLLOC
    
-->In Dynamic array we need to create pointer


*/

int main()
{
    
    int q,i;
    printf ("Enter size of array you want to create.\n");
    scanf("%d",&q);
    
// MALLOC : In mallloc the array will be created according to the userdefined 
//          but it doesn't fill the array with "0's" the created array will be EMPTY Ex:{};
//                  Decleration of MALLOC array based on userdefined array size

    int *arr = (int*) calloc(q,sizeof(int));// Need to TYPECAST the malloc bcz malloc returns diff data type
    
    printf("Enter %d values \n",q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Received values\n");
    for(i=0;i<q;i++)
    {
        printf("%d ",arr[i]);
    }

  
//  CALLOC : In calloc the declared array will be initially created with "0's",
//          unitl the array values will be inserted.Ex:{0,0,0,};
//          Decleration of CALLOC array

//   float *arr = (float*) calloc(q,sizeof(float));
    
    
//  REALLOC : After array size declared by the user,incase we need an extra array size we can resize the 
//           array by usinf REALLOC
    
//   arr = realloc(arr,2*sizeof(int)); //RESIZEING of array in by using REALLOC.
 

    return 0;
}



