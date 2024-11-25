#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap zero("Zero");
	ClapTrap maya("Maya");

	fight(&zero, &maya);
	fight(&zero, &maya);
	fight(&zero, &maya);
	//maya.beRepaired(11);
	maya.beRepaired(2);
	fight(&maya, &zero);
}