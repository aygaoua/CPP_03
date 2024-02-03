/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:32:00 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/03 19:12:30 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {
	public :
	/*----------------------  Orthodox Canonical Form  ----------------------*/
		ScavTrap		();
		ScavTrap		(ScavTrap const & src);
		ScavTrap&		operator =(const ScavTrap& b);
		~ScavTrap		();
	/*-----------------------------------------------------------------------*/

	/*----------------------  constructor  ----------------------*/
		ScavTrap		(std::string Name);
	/*-----------------------------------------------------------*/

	/*----------------------  ScavTrap functions  ----------------------*/
		void 			guardGate();
	/*-----------------------------------------------------------------------*/

	/*----------------------  public member functions  ----------------------*/
		void 			attack(const std::string& target);
	/*-----------------------------------------------------------------------*/
};

#endif