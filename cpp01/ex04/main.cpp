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
	std::ifstream infile(av[1]);

	if(!infile.is_open())
	{
		std::cerr << "Failed to open in file" << std::endl;
		return (1);
	}
	std::string line;
	std::string fullfile;
	while (getline(infile, line)) {
		fullfile += line + '\n';
    }
	std::cout << fullfile;
	infile.close();
}