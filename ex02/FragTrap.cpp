/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:29:57 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/03 20:22:35 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*------------------------- Canonical form  -------------------------*/
FragTrap::FragTrap() {
	_Hit_points = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap&	FragTrap::operator =(const FragTrap& b) {
	_Name = b._Name;
	_Hit_points = b._Hit_points;
	_Energy_points = b._Energy_points;
	_Attack_damage = b._Attack_damage;
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return (*this);
}

FragTrap::FragTrap(FragTrap const & src) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}
/*-------------------------------------------------------------------*/


/*-------------------------- member functions  --------------------------*/
void FragTrap::attack(const std::string& target) {
	if (_Hit_points > 0 && _Energy_points > 0) {
		_Energy_points--;
		std::cout << "FragTrap " << _Name << " attacks " << target << \
						", causing " << _Attack_damage << \
						" points of damage!"<< std::endl;
	}
	else if (_Hit_points == 0)
		std::cout << "FragTrap " << _Name << " have zero Hit points" << std::endl;
	else if (_Energy_points == 0)
		std::cout << "FragTrap " << _Name << " have zero Energy points" << std::endl;
	else
		std::cout << "FragTrap " << _Name << \
						" have zero Energy points and zero Hit points" << std::endl;
}
/*-----------------------------------------------------------------------*/


/*----------------------  constructor  ----------------------*/
FragTrap::FragTrap(std::string Name) {
	_Name = Name;
	_Hit_points = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
}
/*-----------------------------------------------------------*/


/*---------------------------  FragTrap functions  ---------------------------*/

void 			FragTrap::highFivesGuys() {
	std::cout << "High fives from the FragTrap " << _Name << " to all the Guys :)" << std::endl;
}

/*----------------------------------------------------------------------------*/
