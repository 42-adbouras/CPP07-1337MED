/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:04:03 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/03 13:06:33 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<class T>
Array<T>::Array( void ) : _size(0), _arr(NULL) { return ; }

template<class T>
Array<T>::Array( unsigned int n ) : _size(n), _arr(new T[n]) { return ; }

template<class T>
Array<T>::Array( const Array& right ) : _size(right._size), _arr(new T[this->_size]) {
	for (unsigned int i = 0; i < right.size; i++) {
		this->_arr[i] = right._arr[i];
	}
}

template<class T>
Array<T>::~Array( void ) {
	if (this->_arr)
		delete[] _arr;
}

template<class T>
Array<T>&	Array<T>::operator=( const Array& right ) {
	if (this != &right) {
		delete[] _arr;
		this->_size = right._size;
		_arr = new T[_size];
		for (unsigned int i = 0; i < _size; i++) {
			this->_arr[i] = right._arr[i];
		}
	}
	return (*this);
}

template<class T>
T&	Array<T>::operator[]( unsigned int index ) {
	if (index >= this->_size)
		throw std::out_of_range(std::string("[Array::IndexOutOfBound]"));
	return (this->_arr[index]);
}

template<class T>
const T&	Array<T>::operator[]( unsigned int index ) const {
	if (index >= this->_size)
		throw std::out_of_range(std::string("[Array::IndexOutOfBound]"));
	return (this->_arr[index]);
}

template<class T>
unsigned int	Array<T>::size( void ) const { return (this->_size); }

template<class T>
const T*	Array<T>::data( void ) const { return (this->_arr); }

template<class T>
std::ostream&	operator<<( std::ostream& COUT, const Array<T>& right )
{
	const T*	temp = right.data();

	COUT << "[";
	for (unsigned int i = 0; i < right.size(); i++) {
		COUT << temp[i];
		if (i < right.size() - 1)
			COUT << ", ";
	}
	COUT << "]";
	return (COUT);
}