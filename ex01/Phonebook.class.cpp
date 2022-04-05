/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:24:52 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/05 14:13:01 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

Phonebook::Phonebook(void) 
{
	this->lastmod = 0;
	return ;	
}

Phonebook::~Phonebook(void) 
{
	return;
}

contact Phonebook::getCopy(int index)
{
	return this->contact[index];
}

contact &Phonebook::getContact(int index)
{
	return this->contact[index];
}