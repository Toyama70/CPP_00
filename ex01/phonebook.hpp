/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:31:53 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/05 10:40:10 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>




int		ft_digits(std::string input, int m);
int		ft_extract();
void	ft_retrieve(Phonebook& book, int i);
void	ft_newuser(Phonebook& book);
void	ft_search(Phonebook& book);


#endif