/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:50:10 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/22 17:56:01 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	Array<float> a(10);
	for (int i = 0; i < 10; i++) {
		a[i] = i + 1;
	}
	std::cout << a << std::endl;
	try {
		std::cout << a[15] << std::endl;
		
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
