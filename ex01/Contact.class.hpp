/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:24:36 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/04 16:45:36 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class contact {

    public:
	contact(void);

	int index;
	std::string first;
	std::string last;
	std::string nickname;
	std::string secret;
	std::string phone;

	
	
	
	~contact(void);
};


#endif