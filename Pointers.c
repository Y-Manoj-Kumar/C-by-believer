
 /*
    POINTERS:
-->POINTER POINTS TO A MEMORY LOCATION.....Pointers concept is completely based on MEMORY LOCATION
-->SYNTAX: int* q; or int *q; you can declare in two ways..

-->The pointer in C language is a variable which stores the address of another variable.
-->Pointer is a special variable that is capable of storing some address.
-->In an example pointer P stores the base address of integer variable i.   Related to am example
-->It can store inital address of any object
-->It points to a memory location where the first byte is stored..


-->Basically pointers are two types 
    1.Types pointer
    2.UnTyped pointer
    
1.Typed Pointer:It is used to points the specific type of data
    ex: int* -------> int data
        float* -------> float data.

2.UnTyped Pointer:It is also called Generic Pointer .Can points to any data.
    ex: void*-------> any data
    
-->In this pointers "&" and "*" plays a major role in Pointer operation
  &(address operator):It returns the addres(memory location) of a particular variable.
  *(pointer operator):It represents the value inside a specific address
  
  
  */
 
 
#include <stdio.h>

int main()
{
    
    // int q = 12;
    
    // int *ptr;
    
    // ptr = &q; //assigning q address  as a value to the ptr 
    
    // /*
    
    // q 1003 12 (variable address value)
    
    // ptr 1002    (variable address ......)
    
    // after ptr pointing to q the q value assigned to ptr
    
    // */
    // printf("\n %d",q);//Printing q value
    // printf("\n %d",&q); //Printing q address
    // printf("\n %d",ptr); //Printing ptr value
    // printf("\n %d",&ptr);//Printing ptr address
    // printf("\n %d",*ptr);//Printing value of ptr where ptr is poiniting to q value
    // printf("\n %d",*(&q));// 
    
    
    int w = 12;
    
    // int e = w;// here we are copying the value
    
    int*  e = &w; // we assigned w address to the variable e 
    
    *e =120;
    
    printf("W value %d",w);
    
    return 0;
}

