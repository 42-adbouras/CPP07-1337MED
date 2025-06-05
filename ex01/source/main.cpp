/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:15:15 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/05 17:45:53 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void )
{
	double		doubleArr[] = { 13.37, 42.42, 20.25 };
	const float	constFArr[] = { 13.37f, 42.42f, 20.25f };

	std::cout << BLUE "::::::        Elements Before        ::::::" RESET << std::endl;
	::iter(doubleArr, 3, printElement);
	::iter(doubleArr, 3, floorDecimal);
	std::cout << BLUE "::::::        Elements After         ::::::" RESET << std::endl;
	::iter(doubleArr, 3, printElement);

	std::cout << BLUE "\n::::::        Const Elements         ::::::" RESET << std::endl;
	::iter(constFArr, 3, printElement);

	return (0);
}
