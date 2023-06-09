#include "include/CustomParser.hpp"

using namespace dt;

int main()
{
    CustomParser mahasiswa;
    mahasiswa.setSource("data/mahasiswa");
    mahasiswa.load();
    mahasiswa.find("nama", "Muhammad Haekal").set("jurusan", "Teknik Perlelean");
    mahasiswa.update();

    Entity newEt;
    newEt.add("nama", "User8976");
    newEt.add("jenis", "Manusia");

    mahasiswa.add(newEt);
    mahasiswa.update();

    mahasiswa.find("nama", "Muhammad Da").remove("jurusan");
    mahasiswa.update();
}