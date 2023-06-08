#include "include/CustomParser.hpp"

int main()
{
    CustomParser mahasiswa;
    mahasiswa.setSource("data/mahasiswa");
    mahasiswa.load();
    mahasiswa.set("nama", "Muhammad Haekal", "nrp", "666");
    mahasiswa.update();

    Entity newEt;
    newEt.add("nama", "Muhammad Sumbul");
    newEt.add("jenis", "Manusia");

    mahasiswa.add(newEt);
    mahasiswa.update();
}