#include "gdexample.h"

using namespace godot;

void GDExample::_register_methods(){
    register_method("_ready", &GDExample::_ready);
    register_property<GDExample, String>("text", &GDExample::text, "hello");
    register_method("_on_Button_pressed", &GDExample::_on_Button_pressed);
}

void GDExample::_init(){
   GDExample::text = "hello"; 
}

void GDExample::_ready(){    
    get_node("Button") -> connect("pressed", this, "on_Button_pressed");
}

void GDExample::_on_Button_pressed(){
    Godot::print("Hi!");
}


