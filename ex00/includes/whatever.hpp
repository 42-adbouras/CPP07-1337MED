/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:16:49 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/05 17:42:16 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

template<typename Type>
void	swap( Type& left, Type& right )
{
	std::swap(left, right);
}

template<typename Type>
Type&	min( Type& left, Type& right )
{
	return (left < right) ? left : right;
}

template<typename Type>
Type&	max( Type& left, Type& right )
{
	return (left > right) ? left : right;
}
