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
	while(book.getContact(i).getIndex() != -1 && i < 8)
	{
		if (book.getContact(i).getIndex() == i)
		{
			std::cout << "First name : " << book.getContact(i).getFirst() << std::endl;
			std::cout << "Last name : " << book.getContact(i).getLast() << std::endl;
			std::cout << "Nickname : " << book.getContact(i).getNickname() << std::endl;
			std::cout << "Phone number : " << book.getContact(i).getPhone() << std::endl;
			std::cout << "Secret : " << book.getContact(i).getSecret() << std::endl;
			break;
		}
		i++;
	}
}