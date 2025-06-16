/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 22:24:59 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/06 22:24:59 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
	• a, b, c: The vertices of our beloved triangle.
	• point: The point to check.
	• Returns: True if the point is inside the triangle. False otherwise.
		Thus, if the point is a vertex or on an edge, it will return False.
*/
bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	//* ABC
	Fixed abc_A = a.getX() * (b.getY() - c.getY());
	Fixed abc_B = b.getX() * (c.getY() - a.getY());
	Fixed abc_C = c.getX() * (a.getY() - b.getY());
	Fixed ABC = (abc_A + abc_B + abc_C) / Fixed(2);				// These is the area of the hole triangle


	//* Now we will calculate each triangle with Point.
	//* PBC
	Fixed pbc_P = point.getX() * (b.getY() - c.getY());
	Fixed pbc_B = b.getX() * (c.getY() - point.getY());
	Fixed pbc_C = c.getX() * (point.getY() - b.getY());
	Fixed PBC = (pbc_P + pbc_B + pbc_C) / Fixed(2);

	//* APC
	Fixed apc_A = a.getX() * (point.getY() - c.getY());
	Fixed apc_P = point.getX() * (c.getY() - a.getY());
	Fixed apc_C = c.getX() * (a.getY() - point.getY());
	Fixed APC = (apc_A + apc_P + apc_C) / Fixed(2);

	//* ABP
	Fixed abp_A = a.getX() * (b.getY() - point.getY());
	Fixed abp_B = b.getX() * (point.getY() - a.getY());
	Fixed abp_P = point.getX() * (a.getY() - b.getY());
	Fixed ABP = (abp_A + abp_B + abp_P) /  Fixed(2);

	// Explanation of these if statement in doc
	if (ABC > 0 && PBC > 0 && APC > 0 && ABP > 0)
		return (true);
	else
		return (false);

	/*
	These will no work because if the point is in the edge is going to be TRUE but the subject explicity says that we must say FALSE if the point is at the edge.

	if (ABC == PBC + APC + ABP)
		return (true);
	else
		return (false);
	*/
}