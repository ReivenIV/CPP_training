/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:16:21 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/05/30 18:23:48 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include <iomanip>

class Contact
{
	private :
		int			_id;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_number;
		std::string	_secret;

	public :
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_number(void) const;
		std::string	get_secret(void) const;
		int			get_id(void) const;

		void		set_first_name(std::string str);
		void		set_last_name(std::string str);
		void		set_nickname(std::string str);
		void		set_number(std::string str);
		void		set_secret(std::string str);
		void		set_id(int id);

};

#endif