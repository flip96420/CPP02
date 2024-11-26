/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:54:13 by pschmunk          #+#    #+#             */
/*   Updated: 2024/11/26 18:32:20 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout	<< "Object created from class "
				<< '"' << "Brain" << '"' << std::endl;
}

Brain::~Brain()
{
	std::cout	<< "Object destroyed from class "
				<< '"' << "Brain" << '"' << std::endl;
}