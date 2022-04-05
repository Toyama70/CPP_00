/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:24:36 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/05 14:40:46 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class contact {

    public:
	contact(void);
	~contact(void);

	//getters

	std::string getFirst() const;
	std::string getLast() const;
	std::string getNickname() const;
	std::string getSecret() const;
	std::string getPhone() const;
	int			getIndex();
	
	//setters
	void setFirst(std::string str);
	void setLast(std::string str);
	void setNickname(std::string str);
	void setSecret(std::string str);
	void setPhone(std::string str);
	void setIndex(int i);
	
	private :
	std::string first;
	std::string last;
	std::string nickname;
	std::string secret;
	std::string phone;
	int index;
};


#endif