/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 22:25:41 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/06 22:25:41 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

#define GREEN "\033[1;32m"
#define RED   "\033[1;31m"
#define CYAN  "\033[1;36m"
#define RESET "\033[0m"

void print_result(const char* label, bool inside) {
    std::cout << CYAN << label << ": " << RESET
        << (inside ? GREEN "Inside" RESET : RED "Outside" RESET)
        << std::endl;
}

int main() {
    Point v1(1.0f, 1.0f);
    Point v2(6.0f, 1.0f);
    Point v3(3.5f, 4.5f);

    // Inside
    Point point1(3.5f, 2.0f);   // clearly inside
    Point point6(3.4f, 2.9f);   // inside
    Point point8(3.0f, 2.0f);   // inside
    Point point9(2.0f, 3.0f);   // inside
    // False points : 
    Point point2(1.0f, 1.0f);   // vertex
    Point point3(4.0f, 1.0f);   // on base edge
    Point point4(7.0f, 2.0f);   // outside
    Point point5(3.5f, 4.5f);   // vertex
    Point point7(3.5f, 1.0f);   // on base edge

    print_result("point1", bsp(v1, v2, v3, point1));
    print_result("point6", bsp(v1, v2, v3, point6));
    print_result("point8", bsp(v1, v2, v3, point8));
    print_result("point9", bsp(v1, v2, v3, point9));

    print_result("point2", bsp(v1, v2, v3, point2));
    print_result("point3", bsp(v1, v2, v3, point3));
    print_result("point4", bsp(v1, v2, v3, point4));
    print_result("point5", bsp(v1, v2, v3, point5));
    print_result("point7", bsp(v1, v2, v3, point7));

    return 0;
}