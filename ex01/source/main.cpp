/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:15:15 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/03 14:20:18 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void )
{
	double		doubleArr[] = { 13.37, 42.42, 20.25 };
	const float	constFArr[] = { 13.37f, 42.42f, 20.25f };

	std::cout << "::::::        Elements Before        ::::::" << std::endl;
	::iter(doubleArr, 3, printElement);
	::iter(doubleArr, 3, floorDecimal);
	std::cout << "::::::        Elements After         ::::::" << std::endl;
	::iter(doubleArr, 3, printElement);

	std::cout << "\n::::::        Const Elements         ::::::" << std::endl;
	::iter(constFArr, 3, printElement);

	return (0);
}
