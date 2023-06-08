#include "include/CustomParser.hpp"

int main()
{
    CustomParser mahasiswa;
    mahasiswa.setSource("data/mahasiswa");
    mahasiswa.load();
    std::cout<<"tes\n\n\n"<<std::endl;
    std::cout<<mahasiswa.get("nama", "Muhammad Da", "jurusan");
}