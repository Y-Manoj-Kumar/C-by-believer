 
#include <stdio.h>


//                        CALL BY VALUE............. refers to COPYING OF VALUE

    // void sum(int a, int b) // the values of x,y is copied to a,b 
    // {
        
    //   printf("Sum of %d + %d is: %d",a,b,a+b);
    // }
    
    // int main()
    // {
     
    //     int x=12,y=12;
    //     sum(x,y);
     
    //     return 0;
    // }


//                      CALL BY REFERENCE.............COPYING THE ADDRESS of VARIABLE

    
    void call_by_reference(int* q) // Pointer is a varibale which stores the address... address 198232 - 23(value)
    {
        *q = 123; // address 198232 - 123(value)    *q represents VALUE of varibale and &q represents ADDRESS of varibale
    }
     
    int main()
    {
        int q = 23; // ex: address 198232 - 23(value)
        printf("\nValue of q before calling function: %d ",q);
        
        call_by_reference(&q);
        printf("\nValue of q after calling function: %d ",q);
    }



