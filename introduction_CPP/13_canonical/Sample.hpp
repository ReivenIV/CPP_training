/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:06:28 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/06 13:06:28 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class Sample {
	public:
		Sample(void);							// canonical
		Sample(int const n);
		Sample (Sample const & src);			// canonical
		~Sample(void);							// canonical
		Sample & operator=(Sample const & rhs);	// canonical
		int getFoo(void) const;
	private:
		int _foo;
};

std::ostream & operator <<(std::ostream & o, Sample const & i);

#endif