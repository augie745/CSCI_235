#include <iostream>
#include "Dish.hpp"
int main() {
    //Testing the Default Constructor
    Dish my_dish;
    my_dish.setPrepTime(30);
    my_dish.setPrice(9.99);
    my_dish.display();

    // Testing Paramaterized Constructor
    Dish my_dish_1("Pasta Carbonara",{"Pasta", "Eggs", "Pancetta", "Parmesan", "Pepper"},20, 12.50, Dish::ITALIAN);
    my_dish_1.display();

    return 0;
}
