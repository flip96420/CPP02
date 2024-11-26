#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string			name;
		unsigned int		hp;
		unsigned int		ap;
		unsigned int		dmg;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap	&operator=(const ClapTrap &copy);
		~ClapTrap();
		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		get_name() const;
		unsigned int	get_hp() const;
		unsigned int	get_ap() const;
		unsigned int	get_dmg() const;

};

void	fight(ClapTrap	*attacker, ClapTrap *defender);

#endif