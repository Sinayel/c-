#include "fileReplace.hpp"

FileReplace::FileReplace(const std::string &filename, const std::string &s1, const std::string &s2)
    : _filename(filename), _s1(s1), _s2(s2) {}

bool FileReplace::processFile() {
    if (_s1.empty()) {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return false;
    }

    std::ifstream inputFile(_filename.c_str());
    if (!inputFile) {
        std::cerr << "Error: Unable to open file '" << _filename << "'" << std::endl;
        return false;
    }

    std::ofstream outputFile((_filename + ".replace").c_str());
    if (!outputFile) {
        std::cerr << "Error: Unable to create output file '" << _filename << ".replace'" << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        outputFile << replaceOccurrences(line) << std::endl;
    }

    std::cout << "Replacement complete. Output written to: " << _filename << ".replace" << std::endl;
    return true;
}

std::string FileReplace::replaceOccurrences(const std::string &line) {
    std::string result;
    size_t pos = 0, lastPos = 0;
    
    while ((pos = line.find(_s1, lastPos)) != std::string::npos) {
        result += line.substr(lastPos, pos - lastPos) + _s2;
        lastPos = pos + _s1.length();
    }
    
    result += line.substr(lastPos);
    return result;
}
