/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//it should attack until it can't anymore due to 0 EP remaining.
void attackTest() {
	ClapTrap a = ClapTrap("A");
	for (int i = 0; i < 12; i++) a.attack("Handsome Jack");
}

//it should take damage until it is already dead
//also test copy constructor here at the same time.
void takeDamageTest() {
	ClapTrap b = ClapTrap("B");
	ClapTrap b2 = b;
	for (int i = 0; i < 5; i++) b2.takeDamage(3);
}

//first take damage and be repaired.
//then be repaired even when HP full
//then repair attempt fail after it's dead.
void beRepairedTest() {
	ClapTrap c = ClapTrap("C");
	for (int i = 0; i < 3; i++) {
		c.takeDamage(1);
		c.beRepaired(1);
	}
	c.beRepaired(4);
	c.takeDamage(20);
	c.beRepaired(6);
}

int main(void) {
	attackTest();
	takeDamageTest();
	beRepairedTest();
	return 0;
}