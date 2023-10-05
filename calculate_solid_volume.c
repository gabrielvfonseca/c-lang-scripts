//
// Created by Gabriel Fonseca on 30/09/2023.
//

#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h>
 
int main(void) { 
    int base, height, area;

    setlocale(LC_ALL, "en-US.UTF-8");

    printf("Enter base and height: "); 
    scanf("%d %d", &base, &height); 

    area = (base*height)/2; 

    printf("volume = %d\n", area); 
    
    system("pause");
    exit(0); 
} 