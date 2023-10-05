//
// Created by Gabriel Fonseca on 30/09/2023.
//

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
 
int main(void) { 
    int radius, height, volume;
    float PI = 3.141592654;

    printf("Enter radius and height: "); 
    scanf("%d %d", &radius, &height); 

    volume = (PI*(pow(radius, 2))*height); 

    printf("volume = %d\n", volume); 
    
    system("pause");
    exit(0); 
} 