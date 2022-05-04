 
#include <stdio.h>

        // IN LOOP THERE ARE THREE PHASES 1.INITIALISATION 2.CONDITION 3.INCREMENT  


int main()
{
                                        /* WHILE LOOP........  */
    
    //  int sum=0,i=0;
    //  printf("\n Enter 10 members salary...\n");
    //  while(i<10) // In while loop must have to use increment operator other wise the loop doesn't end...
    //  {
    //      int temp;
    //      scanf("%d",&temp); // don't forgot to add "&" while using SCANF...... 
    //      sum+=temp; // sum=sum+temp
    //      i++;
    //  }
    //  printf("Sum is %d ",sum);
    
    
                                            /* FOR LOOP......  */
    
    
    // int sum=0;
    // for(int i=1;i<5;i++)
    // {
    //     int inputVal;
    //     printf("Enter subject %d marks:",i);
    //     scanf("%d",&inputVal);
    //     sum = sum+inputVal;
    // }
    // printf("\nSum of 4 subjects is %d \n",sum);
    // float avg;
    // avg=sum/4;
    // printf("Average of subject marks is %f",avg);
    
    
    

                                            /* DO WHILE LOOP.... */
    
    //Here we created an option which is decide by the user either end the loop or continu the loop....
    
    int inputVal,flag, sum=0;
    do
    {
        printf("Enter subject marks ");
        scanf("%d",&inputVal);
        sum = sum+inputVal;
        printf("Do you want to continue \n0)yes \n1)no \nchoose option ");
        scanf("%d",&flag);
    }
    while(flag==0);
    printf("Sum of entered marks is %d ",sum);

    return 0;
}

        