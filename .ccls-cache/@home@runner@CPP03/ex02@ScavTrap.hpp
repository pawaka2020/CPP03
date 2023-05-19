/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		//Constructors and destructor
		ScavTrap();
		ScavTrap(const ScavTrap& other);
		ScavTrap(const std::string& name);
		~ScavTrap();
		//operator overloads
		ScavTrap& operator=(const ScavTrap& other);
		//member functions
		void guardGate(void);
	private:
		//fields
		bool _guardMode;
};

#endif