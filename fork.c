#include <stdio.h> 
#include <unistd.h> 
int main(){   
    fork();
    fork();   
    printf("This is first program\n"); 
    return 0; 
} 
