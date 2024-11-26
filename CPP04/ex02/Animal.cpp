/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:49:10 by pschmunk          #+#    #+#             */
/*   Updated: 2024/11/26 18:14:36 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("empty")
{
	std::cout	<< "Object type:" << '"' << this->type << '"'
				<< " created from class "
				<< '"' << "Animal" << '"' << std::endl;
}

Animal::~Animal()
{
	std::cout	<< "Object type:" << '"' << this->type << '"'
				<< " destroyed from class "
				<< '"' << "Animal" << '"' << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout	<< "Copy type:" << '"' << this->type << '"'
				<< " created from class "
				<< '"' << "Animal" << '"' << std::endl;
	*this = copy;
}

Animal	&Animal::operator=(const Animal &copy)
{
	this->type = copy.getType();
	std::cout	<< "Assignment operator created from class "
				<< '"' << "Animal" << '"' << std::endl;
	return (*this);
}

std::string	Animal::getType() const
{
	return(this->type);
}

void	Animal::makeSound() const
{
	if (this->type == "Cat")
		std::cout	<< "Hello Everynyan! I wish i where a birde." << std::endl;
	else if (this->type == "Dog")
		std::cout	<< "Wuff im boring!" << std::endl;
	else
		std::cout	<< "Im some different cool ass typo' animal" << std::endl;
}