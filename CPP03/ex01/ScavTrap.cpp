#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout	<< "Object " << '"' << this->name << '"'
				<< " created." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout	<< "Object " << '"' << this->name << '"'
				<< " created from Class " 
				<< '"' << "ClapTrap" << '".' << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout	<< "Copy " << '"' << this->name << '"'
				<< " created." << std::endl;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &copy)
{
	ClapTrap::operator=(copy);
	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout	<< "Object " << '"' << this->name << '"'
				<< " destroyed." << std::endl;
}

void    ScavTrap::guardGate()
{
    if (!this->hp)
        std::cout	<< this->name << " is already dead. RIP :(" << std::endl;
	else
		std::cout	<< this->name << " switched to Gate keeper mode." << std::endl;
}