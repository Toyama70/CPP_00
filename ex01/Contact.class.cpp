/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:24:50 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/05 13:36:29 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

contact::contact(void) 
{
	this->index = -1;
	this->first = '\0';
	this->nickname ='\0';
	this->last ='\0';
	this->phone ='\0';
	this->secret = '\0';
	return ;
}

contact::~contact(void) 
{
	return;
}

//setters
void contact::setIndex(int i)
{
	this->index = i;
}

void contact::setFirst(std::string str)
{
	this->first = str;
}

void contact::setLast(std::string str)
{
	this->last = str;
}

void contact::setNickname(std::string str)
{
	this->nickname = str;
}

void contact::setPhone(std::string str)
{
	this->phone = str;
}

void contact::setSecret(std::string str)
{
	this->secret = str;
}

//getters

int			contact::getIndex()
{
	return this->index;
}

std::string contact::getFirst() const
{
	return this->first;
}

std::string contact::getLast() const
{
	return this->last;
}

std::string contact::getNickname() const
{
	return this->nickname;
}

std::string contact::getPhone() const
{
	return this->phone;
}

std::string contact::getSecret() const
{
	return this->secret;
}

