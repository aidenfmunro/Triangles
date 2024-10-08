#include <iostream>
#include "../include/vectors.hpp"

int main ()
{
    alib::vec3<float> vec(1, 1, 1);

    std::cout << vec.Len() << std::endl;

    return 0;
}


