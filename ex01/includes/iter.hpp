/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:16:07 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/05 17:45:29 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define BLUE	"\033[1;34m"
#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define RESET	"\033[0m"

#include <iostream>
#include <string>
#include <cmath>

template<typename Type>
void	iter( Type* arr, size_t len, void (*func)(Type&) )
{
	for (size_t i = 0; i < len; i++) {
		func(arr[i]);
	}
}

template<typename Type>
void	iter( const Type* arr, size_t len, void (*func)(const Type&) )
{
	for (size_t i = 0; i < len; i++) {
		func(arr[i]);
	}
}

template<typename Type>
void	printElement( const Type& type )
{
	std::cout << "[" << type << "]" << std::endl;
}

template<typename Type>
void	floorDecimal( Type& type )
{
	type = std::floor(type);
}
