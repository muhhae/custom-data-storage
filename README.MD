# Simple Data Storage for C++
# Note : still in progress (basic function is working)
<br>
format of the data :

```
dataType=its value
dataType=its value
dataType=its value
@@@ (to separate each object)
```

You can see the example on the folder data.

To use this as simple as creating CustomParser object.
Set source for it. Call function load. And you can use it as you like with function get and set. 

```
CustomParser mahasiswa;
mahasiswa.setSource("data/mahasiswa");
mahasiswa.load();
std::cout<<mahasiswa.find("nama", "Muhammad Da").get("jurusan);
```
In this code "nama" is data type, "Muhammad Da" is expected value of it. If there is entity that have "nama" = "Muhammad Da" then it returns the value of "jurusan".

```
mahasiswa.find("nama", "Muhammad Haekal").set("jurusan", "Teknik Perlelean");
mahasiswa.update();
```
in this code it get will return Entity that has "name" = "Muhammad Haekal", with "nrp" = "666". Then using set function in entity class it will change it's "jurusan" with "Teknik Perlelean"
```
Entity newEt;
newEt.add("nama", "Muhammad Sumbul");
newEt.add("jenis", "Manusia");
```
function add() adding new data to entity.

```
mahasiswa.add(newEt);
mahasiswa.update();
```
Adding entity to CustomDataParser.

Function update() will update the file

