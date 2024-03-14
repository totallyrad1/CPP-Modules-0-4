#include <iostream>

using namespace std;

int main(int ac, char **av)
{
	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}
	int i = 1;
	int j;
	while(i < ac)
	{
		j = 0;
		while(av[i][j])
		{
			cout << (unsigned char)toupper(av[i][j]);
			j++;
		} 
		i++;
	}
	cout << endl;
}