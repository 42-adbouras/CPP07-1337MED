/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:50:07 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/03 14:21:10 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<class T>
class	Array
{
private:
	unsigned int	_size;
	T*				_arr;
public:
	Array( void );
	Array( unsigned int n );
	Array( const Array& right );
	~Array( void );

	Array&		operator=( const Array& right );
	T&			operator[]( unsigned int index );
	const T&	operator[]( unsigned int index ) const;

	unsigned int	size( void ) const;
	const T*		data( void ) const;
};

#include "Array.tpp"
