/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:16:49 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/21 13:00:06 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename Type>
void	swap( Type& left, Type& right )
{
	Type	temp;

	temp  = left;
	left  = right;
	right = temp;
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
