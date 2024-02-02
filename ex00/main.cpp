/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:28:12 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/02 18:09:04 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap a(std::string("Aymane"));
	
	a.attack(std::string("salmane"));
	a.takeDamage(5);
	a.beRepaired(5);
	return (0);

}