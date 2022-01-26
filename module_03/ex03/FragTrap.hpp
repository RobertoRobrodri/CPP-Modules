#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# define FRAG_HP 100
# define FRAG_ENERGY 100
# define FRAG_AD 30
# include "ClapTrap.hpp"

class Frag_trap : virtual Clap_trap {
	public:

		Frag_trap(void);
		Frag_trap(std::string name);
		Frag_trap(const Frag_trap &scav);
		~Frag_trap(void);
};

#endif
