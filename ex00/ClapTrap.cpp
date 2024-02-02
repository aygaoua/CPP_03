/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:20:21 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/02 16:11:13 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*----------------------  Orthodox Canonical Form  ----------------------*/
ClapTrap::ClapTrap() : _Hit_points(10) , _Energy_points(10) , _Attack_damage(0){
	std::cout << "Constructor called" << std::endl;
}

ClapTrap&		ClapTrap::operator =(const ClapTrap& b) {
	*this = b;
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

ClapTrap::ClapTrap(std::string Name) {
	_Name = Name;
}

/*----------------------  public member functions  ----------------------*/
void ClapTrap::attack(const std::string& target) {
	if (_Hit_points > 0 && _Energy_points > 0) {
		_Energy_points--;
		std::cout << "ClapTrap " << _Name << " attacks " << target << \
						", causing 0 points of damage!"<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << _Name << " taking 0 damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	
}

/*-----------------------------------------------------------------------*/