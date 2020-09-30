
#include <string>
#include <project/library.h>

ProjectLibrary::ProjectLibrary(int a, const std::string &str) : a(a), str(str) {
    this->a = a;
    this->str = str;
}

ProjectLibrary::~ProjectLibrary() {

}

int ProjectLibrary::getA() const {
    return a;
}

const std::string &ProjectLibrary::getStr() const {
    return str;
}

