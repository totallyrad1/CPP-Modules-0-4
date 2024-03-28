#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if(ac != 4)
	{
		std::cerr << "invalid args" << std::endl;
		return (1);
	}
	std::string infilename = av[1];
	std::string wordlf = av[2];
	std::string newword = av[3];
	std::string line;
	if(infilename.empty() || wordlf.empty())
	{
		std::cerr << "invalid args" << std::endl;
		return (1);
	}
	std::ifstream infile(av[1]);
	if(!infile.is_open())
	{
		std::cerr << "Failed to open in infile" << std::endl;
		return (1);
	}
	std::string fullfile;
	while (getline(infile, line)) {
		if(!infile.eof())
			fullfile += line + '\n';
		else
			fullfile += line;
    }
	std::string::size_type index = 0;
	while((index = fullfile.find(wordlf, index)) != std::string::npos)
	{
		fullfile.erase(index, wordlf.length());
		fullfile.insert(index, newword);
		index += wordlf.length();
	}
	std::string newfilename = infilename + ".replace";
	std::ofstream outfile;
	outfile.open(newfilename);
	if(!outfile.is_open())
	{
		std::cerr << "Failed to open in outfile" << std::endl;
		infile.close();
		return (1);
	}
	outfile << fullfile;
	outfile.close();
	infile.close();
}