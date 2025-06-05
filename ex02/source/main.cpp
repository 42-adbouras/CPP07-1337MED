/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:50:10 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/05 17:45:04 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iomanip>

int	main( void )
{
	std::cout << BLUE "::::::      Non Const Elements       ::::::" RESET << std::endl;
	try {
		Array<float> a(5);
		for (unsigned int i = 0; i < a.size(); i++) {
			a[i] = i + 1.369;
		}
		std::cout << a << std::endl;
		std::cout << a[5] << std::endl;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << BLUE "\n::::::        Const Elements         ::::::" RESET << std::endl;
	try {
		const Array<std::string> str(10);
		std::cout << str[10] << std::endl;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	return (0);
}
