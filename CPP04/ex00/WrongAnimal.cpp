/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:33:34 by pschmunk          #+#    #+#             */
/*   Updated: 2024/11/26 18:32:13 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wrong")
{
	std::cout	<< "Object type:" << '"' << this->type << '"'
				<< " created from class "
				<< '"' << "WrongAnimal" << '"' << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout	<< "Object type:" << '"' << this->type << '"'
				<< " destroyed from class "
				<< '"' << "WrongAnimal" << '"' << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout	<< "Copy type:" << '"' << this->type << '"'
				<< " created from class "
				<< '"' << "WrongAnimal" << '"' << std::endl;
	*this = copy;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->type = copy.getType();
	std::cout	<< "Assignment operator created from class "
				<< '"' << "WrongAnimal" << '"' << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return(this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout	<< "Imma wrong animal" << std::endl;
}