/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:28:12 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/03 20:32:48 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	std::string name("Aymane");
	std::string target("salmane");

	std::cout << "<<------------------- ClapTrap ------------------->>" << std::endl;
	ClapTrap a(name);
	
	a.attack(target);
	a.takeDamage(5);
	a.beRepaired(5);
	std::cout << "<<------------------- End ------------------->>" << std::endl;
	return (0);

}