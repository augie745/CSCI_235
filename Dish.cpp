//
// Created by Frank Bubbico on 9/7/24.
//

#include "Dish.hpp"
#include <vector>

Dish::Dish() {
    name_ = "UNKNOWN";
    ingredients_ = {};
    prep_time_ = 0;
    price_ = 0.0;
    cuisine_type_ = OTHER;
}

Dish::Dish(std::string name, std::vector<std::string> ingredients, int prep_time, double price, CuisineType cuisine_type ) {
    name_ = name;
    ingredients_ = ingredients;
    prep_time_ = prep_time;
    price_ = price;
    cuisine_type_ = cuisine_type;
}

void Dish::setName(const std::string &name) {
    name_ = name;
}

std::string Dish::getName() const {
    return name_;
}

void Dish::setIngredients(std::vector<std::string> &ingredients) {
    ingredients_ = ingredients;
}

std::vector<std::string> Dish::getIngredients() const {
    return ingredients_;
}

void Dish::setPrepTime(const int &prep_time) {
    prep_time_ = prep_time;
}

int Dish::getPrepTime() const {
    return prep_time_;
}
void Dish::setPrice(const double &price) {
    price_ = price;
}

double Dish::getPrice() const {
    return price_;
}

void Dish::setCuisineType(const CuisineType &cuisine_type) {
    cuisine_type_ = cuisine_type;
}

std::string Dish::getCuisineType() const {
    switch (cuisine_type_) {
        case ITALIAN:
            return "ITALIAN";
        case MEXICAN:
            return "MEXICAN";
        case CHINESE:
            return "CHINESE";
        case INDIAN:
            return "INDIAN";
        case AMERICAN:
            return "AMERICAN";
        case FRENCH:
            return "FRENCH";
        default:
            return "OTHER";
    }
}

void Dish::display() const {
    std::cout << "Name: " << name_ << "\n";
    std::cout << "Ingredients: ";
    if (ingredients_.empty() == 0) {
        for(int i = 0; i<ingredients_.size(); i++) {
            if (i == ingredients_.size()-1) {
                std::cout << ingredients_[i] << "\n";
            } else {
                std::cout << ingredients_[i] << ",";
            }
        }
    } else {
        std::cout << "\n";
    }

    std::cout << "Prep Time:" <<prep_time_ << " Minutes \n";
    std::cout << "Price: $" << price_ << "\n";
    std::cout << "Cuisine Type: " << getCuisineType() << "\n" << std::endl;
}



