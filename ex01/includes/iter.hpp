/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:16:07 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/21 13:17:38 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename Type>
void	iter(Type* arr, size_t len, void (*func)(Type&))
{
	for (size_t i = 0; i < len; i++) {
		func(arr[i]);
	}
}

template<typename Type>
void	iter(const Type* arr, size_t len, void (*func)(const Type&))
{
	for (size_t i = 0; i < len; i++) {
		func(arr[i]);
	}
}