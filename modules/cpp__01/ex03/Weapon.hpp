#ifndef	WEAPON_CLASS_H
# define	WEAPON_CLASS_H

# include <iomanip>
# include <iostream>

class Weapon
{
	private:
		std::string _type;

	public:
		void	setType(std::string type);
		std::string getType() const;
		Weapon(std::string name);
		~Weapon();
};

#endif