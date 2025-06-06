/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bar.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 12:52:46 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/06 12:52:46 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BAR_CLASS_HPP
# define BAR_CLASS_HPP

# include <iostream>
class Bar {
	public:
		Bar(void);
		~Bar(void);

		void test(char const c) const;
		void test(int const n) const;
		void test(float const z) const;
		void test(Bar const & i) const;
};

#endif