/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:24:43 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/05 14:12:38 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include "Contact.class.hpp"

class Phonebook {

    public:
	Phonebook(void);
	~Phonebook(void);
	
	int		lastmod;
	
	contact	&getContact(int index);

	contact getCopy(int index);

	private :
	contact contact[10];	
};


#endif