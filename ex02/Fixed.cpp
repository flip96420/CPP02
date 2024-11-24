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

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout	<< "Copy assignment operator '=' called" << std::endl;
	this->binary_point = copy.getRawBits();
	return (*this);
}

int	Fixed::operator>(const Fixed &copy) const
{
	std::cout	<< "Copy assignment operator '>' called" << std::endl;
	return (this->toFloat() > copy.toFloat());
}

int	Fixed::operator<(const Fixed &copy) const
{
	std::cout	<< "Copy assignment operator '<' called" << std::endl;
	return (this->toFloat() < copy.toFloat());
}

int	Fixed::operator>=(const Fixed &copy) const
{
	std::cout	<< "Copy assignment operator '>=' called" << std::endl;
	return (this->toFloat() >= copy.toFloat());
}

int	Fixed::operator<=(const Fixed &copy) const
{
	std::cout	<< "Copy assignment operator '<=' called" << std::endl;
	return (this->toFloat() <= copy.toFloat());
}

int	Fixed::operator==(const Fixed &copy) const
{
	std::cout	<< "Copy assignment operator '==' called" << std::endl;
	return (this->toFloat() == copy.toFloat());
}

int	Fixed::operator!=(const Fixed &copy) const
{
	std::cout	<< "Copy assignment operator '!=' called" << std::endl;
	return (this->toFloat() != copy.toFloat());
}

Fixed Fixed::operator+(const Fixed &copy)
{
	std::cout	<< "Copy assignment operator '+' called" << std::endl;
	Fixed	res(this->toFloat() + copy.toFloat());
	return (res);
}

Fixed Fixed::operator-(const Fixed &copy)
{
	std::cout	<< "Copy assignment operator '-' called" << std::endl;
	Fixed	res(this->toFloat() - copy.toFloat());
	return (res);
}

Fixed Fixed::operator*(const Fixed &copy)
{
	std::cout	<< "Copy assignment operator '*' called" << std::endl;
	Fixed	res(this->toFloat() * copy.toFloat());
	return (res);
}

Fixed Fixed::operator/(const Fixed &copy)
{
	std::cout	<< "Copy assignment operator '/' called" << std::endl;
	Fixed	res(this->toFloat() / copy.toFloat());
	return (res);
}

Fixed Fixed::operator++()
{
	std::cout	<< "Copy assignment operator '++' called" << std::endl;
	Fixed	res(this->toFloat() + 1);
	return (res);
}

Fixed Fixed::operator--()
{
	std::cout	<< "Copy assignment operator '--' called" << std::endl;
	Fixed	res(this->toFloat() - 1);
	return (res);
}

Fixed Fixed::operator++(int value)
{
	std::cout	<< "Copy assignment operator 'pre++' called" << std::endl;
	if (!value)
		value = 1;
	return (this->toFloat() + value);
}

Fixed Fixed::operator--(int value)
{
	std::cout	<< "Copy assignment operator 'pre--' called" << std::endl;
	if (!value)
		value = 1;
	return (this->toFloat() - value);
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

//Fixed	&min(Fixed &fixed_num1, Fixed &fixed_num2)
//{
//	if (fixed_num1 < fixed_num2)
//		return (fixed_num1);
//	return (fixed_num2);
//}

const Fixed	&min(const Fixed &fixed_num1, const Fixed &fixed_num2)
{
	if (fixed_num1 < fixed_num2)
		return (fixed_num1);
	return (fixed_num2);
}

//Fixed	&max(Fixed &fixed_num1, Fixed &fixed_num2)
//{
//	if (fixed_num1 > fixed_num2)
//		return (fixed_num1);
//	return (fixed_num2);
//}

const Fixed	&max(const Fixed &fixed_num1, const Fixed &fixed_num2)
{
	if (fixed_num1 > fixed_num2)
		return (fixed_num1);
	return (fixed_num2);
}
