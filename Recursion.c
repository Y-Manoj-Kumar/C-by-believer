 
#include <stdio.h>

/*

-->RECURSION: Calling a function within the same function
-->To use RECURSION the FUNCTION must be PARAMETARISED
-->BASE CONDITION is important
*/

int recursion(int q)
{
     if(q>10) // BASE CONDITION
     {
         return 0;
     }
     else
     {
         return q+recursion(q+1);
     }
     
/*
                    ...........TOP TO BOTTOM UPPROACH...............

2+recursion(2+1) = 2+recursion(3) here recursion(3) called again 

        q value get changed step by step...

3+recursion(4)                  
4+recursion(5)
.
.
.
.10+recursion(11) recursion(11) values equals to 0 due to if condition..


                    ................BOTTOM TO TOP UPPROACH..........


10+0 =10
9+10 =19
8+19 =27
.
.
.
54 is the answer.....
*/
 
}

int main()
{
    int sum_of_recursion = recursion(2);
    printf("Sum of recursion is %d: ",sum_of_recursion);

    return 0;
}







