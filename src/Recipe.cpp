#include "../include/Recipe.hpp"

Ingredient::Ingredient() {};

Ingredient::Ingredient(string name_, int Amount_, bool Unit_) {
    this->name = name_;
    this->Amount = Amount_;
    this->Unit = Unit_;
}

void Ingredient::Insert(string name_, int Amount_, bool Unit_) {
    name = name_;
    Amount = Amount_;
    Unit = Unit_;
}

Recipe::Recipe() : data(), next(nullptr) {};

PTR_RECIPE Recipe::New_Node(Ingredient data_) {
    PTR_RECIPE temp = new Recipe;
    temp->data = data_;

}
void Recipe::Insert_Head(Ingredient data_, PTR_RECIPE first) {
    PTR_RECIPE temp = new Recipe;
    temp->data = data_;
    temp->next = first;
    first = temp;
}