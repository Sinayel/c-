#ifndef FILEREPLACE_HPP
# define FILEREPLACE_HPP

# include <fstream>
# include <iostream>
# include <string>

class FileReplace
{
	private:
		std::string	_filename;
		std::string	_s1;
		std::string	_s2;

		std::string	replaceOccurrences(const std::string &content) const;

	public:
		FileReplace(const std::string &filename, const std::string &s1, const std::string &s2);

		bool	processFile() const;
};

#endif