#pragma once

#include <iostream>
#include <fstream>

#include "Entity.hpp"

class CustomParser
{
    private :
        std::string source;
        std::string temp_data;
        std::vector<Entity> entity;
    
    public:
        std::string get(std::string match_type, std::string match_value, std::string find_type);
        void set(std::string match_type, std::string match_value, std::string find_type, std::string new_value);

        void setSource(std::string source);
        std::string getSource();

        void load();
        void update();
};