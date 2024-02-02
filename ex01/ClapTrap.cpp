/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:20:21 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/02 20:28:01 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*----------------------  Orthodox Canonical Form  ----------------------*/
ClapTrap::ClapTrap() : _Hit_points(10) , _Energy_points(10) , _Attack_damage(0){
	std::cout << "Constructor called" << std::endl;
}

ClapTrap&		ClapTrap::operator =(const ClapTrap& b) {
	_Name = b._Name;
	_Hit_points = b._Hit_points;
	_Energy_points = b._Energy_points;
	_Attack_damage = b._Attack_damage;
	return(*this);
}

ClapTrap::ClapTrap(ClapTrap const &src) : _Hit_points(10) , _Energy_points(10) , _Attack_damage(0) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}
/*-----------------------------------------------------------------------*/

ClapTrap::ClapTrap(std::string Name) : _Hit_points(10) , _Energy_points(10) , _Attack_damage(0) {
	_Name = Name;
}

/*----------------------  public member functions  ----------------------*/
void ClapTrap::attack(const std::string& target) {
	if (_Hit_points > 0 && _Energy_points > 0) {
		_Energy_points--;
		if (_Hit_points < _Attack_damage)
			_Hit_points -= _Attack_damage % _Hit_points;
			
		std::cout << "ClapTrap " << _Name << " attacks " << target << \
						", causing " << _Attack_damage << " points of damage!"<< std::endl;
	}
	// std::cout << _Name << std::endl;
	// std::cout << _Hit_points << std::endl;
	// std::cout << _Energy_points << std::endl;
	// std::cout << _Attack_damage << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_Hit_points == 0) {
		std::cout << "ClapTrap " << _Name << " have zero Hit points" << std::endl;
		return;
	}
	if (_Hit_points < amount)
		amount  %= _Hit_points;
	_Hit_points -= amount;
	std::cout << "ClapTrap " << _Name << " taking " << amount << " damage!" << std::endl;
	// std::cout << _Name << std::endl;
	// std::cout << _Hit_points << std::endl;
	// std::cout << _Energy_points << std::endl;
	// std::cout << _Attack_damage << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_Energy_points > 0) {
		_Hit_points += amount;
		std::cout << "ClapTrap " << _Name << " repairs itself" << std::endl;
	}
	// std::cout << _Name << std::endl;
	// std::cout << _Hit_points << std::endl;
	// std::cout << _Energy_points << std::endl;
	// std::cout << _Attack_damage << std::endl;
}

/*-----------------------------------------------------------------------*/