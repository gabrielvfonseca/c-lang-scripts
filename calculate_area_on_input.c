//
// Created by Gabriel Fonseca on 30/09/2023.
//

#include <stdio.h>
#include <stdlib.h>

int main () {
    int height, base;
       
    printf("Base: ");
    scanf("%d", &base);

    printf("Height: ");
    scanf("%d", &height);

    int a = (height*base);

    printf("area = %d\n", a);

    system("pause");

    return 0;
}