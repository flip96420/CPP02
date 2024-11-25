#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "default";
	this->hp = 100;
	this->ap = 100;
	this->dmg = 30;
	std::cout	<< "Object " << '"' << this->name << '"'
				<< " created." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hp = 100;
	this->ap = 100;
	this->dmg = 30;
	std::cout	<< "Object " << '"' << this->name << '"'
				<< " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout	<< "Copy " << '"' << this->name << '"'
				<< " created." << std::endl;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.get_name();
	this->hp = copy.get_hp();
	this->ap = copy.get_ap();
	this->dmg = copy.get_dmg();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout	<< "Object " << '"' << this->name << '"'
				<< " destroyed." << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (!this->hp)
	{
		std::cout	<< this->name << " is already dead. RIP :(" << std::endl;
		return ;
	}
	if (this->ap)
	{
		std::cout	<< "ClapTrap " << '"' << this->name << '"'
					<<	" attacks " << '"' << target << '"'
					<< ", causing " << this->dmg
					<< " point(s) of damage!" << std::endl;
		this->ap--;
	}
	else
		std::cout	<< "Not enough AP!" << std::endl;
	std::cout	<< this->name << "'s total AP: " << this->ap << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->hp)
	{
		std::cout	<< this->name << " is already dead. RIP :(" << std::endl;
		return ;
	}
	if (amount > this->hp)
		this->hp = 0;
	else
		this->hp = this->hp - amount;
	std::cout	<< this->name << " lost " << amount << " HP." << std::endl
				<< this->name << "'s total HP: " << this->hp << std::endl;
	if (!this->hp)
	{
		std::cout	<< this->name << " just died! x_x" << std::endl;
	}
	std::cout	<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hp)
	{
		std::cout	<< this->name << " is already dead. RIP :(" << std::endl;
		return ;
	}
	std::cout << this->name << " tries to repair " << amount << " HP." << std::endl;
	if (this->ap)
	{
		this->hp = this->hp + amount;
		std::cout	<< this->name << " gained " << amount << " HP." << std::endl
					<< this->name << "'s total HP: " << this->hp << std::endl;
		this->ap--;
	}
	else
		std::cout	<< "Not enough AP!" << std::endl;
	std::cout	<< this->name << "'s total AP: " << this->ap << std::endl;
	std::cout	<< std::endl;
}

std::string	ClapTrap::get_name() const
{
	return (this->name);
}

unsigned int	ClapTrap::get_hp() const
{
	return (this->hp);
}

unsigned int	ClapTrap::get_ap() const
{
	return (this->ap);
}

unsigned int	ClapTrap::get_dmg() const
{
	return (this->dmg);
}

void	fight(ClapTrap *attacker, ClapTrap *defender)
{
	attacker->attack(defender->get_name());
	if (attacker->get_hp())
		defender->takeDamage(attacker->get_dmg());
}