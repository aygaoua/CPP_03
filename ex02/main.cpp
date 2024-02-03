/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:28:12 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/03 18:55:26 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	std::cout << "<<------------------- ClapTrap ------------------->>" << std::endl;
	ClapTrap a(std::string("Aymane"));
	
	a.attack(std::string("salmane"));
	a.takeDamage(5);
	a.beRepaired(5);

	std::cout << "<<------------------- ScavTrap ------------------->>" << std::endl;
	ScavTrap b(std::string("Aymane"));

	b.attack(std::string("salmane"));
	b.takeDamage(500);
	b.attack(std::string("salmane"));
	b.guardGate();
	b.attack(std::string("salmane"));
	b.beRepaired(101);
	b.guardGate();

	std::cout << "<<------------------- FragTrap ------------------->>" << std::endl;
	FragTrap c(std::string("Aymane"));
	
	c.attack(std::string("salmane"));
	c.takeDamage(500);
	c.attack(std::string("salmane"));
	c.highFivesGuys();
	c.attack(std::string("salmane"));
	c.beRepaired(101);
	c.highFivesGuys();
	std::cout << "<<------------------- End ------------------->>" << std::endl;

	return (0);
}