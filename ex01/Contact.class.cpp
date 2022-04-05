/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:24:50 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/05 11:03:39 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

contact::contact(void) {
	this->index = -1;
	this->first = '\0';
	this->nickname ='\0';
	this->last ='\0';
	this->phone ='\0';
	this->secret = '\0';
	return ;
}

contact::~contact(void) {

}