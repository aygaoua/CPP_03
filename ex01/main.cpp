/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:28:12 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/03 18:22:58 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
	std::cout << "<<------------------- End ------------------->>" << std::endl;

	return (0);
}