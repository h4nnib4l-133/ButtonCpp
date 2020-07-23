#include "gdexample.h"

using namespace godot;

void GDExample::_register_methods(){
    register_method((char*)"_ready()", &GDExample::_ready);
    register_method((char*)"_on_Button_pressed", &GDExample::_on_Button_pressed);
}

void _init(){}

void _ready(){
    NodePath path = NodePath("Button");
    //node->connect("pressed", this, "_on_Button_pressed");

}


