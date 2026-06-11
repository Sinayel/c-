#include "fileReplace.hpp"

FileReplace::FileReplace(const std::string &filename, const std::string &s1, const std::string &s2) : _filename(filename), _s1(s1), _s2(s2) {}

std::string FileReplace::replaceOccurrences(const std::string &content) const {
	std::string	result;
	size_t		pos;
	size_t		lastPos;

	lastPos = 0;

	while ((pos = content.find(_s1, lastPos)) != std::string::npos)
	{
		result.append(content, lastPos, pos - lastPos);
		result += _s2;
		lastPos = pos + _s1.length();
	}
    std::cout << "pos = " << pos << std::endl;
	result.append(content, lastPos, content.length() - lastPos);

	return (result);
}

bool FileReplace::processFile() const {
	if (_s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty." << std::endl;
		return (false);
	}

	std::ifstream	input(_filename.c_str());
	if (!input.is_open())
	{
		std::cerr << "Error: cannot open file " << _filename << std::endl;
		return (false);
	}

	std::ofstream	output((_filename + ".replace").c_str());
	if (!output.is_open())
	{
		std::cerr << "Error: cannot create file " << _filename << ".replace" << std::endl;
		return (false);
	}

	std::string	content;
	std::string	str;
	while (std::getline(input, str))
	{
		content += str;
		if (!input.eof())
			content += '\n';
	}

	output << replaceOccurrences(content);

	return (true);
}