#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define MAX_CLAPTRAPS 256

# include <iostream>

class ClapTrap
{
	private:
		std::string			name;
		unsigned int		hp;
		unsigned int		ap;
		unsigned int		dmg;
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		get_name() const;
		unsigned int	get_dmg() const;
		unsigned int	get_hp() const;

};

void	fight(ClapTrap	*attacker, ClapTrap *defender);

#endif