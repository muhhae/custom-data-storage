# Simple Data Storage for C++
# Note : still in progress
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
std::cout<<mahasiswa.get("nama", "Muhammad Da", "jurusan");
```
On that code "nama" is data type, "Muhammad Da" is expected value of it. If there is entity that have "nama" = "Muhammad Da" then it returns the value of "jurusan".

