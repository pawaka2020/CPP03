/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//constructors and destructor
ScavTrap::ScavTrap():ClapTrap() {
	std::cout << "ScavTrap default is created." << std::endl;
	setName("default");
	setHp(100);
	setEp(50);
	setDmg(20);
	_guardMode = false;
}
ScavTrap::ScavTrap(const ScavTrap& other):ClapTrap() {
	std::cout << "ScavTrap " << other.getName() << " is created as a copy." << std::endl;
	*this = other;
}
ScavTrap::ScavTrap(const std::string& name):ClapTrap() {
	std::cout << "ScavTrap " << name << " is created." << std::endl;
	setName(name);
	setHp(100);
	setEp(50);
	setDmg(20);
	_guardMode = false;
}
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << getName() << " is destroyed." << std::endl;
}

//operator overloads
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap assignment operator called." << std::endl;
	setName(other.getName());
	setHp(other.getHp());
	setEp(other.getEp());
	setDmg(other.getDmg());
	return *this;
}

//member functions
void ScavTrap::guardGate() {
	std::cout << getName() << " is now in gatekeeper mode." << std::endl;
	_guardMode = true;
}
