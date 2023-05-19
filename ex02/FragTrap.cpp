/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//constructors and destructor
FragTrap::FragTrap():ClapTrap() {
	std::cout << "FragTrap default is created." << std::endl;
	setName("default");
	setHp(100);
	setEp(100);
	setDmg(30);
}
FragTrap::FragTrap(const FragTrap&other):ClapTrap() {
	std::cout << "FragTrap " << other.getName() << " is created as a copy." << std::endl;
	*this = other;
}
FragTrap::FragTrap(const std::string& name):ClapTrap() {
	std::cout << "FragTrap " << name << " is created." << std::endl;
	setName(name);
	setHp(100);
	setEp(100);
	setDmg(30);
}
FragTrap::~FragTrap() {
	std::cout << "FragTrap " << getName() << " is destroyed." << std::endl;
}

//operator overloads
FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap assignment operator called." << std::endl;
	setName(other.getName());
	setHp(other.getHp());
	setEp(other.getEp());
	setDmg(other.getDmg());
	return *this;
}

//member functions
void FragTrap::highFivesGuys(void) {
	std::cout << getName() << " asks for a high-five!" << std::endl;
}