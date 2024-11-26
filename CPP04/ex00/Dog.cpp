/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:07:18 by pschmunk          #+#    #+#             */
/*   Updated: 2024/11/26 17:41:57 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout	<< "Object type:" << '"' << this->type << '"'
				<< " created from class "
				<< '"' << "Animal" << '"' << std::endl;
}

Dog::~Dog()
{
	std::cout	<< "Object type:" << '"' << this->type << '"'
				<< " destroyed from class "
				<< '"' << "Animal" << '"' << std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
	*this = copy;
	std::cout	<< "Copy type:" << '"' << this->type << '"'
				<< " created from class "
				<< '"' << "Animal" << '"' << std::endl;
}

Dog	&Dog::operator=(const Dog &copy)
{
	Animal::operator=(copy);
	std::cout	<< "Assignment operator created from class "
				<< '"' << "Animal" << '"' << std::endl;
	return (*this);
}
