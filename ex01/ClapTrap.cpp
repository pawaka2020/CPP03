/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//constructors and destructor
ClapTrap::ClapTrap() {
	std::cout << "default is created." << std::endl;
	_name = "default";
	_hp = 10;
	_ep = 10;
	_dmg = 0;
}
ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << other._name << " is created as a copy." << std::endl;
	*this = other;
}
ClapTrap::ClapTrap(const std::string& name) {
	std::cout << name << " is created." << std::endl;
	_name = name;
	_hp = 10;
	_ep = 10;
	_dmg = 0;
}
ClapTrap::~ClapTrap() {
	std::cout << _name << " is destroyed." << std::endl;
}

//operator overloads
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap operator called." << std::endl;
	_name = other._name;
	_hp = other._hp;
	_ep = other._ep;
	_dmg = other._dmg;
	return *this;
}

//member functions
/*minus 1 EP for every attack
will not attack if EP 0 or HP 0*/
void ClapTrap::attack(const std::string& target) {
	if (_ep > 0 && _hp > 0) {
		std::cout << _name << " attacks " << target << " : ";
		std::cout << _dmg << " damage." << std::endl;
		_ep--;
	}
	else {
		std::cout << _name + " is unable to attack.";
		if (!_ep) std::cout << " No EP left.";
		if (!_hp) std::cout << " No HP left.";
		std::cout << std::endl;
	}
}
/*do nothing if ClapTrap is already dead
else minus '_hp' with 'amount' but capping deduction to 0 at most*/
void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << _name << " receives " << amount << " damage. ";
	if (!_hp) {
		std::cout << _name + " is already dead." << std::endl;
		return ;
	}
	if (amount >= _hp) _hp = 0;
    else _hp -= amount;
	std::cout << _hp << " HP remaining." << std::endl;
}
/*do nothing if ClapTrap has 0 '_ep' or already dead
follow JRPG logic where ClapTrap repairs itself even if it has full HP
with nothing happening*/
void ClapTrap::beRepaired(unsigned int amount) {
	if (_ep > 0 && _hp > 0) {
		std::cout << _name << " repairs itself for " << amount << "hit points. ";
		_ep--;
		_hp += amount;
		if (_hp > 10) _hp = 10;
		std::cout << _hp << " HP remaining." << std::endl;
	}
	else {
		std::cout << _name + " is unable to repair itself.";
		if (!_ep) std::cout << " No EP left.";
		if (!_hp) if (!_hp) std::cout << " No HP left.";
	}
}

//protected setters
void ClapTrap::setName(const std::string& name) {
	_name = name;
}
void ClapTrap::setHp(unsigned int hp) {
	_hp = hp;
}
void ClapTrap::setEp(unsigned int ep) {
	_ep = ep;
}
void ClapTrap::setDmg(unsigned int dmg) {
	_dmg = dmg;
}
std::string ClapTrap::getName() const {
	return _name;
}
unsigned int ClapTrap::getHp() const {
	return _hp;
}
unsigned int ClapTrap::getEp() const {
	return _ep;
}
unsigned int ClapTrap::getDmg() const {
	return _dmg;
}