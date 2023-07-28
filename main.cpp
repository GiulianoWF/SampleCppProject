#include <iostream>
#include <boost/thread/thread.hpp>


class MyClass
{
    public:
        MyClass(){}
        void printTest(){std::cout << "test" << std::endl;}
    };

int main(int argc, char* argv[])
{
    std::cout << "Hello world!" << std::endl;
    MyClass a();
}
