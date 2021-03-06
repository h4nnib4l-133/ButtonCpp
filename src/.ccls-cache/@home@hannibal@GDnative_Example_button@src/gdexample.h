#pragma once

#include "../godot-cpp/include/core/Godot.hpp"
#include "../godot-cpp/include/gen/Panel.hpp"
#include "../godot-cpp/include/gen/Label.hpp"
#include "../godot-cpp/include/gen/Button.hpp"

namespace godot {
    class ButtonCpp : public Panel{

        GODOT_CLASS(ButtonCpp, Panel)
        
        private:
            godot::String text; 

        public:
            ButtonCpp();
            ~ButtonCpp();
            static void _register_methods();
            void _init();
            void _ready();
            void _on_Button_pressed();
    
    };

}


