##Requirements:
* install conan package manager

* install cmake

* install g++

* install visual studio code

* vscode extensions:
    * C/C++
    * CMake Tools

##Steps to first compilation:

In the command line:
* \$cd build
* \$conan install ..

On vscode editor press:
* F7&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->To compile
* Choose the compiler on the drop box
* F5&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->To run


##To add a library:
Add the name of the library to conanfile.txt, under the tag [required]

ex.: (To add boost)
* Add to conanfile.txt:
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[requires]
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;....
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;boost/1.72.0
&nbsp;
* Add to main.cpp:
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\#include <boost/optional.hpp>

You can search for packages on 
https://conan.io/center/