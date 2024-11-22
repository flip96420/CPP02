/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:49:22 by pschmunk          #+#    #+#             */
/*   Updated: 2024/11/22 17:58:26 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::num_width = 8;

Fixed::Fixed():binary_point(0)
{
	std::cout	<< "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout	<< "Copy Constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout	<< "Copy assignment operator called" << std::endl;
	this->binary_point = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout	<< "Destructor called" << std::endl;
}

int	Fixed::getRawBits()	const
{
	std::cout	<< "getRawBits member function called" << std::endl;
	return (this->binary_point);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout	<< "setRawBits member function called" << std::endl;
	this->binary_point = raw;
}