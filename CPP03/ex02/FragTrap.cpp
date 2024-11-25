#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout	<< "Object " << '"' << this->get_name() << '"'
				<< " created. (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout	<< "Ma Homie " << '"' << this->get_name() << '"'
				<< " created from Class " 
				<< '"' << "ClapTrap" << '"' << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
	std::cout	<< "Copy " << '"' << this->get_name() << '"'
				<< " created." << std::endl;
}

FragTrap    &FragTrap::operator=(const FragTrap &copy)
{
	ClapTrap::operator=(copy);
	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout	<< "Ma Homie " << '"' << this->get_name() << '"'
				<< " destroyed. :'( (FragTrap)" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (!this->get_hp())
		std::cout	<< this->get_name() << " is already dead. RIP :(" << std::endl;
	else
		std::cout	<< this->get_name() << ": C'mon. High Five Guys :DDDD???" << std::endl;
}