#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout	<< "Object " << '"' << this->get_name() << '"'
				<< " created." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout	<< "Object " << '"' << this->get_name() << '"'
				<< " created from Class " 
				<< '"' << "ClapTrap" << '".' << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout	<< "Copy " << '"' << this->get_name() << '"'
				<< " created." << std::endl;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &copy)
{
	ClapTrap::operator=(copy);
	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout	<< "Object " << '"' << this->get_name() << '"'
				<< " destroyed." << std::endl;
}

void    ScavTrap::guardGate()
{
    if (!this->get_hp())
        std::cout	<< this->get_name() << " is already dead. RIP :(" << std::endl;
	else
		std::cout	<< this->get_name() << " switched to Gate keeper mode." << std::endl;
}