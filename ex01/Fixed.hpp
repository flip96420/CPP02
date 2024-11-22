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

class Fixed
{
	private:
		int					binary_point;
		static const int	num_width;
	public:
		Fixed();
		Fixed(const int con_int);
		Fixed(const float con_float);
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &src);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream	&operator<<(std::ostream &str, const Fixed &fixed_num);

#endif