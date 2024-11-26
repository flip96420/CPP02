#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout	<< "Object " << '"' << this->name << '"'
				<< " created. (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout	<< "Ma Homie " << '"' << this->name << '"'
				<< " created from Class " 
				<< '"' << "ClapTrap" << '"' << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
	std::cout	<< "Copy " << '"' << this->name << '"'
				<< " created." << std::endl;
}

FragTrap    &FragTrap::operator=(const FragTrap &copy)
{
	ClapTrap::operator=(copy);
	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout	<< "Ma Homie " << '"' << this->name << '"'
				<< " destroyed. :'( (FragTrap)" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (!this->hp)
		std::cout	<< this->get_name() << " is already dead. RIP :(" << std::endl;
	else
		std::cout	<< this->get_name() << ": C'mon. High Five Guys :DDDD???" << std::endl;
}