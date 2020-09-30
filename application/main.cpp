
#include <iostream>
#include <project/library.h>
int main() {

    ProjectLibrary a(4, "example") ;
    std::cout << a.getA() << " " << a.getStr() << "\n";

    return 0;
}
