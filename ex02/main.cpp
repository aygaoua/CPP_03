/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:28:12 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/03 21:08:24 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	std::string name("Aymane");
	std::string target("salmane");

	std::cout << "<<------------------- ClapTrap ------------------->>" << std::endl;
	ClapTrap a(name);
	
	a.attack(target);
	a.takeDamage(5);
	a.beRepaired(5);

	std::cout << "<<------------------- ScavTrap ------------------->>" << std::endl;
	ScavTrap b(name);

	b.attack(target);
	b.takeDamage(10);
	b.attack(target);
	b.guardGate();
	b.attack(target);
	b.beRepaired(5);
	b.guardGate();

	std::cout << "<<------------------- FragTrap ------------------->>" << std::endl;
	FragTrap c(name);
	
	c.attack(target);
	c.takeDamage(10);
	c.attack(target);
	c.highFivesGuys();
	c.attack(target);
	c.beRepaired(5);
	c.highFivesGuys();
	std::cout << "<<------------------- End ------------------->>" << std::endl;

	return (0);
}