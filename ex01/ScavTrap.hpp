/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:32:00 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/02 20:29:06 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {
	private:
		std::string 		_Name;
		unsigned int		_Hit_points;
		unsigned int		_Energy_points;
		unsigned int		_Attack_damage;

	public :
	/*----------------------  Orthodox Canonical Form  ----------------------*/
		ScavTrap		();
		ScavTrap		(ScavTrap const & src);
		ScavTrap&		operator =(const ScavTrap& b);
		~ScavTrap		();
	/*-----------------------------------------------------------------------*/
		ScavTrap		(std::string Name);
		void 			guardGate();
		void attack(const std::string& target);
};

#endif