#include "include/Entity.hpp"

void Entity::add(std::string type, std::string value)
{
    dataStruct dt = {type, value}; 
    data.push_back(dt);
}
        
void Entity::set(std::string type, std::string value)
{
    for (auto& dt : data)
    {
        if (dt.type == "type")
        {
            dt.value = value;
            return;
        }
    }
}

std::string Entity::get(std::string type)
{
    for (auto& dt : data)
    {
        if (dt.type == "type")
        {
            return dt.value;
        }
    }
}

void Entity::AppendToString(std::string& str)
{
    
}