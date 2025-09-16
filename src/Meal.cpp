#include <iostream>
#include <string>
#include <vector>
#include "Meal.hpp"
using namespace std;

Meal::Meal() : meal_id(0), name(""), price(0.0f) {}

void Meal::print() {
    cout << "Meal ID: " << meal_id << endl;
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Side Items: ";
    for (string item : item_sides) {
        cout << item << " ";
    }
    cout << endl;
}

void Meal::update_price(float new_price) {
    price = new_price;
}

void Meal::add_side_item(string item) {
    item_sides.push_back(item);
}

void Meal::set_meal_id() {
    cout << "Enter meal ID: ";
    cin >> meal_id;
}

void Meal::set_name() {
    cout << "Enter meal name: ";
    cin>>name;
}

void Meal::set_price() {
    cout << "Enter meal price: ";
    cin >> price;
}

void Meal::set_item_sides() {
    cout << "Enter side items (type 'done' to finish):" << endl;
    string item;
    while (true) {
        cout << "Item: ";
        cin >> item ;
        if (item == "done") break;
        item_sides.push_back(item);
    }
}

int Meal::get_meal_id() {
    return meal_id;
}

string Meal::get_name() {
    return name;
}

float Meal::get_price() {
    return price;
}

vector<string> Meal::get_item_sides() {
    return item_sides;
}