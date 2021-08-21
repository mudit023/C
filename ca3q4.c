#include<stdio.h>
int main()
{
    int *p; //declaration of the pointer p
    int a;
    p = &a; //initialization of pointer p, p contains the address of a
    *p = 0; // here we use dereferencing operator, so now p will reference the value assigned to it to a
    printf(" a = %d \n", a); // as p has the address of a and so a will also contain 0 because p is dereferenced to a using 
    // * dereferencing operator 
    printf(" *p = %d \n", *p); // in this aslo dereferencing operator is used hence when we print *p we are printing the value stored in a.
    *p += 5; // this will increase the value stored in a by 5 as here also dereferencing operator is used 
    printf(" a = %d \n", a); // in a the value is updated 0+5= 5
    printf(" *p = %d \n", *p); // this will print the updated value stored in a i.e, 5
    (*p)++; // this will increase the value in a by 1 because here we use dereferencing operator to link p to a
    printf(" a= %d \n", a); // now as the value of a is incremented by 1 a=6
    printf(" *p = %d \n", *p); // here also indirection operator is used so it will print the value stored in a i.e., 6

}
