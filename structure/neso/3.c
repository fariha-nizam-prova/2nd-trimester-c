#include<stdio.h>

struct car
{
    char engine;
    char fule_type[10];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
} ;

int main()
{
    struct car c1 ={"DDis 190 engine" ,"Diesel", 37,5,19.74};
    struct car c2 ={"Kappa","petrol", 22,8,14.5};
    printf("%s",c1.engine);
}

