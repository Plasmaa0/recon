#include <recon.h>
#include <iostream>

class MyClass {
};

int main() {
    std::cout << std::boolalpha;
    std::cout << recon::type_name<MyClass>() << std::endl;
    return 0;
}