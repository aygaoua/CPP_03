/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:28:12 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/03 17:58:21 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap a(std::string("Aymane"));

	a.attack(std::string("salmane"));
	a.takeDamage(500);
	a.attack(std::string("salmane"));
	a.guardGate();
	a.attack(std::string("salmane"));
	a.beRepaired(101);
	a.guardGate();

	return (0);
}