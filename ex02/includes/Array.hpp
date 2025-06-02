/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:50:07 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/02 16:10:56 by adbouras         ###   ########.fr       */
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

// template<class T>
// std::ostream&	operator<<( std::ostream& COUT, const Array<T>& right )
// {
// 	const T*	temp = right.data();

// 	COUT << "[";
// 	for (unsigned int i = 0; i < right.size(); i++) {
// 		COUT << temp[i];
// 		if (i < right.size() - 1)
// 			COUT << ", ";
// 	}
// 	COUT << "]";
// 	return (COUT);
// }

#include "Array.tpp"
