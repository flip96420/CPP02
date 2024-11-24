/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:49:19 by pschmunk          #+#    #+#             */
/*   Updated: 2024/11/22 20:00:29 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					binary_point;
		static const int	num_width;
	public:
		Fixed();
		Fixed(const int con_int);
		Fixed(const float con_float);
		Fixed(const Fixed &copy);
		Fixed	&operator=(const Fixed &copy);
		int		operator>(const Fixed &copy) const;
		int		operator<(const Fixed &copy) const;
		int		operator>=(const Fixed &copy) const;
		int		operator<=(const Fixed &copy) const;
		int		operator==(const Fixed &copy) const;
		int		operator!=(const Fixed &copy) const;
		Fixed	operator+(const Fixed &copy);
		Fixed	operator-(const Fixed &copy);
		Fixed	operator*(const Fixed &copy);
		Fixed	operator/(const Fixed &copy);
		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int value);
		Fixed	operator--(int value);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
		//static Fixed	&min(Fixed &fixed_num1, Fixed &fixed_num2);
		static Fixed	&min(const Fixed &fixed_num1, const Fixed &fixed_num2);
		//static Fixed	&max(Fixed &fixed_num1, Fixed &fixed_num2);
		static Fixed	&max(const Fixed &fixed_num1, const Fixed &fixed_num2);

};

std::ostream	&operator<<(std::ostream &str, const Fixed &fixed_num);

#endif