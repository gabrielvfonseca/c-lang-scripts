//
// Created by Gabriel Fonseca on 4/10/2023.
//

#include <stdio.h>
#include <locale.h>

struct structure {
  float price;
  float dep;
  int hours;
  char name[45];
};

int main() {
    struct structure record = {};

    setlocale(LC_ALL, "en-US.UTF-8");

    printf("Enter name, hours, dependencies nº and price: "); 
    scanf("%s %d %f %f", record.name, record.hours, record.dep, record.price); 

    printf("Name: %s\Dependencies cost: %d\n", record.name, (
        (record.price*0.45) + (record.price*0.28)
    ));

    return 0;
}
