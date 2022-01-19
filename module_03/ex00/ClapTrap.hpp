#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <iostream>
# include <string>
# define HP 10
# define ENERGY 10
# define AD 0


class Clap_trap {

	public :

		Clap_trap(void);
		Clap_trap(std::string name);
		Clap_trap(const Clap_trap &trap);
		~Clap_trap(void);

		std::string get_name(void) const ;
		int			get_hp(void) const;
		int			get_ad(void) const;
		int			get_energy(void) const;
		void		set_hp(int ammount);

	//	Clap_trap	operator+(int	ammount) const; TO DO REVISAR XQ COJONES NO TIRA ESTO
	//	Clap_trap	operator-(int	ammount) const;

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private :
		std::string	_name;
		int			_hp;
		int			_energy;
		int			_ad;
};

#endif