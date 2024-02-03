/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:32:12 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/03 19:05:26 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*------------------------- Canonical form  -------------------------*/
ScavTrap::ScavTrap() {
	_Hit_points = 100;
	_Energy_points = 50;
	_Attack_damage = 20;
	std::cout << "the ScavTrap Constructor called" << std::endl;
}

ScavTrap&		ScavTrap::operator =(const ScavTrap& b) {
	_Name = b._Name;
	_Hit_points = b._Hit_points;
	_Energy_points = b._Energy_points;
	_Attack_damage = b._Attack_damage;
	return(*this);
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	std::cout << "the ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "the ScavTrap Destructor called" << std::endl;
}
/*-------------------------------------------------------------------*/


/*-------------------------- member functions  --------------------------*/
void ScavTrap::attack(const std::string& target) {
	if (_Hit_points > 0 && _Energy_points > 0) {
		_Energy_points--;
		std::cout << "ScavTrap " << _Name << " attacks " << target << \
						", causing " << _Attack_damage << \
						" points of damage!"<< std::endl;
	}
}
/*-----------------------------------------------------------------------*/


/*----------------------  constructor  ----------------------*/
ScavTrap::ScavTrap(std::string Name) {
	_Name = Name;
	_Hit_points = 100;
	_Energy_points = 50;
	_Attack_damage = 20;
}
/*-----------------------------------------------------------*/

/*----------------------  ScavTrap functions  ----------------------*/
void 			ScavTrap::guardGate() {
	std::cout << "The ScavTrap " << _Name << " is now in Gatekeeper mode" << std::endl; 
}
/*------------------------------------------------------------------*/
