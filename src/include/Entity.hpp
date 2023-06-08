#pragma once

#include <iostream>
#include <vector>
#include <fstream>

class Entity
{
    private:
        struct data
        {
            std::string type;
            std::string value;
        };
        std::vector<std::string> data;

    public:
        void add(std::string type, std::string value);
        
        void set(std::string type, std::string value);
        std::string get(std::string type);

        void AppendToString(std::string& str);
};