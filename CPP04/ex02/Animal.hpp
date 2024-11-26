/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:03:48 by pschmunk          #+#    #+#             */
/*   Updated: 2024/11/26 18:20:57 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		virtual	~Animal();
		Animal(const Animal &copy);
		Animal	&operator=(const Animal &copy);
		std::string	getType() const;
		virtual void	makeSound() const = 0;
};
