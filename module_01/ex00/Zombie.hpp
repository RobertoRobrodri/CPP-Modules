#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class	Zombie {
	private:

	std::string	_name;

	public:

	Zombie				(std::string name);
	~Zombie				(void);
	void				announce(void);
	void				set_name(std::string name);
	std::string			get_name(void);
};
Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
