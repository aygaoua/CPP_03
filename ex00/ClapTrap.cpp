/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:20:21 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/03 19:19:54 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*----------------------  Orthodox Canonical Form  ----------------------*/
ClapTrap::ClapTrap() : _Hit_points(10), \
						_Energy_points(10), \
						_Attack_damage(0){
	std::cout << "Constructor called" << std::endl;
}

ClapTrap&		ClapTrap::operator =(const ClapTrap& b) {
	_Name = b._Name;
	_Hit_points = b._Hit_points;
	_Energy_points = b._Energy_points;
	_Attack_damage = b._Attack_damage;
	return(*this);
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}
/*-----------------------------------------------------------------------*/


/*----------------------  constructor  ----------------------*/
ClapTrap::ClapTrap(std::string Name) : _Hit_points(10), \
									 	_Energy_points(10), \
									 	_Attack_damage(0) {
	_Name = Name;
}
/*-----------------------------------------------------------*/


/*----------------------  public member functions  ----------------------*/
void ClapTrap::attack(const std::string& target) {
	if (_Hit_points > 0 && _Energy_points > 0) {
		_Energy_points--;
		std::cout << "ClapTrap " << _Name << " attacks " << target << \
						", causing " << _Attack_damage << " points of damage!"<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_Hit_points == 0) {
		std::cout << "ClapTrap " << _Name << " have zero Hit points" << std::endl;
		return;
	}
	else if (_Hit_points < amount) {
		std::cout << "ClapTrap " << _Name << " taking " << _Hit_points << " damage!" << std::endl;
		_Hit_points = 0;
	}
	else {
		std::cout << "ClapTrap " << _Name << " taking " << amount << " damage!" << std::endl;
		_Hit_points -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_Energy_points > 0 && _Hit_points < 100) {
		amount = (amount + _Hit_points) > 100 ? (100 - _Hit_points) : amount;
		_Hit_points += amount;
		_Energy_points--;
		std::cout << "ClapTrap " << _Name << " repairs itself" << " with " << amount << " Hit points" << std::endl;
	}
	else if (_Energy_points == 0)
		std::cout << "ClapTrap " << _Name << " have zero Energy points" << std::endl;
	else
		std::cout << "ClapTrap " << _Name << " have maximum Hit points" << std::endl;
}
/*-----------------------------------------------------------------------*/
