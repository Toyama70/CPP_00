#include <iostream>

int main(int argc, char **argv) 
{
    char output;
    int i = 1, k = 0;


    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else 
    {
        while (i < argc)
        {
			while (argv[i][k] != 0)
			{
				if (argv[i][k] >= 'a' && argv[i][k] <= 'z')
					output = toupper(argv[i][k]);
				else
					output = argv[i][k];
				std::cout << output;
				k++;
			}
        	k = 0;
			i++;
		}
    }
}
