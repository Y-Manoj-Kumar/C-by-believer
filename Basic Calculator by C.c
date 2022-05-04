 
#include <stdio.h>

int main()
{
    int num1,num2,answer,option;

    while(1)
    {
            
        printf("\nChoose Option 1)+ 2)- 3)* 4)/ 5)Exit\n");
        scanf("%d",&option);
        
        if(option==5)
        {
           printf("Thanks for using Calculator......"); 
           break;
        }
        
        
        printf("Enter num1 value ");
        scanf("%d",&num1);
        printf("Enter num2 value ");
        scanf("%d",&num2);
    
        switch(option)
        {
            case 1:
            answer=num1+num2;
            printf("\nAddition of %d and %d is: %d\n",num1,num2,answer);
            break;
            
            case 2:
            answer=num1-num2;
            printf("\nSubtraction  of %d and %d is: %d\n",num1,num2,answer);
            break;
            
            case 3:
            answer=num1*num2;
            printf("\nMultiplication of %d and %d is: %d\n",num1,num2,answer);
            break;
            
            case 4:
            answer=num1/num2;
            printf("\nDivision of %d and %d is: %d\n",num1,num2,answer);
            break;
            
            default:
            printf("Please select an operator");
            
        }
    }

    

    return 0;
}


