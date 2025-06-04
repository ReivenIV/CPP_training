/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class_set.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:02:38 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/05/30 18:16:11 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact_class.hpp"

void	Contact::set_first_name(std::string str) {
	_first_name = str;
}

//* Setters
void	Contact::set_last_name(std::string str) { _last_name = str;}
void	Contact::set_nickname(std::string str) {_nickname = str;}
void	Contact::set_number(std::string str) {_number = str;}
void	Contact::set_secret(std::string str) {_secret = str;}
void	Contact::set_id(int id) {_id = id;}

//* Getters
std::string Contact::get_first_name(void) const {return (_first_name);}
std::string Contact::get_last_name(void) const {return (_last_name);}
std::string Contact::get_nickname(void) const {return (_nickname);}
std::string Contact::get_secret(void) const {return (_secret);}
std::string Contact::get_number(void) const {return (_number);}
int	Contact::get_id(void) const {return (_id);}
