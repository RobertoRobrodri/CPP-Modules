#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# define SCAV_HP 100
# define SCAV_ENERGY 50
# define SCAV_AD 20
# include "ClapTrap.hpp"

class Scav_trap : virtual public Clap_trap {
	public:

		Scav_trap(void);
		Scav_trap(std::string name);
		Scav_trap(const Scav_trap &scav);
		virtual ~Scav_trap(void);

		void guardGate();
		Scav_trap &operator=(const Scav_trap &other);
};

#endif
