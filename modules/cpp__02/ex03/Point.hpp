/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 22:05:58 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/06 22:05:58 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed	const _x;
		Fixed	const _y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& value);
		~Point();
		//Point& operator=(const Point& value);			// REMINDER:  comented becasue we don't use it in bsp.cpp
	
		Fixed	getX() const;
		Fixed	getY() const;
};

bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif