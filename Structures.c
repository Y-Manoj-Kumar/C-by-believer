 
#include <stdio.h>

struct Bike // String Decleration
{
    int price;
    char name[20];
    char colour[20];
    
}; // semicolon is mandatory in structs....


int main()
{
 
    struct Bike vehicle = {20000,"Ducati","Red"};
    
    printf("Hii we are from struct Bike: %d ,%s ,%s ",vehicle.price,vehicle.name,vehicle.colour);
    
    return 0;
}

//              .................STRUCTURES with POINTERS.................














