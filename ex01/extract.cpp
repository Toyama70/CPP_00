#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>
#include "phonebook.hpp"

int ft_digits(std::string input, int m)
{
	int k = 1;

	while (input[m] != '\0')
	{
		k = isdigit(input[m]);
		if (k == 0)
			return 0;	
		m++;
	}

	return 1;
}

int	ft_extract()
{
	std::string input = "1024";
	int i = 1024;
	int m;
	while (input[0] != '\0')
	{
		m = 0;
		std::cout << "Enter the user index to display : " << std::endl;
		std::getline(std::cin, input);
		if (ft_digits(input, m) == 1)
			break;
		else continue;	
	}
	std::stringstream(input) >> i;
	if (i > 7)
		return 20;
	if (i < 0)	
		return 20;
	return i;
}

void ft_retrieve(Phonebook& book, int i)
{
	while(book.contact[i].index != -1 && i < 8)
	{
		if (book.contact[i].index == i)
		{
			std::cout << "First name : " << book.contact[i].first << std::endl;
			std::cout << "Last name : " << book.contact[i].last << std::endl;
			std::cout << "Nickname : " << book.contact[i].nickname << std::endl;
			std::cout << "Phone number : " << book.contact[i].phone << std::endl;
			std::cout << "Secret : " << book.contact[i].secret << std::endl;
		}
		i++;
	}
}