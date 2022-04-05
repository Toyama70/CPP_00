/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:41:32 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/05 14:33:08 by ybestrio         ###   ########.fr       */
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
	std::string tmp;
	
	std::cout << std::setw(10) << "Index";
	std::cout << " | ";
	std::cout << std::setw(10) << "First name";
	std::cout << " | ";
	std::cout << std::setw(10) << "Last name";
	std::cout << " | ";
	std::cout << std::setw(10) << "Nickname";
	while (book.getCopy(i).getIndex() != -1 && i < 8)
	{
		std::cout << std::endl;
		std::cout << std::setw(10) << book.getContact(i).getIndex();
		std::cout << " | ";
		if (book.getContact(i).getFirst().size() > 10)
		{
			tmp = book.getContact(i).getFirst();
			tmp.resize(9);
			std::cout << tmp;
			std::cout << ".";
		}
		else 
			std::cout << std::setw(10) << book.getCopy(i).getFirst();
		std::cout << " | ";
		if (book.getCopy(i).getLast().size() > 10)
		{
			tmp = book.getCopy(i).getLast();
			tmp.resize(9);
			std::cout << tmp;
			std::cout << ".";
		}
		else
			std::cout << std::setw(10) << book.getCopy(i).getLast();
		std::cout << " | ";
		if (book.getContact(i).getNickname().size() > 10)
		{
			tmp = book.getCopy(i).getNickname();
			tmp.resize(9);
			std::cout << tmp;
			std::cout << ".";
		}
		else
		std::cout << std::setw(10) << book.getContact(i).getNickname();
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
	book.getContact(book.lastmod).setFirst(temp);	
	
	/*----------------------------------------------------------------
	std::cout << "this is the first name :" << book.getContact(0).getFirst() << std::endl;	
	----------------------------------------------------------------*/	
	
	temp[0] = '\0';

	while (temp[0] == '\0')
	{
		std::cout << "Please enter the last name" << std::endl;
		std::getline(std::cin, temp);
	}	
	book.getContact(book.lastmod).setLast(temp);	

	temp[0] = '\0';
	while (temp[0] == '\0')
	{
		std::cout << "Please enter the nickname" << std::endl;
		std::getline(std::cin, temp);
	}	
	book.getContact(book.lastmod).setNickname(temp);	
	
	temp[0] = '\0';
	while (temp[0] == '\0')
	{
		std::cout << "Please enter the darkest secret of the person" << std::endl;
		std::getline(std::cin, temp);
	}	
	book.getContact(book.lastmod).setSecret(temp);
	
	temp[0] = '\0';
	while (temp[0] == '\0')
	{
		std::cout << "Please enter the phone number" << std::endl;
		std::getline(std::cin, temp);
	}	
	book.getContact(book.lastmod).setPhone(temp);
	
	book.getContact(book.lastmod).setIndex(book.lastmod);
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