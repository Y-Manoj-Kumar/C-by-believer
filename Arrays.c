 
#include <stdio.h>

int main()
{
    // int marks[12]={21,32,43,23,12,12,23,43,3,211,2,3};//Array intialisation
    // int marks[13];//array decleration
    
    // Taking input values by using ARRAYS and printing by using FOR loop
    
    // int rollNumbers[4];
    // int sum=0;
    
    // printf("\nEnter 4 student rollNumbers..\n");
    // for(int i=0;i<4;i++)
    // {
    //     scanf("%d",&rollNumbers[i]); // Here we are taking input vlaues 
    // }
    
    // printf("\nReceived numbers  ");
    // for(int i=0;i<4;i++)
    // {
    //     printf("%d ",rollNumbers[i]);
    // }
    
    
    // for(int i=0;i<4;i++)
    // {
    //     sum = sum +rollNumbers[i];
    // }
    
    // printf("\nSum of entered roll numbers %d ",sum);
    
    
    //..............................*******************************....................................
    
    /*
    
    Taking student fee as input and printing max fee among the given input
    
    */
    
    
    // int studentFees[5],i;
    // printf("Enter 5 studentFees..\n");
    // for(i=0;i<5;i++)
    // {
    //     scanf("%d",&studentFees[i]);
    // }
    
    // printf("Input student fees..\n");
    // for(i=0;i<5;i++)
    // {
    //     printf("%d ",studentFees[i]);
    // }
    
    // int max_fee=studentFees[0];
    // for(i=1;i<5;i++)
    // {
                
    //     if(max_fee<studentFees[i])
    //     {
    //         max_fee=studentFees[i];
    //     }
    
    // }

    // printf("\nMax fee among the input fees is: %d ",max_fee);
    
    
    
                        /*..............................NESTED LOOPS............................*/
    
    
    //Through nested loops we can print patterns in different ways.....
    
    
    for(int i=0;i<2;i++) // acts a stack as rows
    {
        for(int j=0;j<7;j++) // acts as rows
        {
            for(int k=0;k<5;k++) // acts as columns
            {
                printf("# ");
            }
            
            printf("\n ");
        }
        printf("\n ");
    }
    
    
    return 0;
}


