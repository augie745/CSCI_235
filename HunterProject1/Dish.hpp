//
// Created by Frank Bubbico on 9/7/24.
//

#ifndef DISH_HPP
#define DISH_HPP

#include <vector>
#include <iostream>

class Dish {
    public:
        // Defining Cuisine Type
        enum CuisineType {
        ITALIAN,
        MEXICAN,
        CHINESE,
        INDIAN,
        AMERICAN,
        FRENCH,
        OTHER
        };
    // default constructor
    Dish();
    // paramaterized constructor
    Dish(const std::string name, const std::vector<std::string> ingredients, int prep_time, double price, CuisineType cuisine_type );

    // setName Constructor
    void setName(const std::string &name);
    // getName Constructor
    std::string getName() const;
    // setIngredients Constructor
    void setIngredients (const std::vector<std::string> &ingredients);
    // getIngredients Constructor
    std::vector<std::string> getIngredients() const;
    // setPrepTime Constructor
    void setPrepTime(const int &prep_time);
    // getPrepTime Constructor
    int getPrepTime() const;
    // setPrice Constructor
    void setPrice(const double &price);
    // getPrice Constructor
    double getPrice() const;
    // setCuisineType Constructor
    void setCuisineType(const CuisineType &cuisine_type);
    // getCuisineType Constructor
    std::string getCuisineType() const;
    // display Constructor
    void display() const;


    private:
        std::string name_; // name of a dish
        std::vector<std::string> ingredients_; // Ingredients of a dish
        int prep_time_; // Preperation time of a dish
        double price_; // cost of a given dish
        CuisineType cuisine_type_; // type/style of dish

};



#endif //DISH_HPP
