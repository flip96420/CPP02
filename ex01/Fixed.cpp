/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:49:22 by pschmunk          #+#    #+#             */
/*   Updated: 2024/11/22 20:02:08 by pschmunk         ###   ########.fr       */
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

Fixed::Fixed(const int con_int)
{
	Fixed::binary_point = con_int * 256;
	std::cout	<< "Int constructor called" << std::endl;
}

Fixed::Fixed(const float con_float)
{
	Fixed::binary_point = con_float * 256;
	std::cout	<< "Float constructor called" << std::endl;
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

float	Fixed::toFloat() const
{
	return (this->binary_point * 0.00390625);
}

int	Fixed::toInt() const
{
	return (this->binary_point * 0.00390625);
}

std::ostream	&operator<<(std::ostream &str, const Fixed &fixed_num)
{
	return (str	<< fixed_num.toFloat());
}
