/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:26:34 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/05 17:26:34 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_CLASS_H
# define HARL_CLASS_H

# include <iostream>

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	complain( std::string level );

	private:
		void	_debug(void) const;
		void	_info(void) const;
		void	_warning(void) const;
		void	_error(void) const;
};

#endif