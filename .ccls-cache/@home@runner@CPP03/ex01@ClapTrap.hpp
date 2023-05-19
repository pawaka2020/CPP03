/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
	public:
		//constructors and destructor
		ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap(const std::string& name);
		~ClapTrap();
		//operator overloads
		ClapTrap& operator=(const ClapTrap& other);
		//member functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		//fields
		std::string _name;
		unsigned int _hp;
		unsigned int _ep;
		unsigned int _dmg;
	//modification for ex01
	protected:
		//setters and getters 
		//accessible only by derived classes
		void setName(const std::string& name);
		void setHp(unsigned int hp);
		void setEp(unsigned int ep);
		void setDmg(unsigned int dmg);
		std::string getName() const;
		unsigned int getHp() const;
		unsigned int getEp() const;
		unsigned int getDmg() const;
};

#endif