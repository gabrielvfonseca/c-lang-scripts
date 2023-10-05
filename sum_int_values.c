//
// Created by Gabriel Fonseca on 30/09/2023.
//

#include <stdio.h> 
#include <stdlib.h> 
 
int main(void) { 
    int x, y, z; 

    printf("Insert two integer values: "); 
    scanf("%d %d", &x, &y); 

    z = x + y; 

    printf("%d + %d = %d\n", x, y, z); 
    
    system("pause");
    exit(0); 
} 