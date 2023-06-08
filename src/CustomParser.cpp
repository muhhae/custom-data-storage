#include "include/CustomParser.hpp"

std::string CustomParser::get(std::string match_type, std::string match_value, std::string find_type)
{
    for (auto& et : entity)
    {
        // std::cout<<"match_type : "<<et.get(match_type)<<" value : "<<match_value<<std::endl;
        if (et.get(match_type) == match_value) return et.get(find_type);
    }
}
void CustomParser::set(std::string match_type, std::string match_value, std::string find_type, std::string new_value)
{
    for (auto& et : entity)
    {
        if (et.get(match_type) == match_value) et.set(find_type, new_value);
    }
}

void CustomParser::setSource(std::string source)
{
    this->source = source;
}
std::string CustomParser::getSource()
{
    return source;
}

void CustomParser::load()
{
    std::ifstream data_stream(source);
    std::string str_tmp;

    Entity et;

    while (std::getline(data_stream, str_tmp))
    {
        // std::cout<<"line : "<<str_tmp<<std::endl;
        if (str_tmp == "@@@")
        {
            // std::cout<<"end"<<std::endl;
            entity.push_back(et);
            et = Entity();
            continue;
        }

        std::string type;
        std::string value;

        bool dtvl = false;

        for (auto c : str_tmp)
        {
            if (c == '=') 
            {
                dtvl = true;
                continue;
            }
            if (!dtvl) type += c;
            else value += c;
        }

        et.add(type, value);   
    }
}
void CustomParser::update()
{

}