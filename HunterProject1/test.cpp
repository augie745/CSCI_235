#include <iostream>
#include "Dish.hpp"
#include <vector>
int main() {
    //Testing the Default Constructor
    Dish my_dish;
    my_dish.setPrepTime(30);
    my_dish.setPrice(9.99);
    my_dish.display();

    // Testing Paramaterized Constructor
    std::vector<std::string> ingredients;
    ingredients.push_back("Pasta");
    ingredients.push_back("Eggs");
    ingredients.push_back("Pancetta");
    ingredients.push_back("Parmesan");
    ingredients.push_back("Pepper");
    Dish my_dish_1("Pasta Carbonara",ingredients,20, 12.50, Dish::ITALIAN);
    my_dish_1.display();

    return 0;
}
