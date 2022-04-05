/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:41:32 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/05 11:03:44 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include "phonebook.hpp"

void	ft_search(Phonebook& book)
{
	int i = 0;
	
	std::cout << std::setw(10) << "Index";
	std::cout << " | ";
	std::cout << std::setw(10) << "First name";
	std::cout << " | ";
	std::cout << std::setw(10) << "Last name";
	std::cout << " | ";
	std::cout << std::setw(10) << "Nickname";
	while (book.contact[i].index != -1 && i < 8)
	{
		std::cout << std::endl;
		std::cout << std::setw(10) << book.contact[i].index;
		std::cout << " | ";
		if (book.contact[i].first.size() > 10)
		{
			book.contact[i].first.resize(9);
			std::cout << book.contact[i].first;
			std::cout << ".";
		}
		else 
			std::cout << std::setw(10) << book.contact[i].first;
		std::cout << " | ";
		if (book.contact[i].last.size() > 10)
		{
			book.contact[i].last.resize(9);
			std::cout << book.contact[i].last;
			std::cout << ".";
		}
		else
			std::cout << std::setw(10) << book.contact[i].last;
		std::cout << " | ";
		if (book.contact[i].nickname.size() > 10)
		{
			book.contact[i].nickname.resize(9);
			std::cout << book.contact[i].nickname;
			std::cout << ".";
		}
		else
		std::cout << std::setw(10) << book.contact[i].nickname;
		i++;
	}
	std::cout << std::endl;
}

void	ft_newuser(Phonebook& book)
{
	std::string temp;
	
	temp[0] = '\0';
	while (temp[0] == '\0')
	{
		std::cout << "Please enter the first name" << std::endl;
		std::getline(std::cin, temp);
	}	
	book.contact[book.lastmod].first = temp;	

	temp[0] = '\0';

	while (temp[0] == '\0')
	{
		std::cout << "Please enter the last name" << std::endl;
		std::getline(std::cin, temp);
	}	
	book.contact[book.lastmod].last = temp;	

	temp[0] = '\0';
	while (temp[0] == '\0')
	{
		std::cout << "Please enter the nickname" << std::endl;
		std::getline(std::cin, temp);
	}	
	book.contact[book.lastmod].nickname = temp;	
	
	temp[0] = '\0';
	while (temp[0] == '\0')
	{
		std::cout << "Please enter the darkest secret of the person" << std::endl;
		std::getline(std::cin, temp);
	}	
	book.contact[book.lastmod].secret = temp;	
	
	temp[0] = '\0';
	while (temp[0] == '\0')
	{
		std::cout << "Please enter the phone number" << std::endl;
		std::getline(std::cin, temp);
	}	
	book.contact[book.lastmod].phone = temp;	
	
	book.contact[book.lastmod].index = book.lastmod;
	if (book.lastmod < 8)
		book.lastmod++;
	else 	
		book.lastmod = 0;

}

int main()
{
	Phonebook book;
	std::string buffer;
	int i;
	
	std::cout << "Welcome to Phonebook 0.01 Beta Ultimax RC" << std::endl;
	std::cout << "Please enter a command (ADD, SEARCH or EXIT)" << std::endl;

	while(1)
	{
		std::getline(std::cin, buffer);
		if (book.lastmod == 8)
			book.lastmod = 0;
		if (buffer == "ADD")
			ft_newuser(book);
		if (buffer == "EXIT")
			exit(0);
		if (buffer == "SEARCH")
			{
				ft_search(book);
				i = ft_extract();
				if (i != 20)
					ft_retrieve(book, i);
			}
		std::cout << "Please enter a command" << std::endl;
	}
}