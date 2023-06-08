#pragma once

#include <string>
#include "Entity.hpp"

class CustomParser
{
    private :
        std::string source;
        std::string temp_data;
        std::vector<Entity> entity;
    
    public:
        std::string get(std::string match_type, std::string match_value, std::string find_type);
        void set(std::string match_type, std::string match_value, std::string find_type);

        void setSource();
        std::string getSource();

        void load();
        void update();

        
};