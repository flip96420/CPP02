/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:33:34 by pschmunk          #+#    #+#             */
/*   Updated: 2024/11/26 17:44:15 by pschmunk         ###   ########.fr       */
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
	if (this->type == "WrongCat")
		std::cout	<< "Hello Everynyan! I wish i where a birde,"
					<< " but unfortunately im not even a cat :(." << std::endl;
	else if (this->type == "WrongDog")
		std::cout	<< "Wauff im boring and not a dog, imma wrong dog!" << std::endl;
	else
		std::cout	<< "Im some different cool ass typo'  wrong animal" << std::endl;
}