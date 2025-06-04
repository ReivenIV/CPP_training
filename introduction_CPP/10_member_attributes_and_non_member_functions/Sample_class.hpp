/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:15:38 by yes_we_can            #+#    #+#             */
/*   Updated: 2025/05/29 19:15:38 by yes_we_can           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {
	public :

		Sample(void);
		~Sample(void);

		static int	get_current_nb_instances(void);

	private :
		static int	_nb_instances;
};

#endif