/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:36:54 by pschmunk          #+#    #+#             */
/*   Updated: 2024/11/26 17:43:46 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout	<< "Object type:" << '"' << this->type << '"'
				<< " created from class "
				<< '"' << "WrongAnimal" << '"' << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout	<< "Object type:" << '"' << this->type << '"'
				<< " destroyed from class "
				<< '"' << "WrongAnimal" << '"' << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
	*this = copy;
	std::cout	<< "Copy type:" << '"' << this->type << '"'
				<< " created from class "
				<< '"' << "WrongAnimal" << '"' << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
	WrongAnimal::operator=(copy);
	std::cout	<< "Assignment operator created from class "
				<< '"' << "WrongAnimal" << '"' << std::endl;
	return (*this);
}