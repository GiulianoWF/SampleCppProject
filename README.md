## Requirements:
* install conan package manager

* install cmake

* install g++ or windows equivalent c++ compiler (clang-> "LLVM pre build binary installer")

* Setup conan compiler
    * Get conan path to profile folder "/path/to/profile/" with
        * conan config home
    * Set compiler variables
        * Windows
            * conan profile update settings.compiler=clang "/path/to/profile/"profiles/default
            * conan profile update settings.compiler.version=11 "/path/to/profile/"profiles/default

* install visual studio code

* visual studio code extensions:
    * C/C++
    * CMake Tools

## Steps to first compilation:
* Download the repository 

* Open the repository's base folder on command line

* In the command line:
    * mkdir build
    * cd build
    * conan install .. --build=missing

* On vscode editor press:
    * F7&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->To compile
    * Choose the compiler on the drop box
    * F5&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;->To run


## To add a library:
Add the name of the library to conanfile.txt, under the tag [required]

ex.: (To add boost)
* Add to conanfile.txt:
    * &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[requires]
    * &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;....
    * &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;boost/1.72.0
* Run "conan istall .." command in the build folder
&nbsp;
* Add to main.cpp:
    * &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\#include <boost/optional.hpp>

You can search for packages on 
https://conan.io/center/