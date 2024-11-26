/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:07:18 by pschmunk          #+#    #+#             */
/*   Updated: 2024/11/26 18:25:25 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->brain = new Brain();
	this->type = "Cat";
	std::cout	<< "Object type:" << '"' << this->type << '"'
				<< " created from class "
				<< '"' << "Animal" << '"' << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout	<< "Object type:" << '"' << this->type << '"'
				<< " destroyed from class "
				<< '"' << "Animal" << '"' << std::endl;
}

Cat::Cat(const Cat &copy) : Animal()
{
	*this = copy;
	std::cout	<< "Copy type:" << '"' << this->type << '"'
				<< " created from class "
				<< '"' << "Animal" << '"' << std::endl;
}

Cat	&Cat::operator=(const Cat &copy)
{
	Animal::operator=(copy);
	std::cout	<< "Assignment operator created from class "
				<< '"' << "Animal" << '"' << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout	<< "Hello Everynyan! I wish i where a birde." << std::endl;
}