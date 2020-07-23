#include "ButtonCpp.h"

using namespace godot;

void ButtonCpp::_register_methods(){
    register_method("_on_Button_pressed", &ButtonCpp::_on_Button_pressed);
}

void ButtonCpp::_init(){
}

void ButtonCpp::_on_Button_pressed(){
    Godot::print("Hi!");
}


