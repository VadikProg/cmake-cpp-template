//
// Example of lib
//

#ifndef PROJECTSTRUCTURE_LIBRARY_H
#define PROJECTSTRUCTURE_LIBRARY_H

#include <vector>
#include <string>

class ProjectLibrary{
public:
    int a;
    std::string str;

    ProjectLibrary(int a, const std::string &str);

    virtual ~ProjectLibrary();

    int getA() const;
    const std::string &getStr() const;
};

#endif //PROJECTSTRUCTURE_LIBRARY_H
