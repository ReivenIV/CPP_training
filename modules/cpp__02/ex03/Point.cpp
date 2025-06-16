/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 22:10:41 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/06 22:10:41 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::~Point(){}
Point::Point() : _x(0), _y(0) {}
Point::Point(const float x, const float y) : _x(x), _y(y) {}
Point::Point(const Point& instance) : _x(instance.getX()), _y(instance.getY()) {}
//Point & Point::operator=(const Point &value) { return (*this); }			// REMINDER:  comented becasue we don't use it in bsp.cpp
Fixed	Point::getX() const { return (_x); }
Fixed	Point::getY() const { return (_y); }