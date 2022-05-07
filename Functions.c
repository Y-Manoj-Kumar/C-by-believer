 
 //                                 .....................FUNCTIONS.........................
 
/*
--> There are mainly four types of FUNCTIONS
1.  
    void type1 ()
    {
       code           NO return type without parameters
    }

2.  
    VOid type2 (int a, int b)
    {
        code            No return type with parameters
    }

3. 
    <datatype> type3()
    {
        code            Return type without parameters
        
        return <datatype>;
    }
     
4.
    <datatype> type4(int q, int w)
    {
        code             Return type with parameters
        
        return <datatype>;
    }
*/ 

#include <stdio.h>
#include <stdlib.h>

                       // Sum of array.............. using FUNCTIONS.....................

int sum_of_array(int *sub_marks,int size)
{
    int i,sum=0;
  
    for(i=0;i<size;i++) // here size = n
    {
        sum=sum+marks[i];
    }
    

    return sum;
}

int main()
{
    
    int n,i;
    printf("Enter array size: \n");
    scanf("%d",&n);
    
    int* marks =(int*) calloc(n,sizeof(int));
    
    printf("Enter %d subject marks \n",n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d",&marks[i]);
    }
    
    printf("Received values \n");
    for(i=0; i<n ;i++)
    {
        printf("%d ",marks[i]);
    }
    
    // Calling a function.......
    
    int result = sum_of_array(marks,n);
    printf("\nSum of marks entered: %d ",result);
    

    return 0;
}


