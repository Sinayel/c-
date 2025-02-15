#ifndef FILEREPLACE_HPP
#define FILEREPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class FileReplace {
public:
    FileReplace(const std::string &filename, const std::string &s1, const std::string &s2);
    bool processFile();

private:
    std::string _filename;
    std::string _s1;
    std::string _s2;

    std::string replaceOccurrences(const std::string &line);
};

#endif
