/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:20:34 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/03 16:47:06 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	protected:
		std::string 		_Name;
		unsigned int		_Hit_points;
		unsigned int		_Energy_points;
		unsigned int		_Attack_damage;

	public:
	/*----------------------  Orthodox Canonical Form  ----------------------*/
		ClapTrap		();
		ClapTrap		(ClapTrap const & src);
		ClapTrap&		operator =(const ClapTrap& b);
		~ClapTrap		();
	/*-----------------------------------------------------------------------*/

	/*----------------------  constructor  ----------------------*/
		ClapTrap(std::string Name);
	/*-----------------------------------------------------------*/

	/*----------------------  public member functions  ----------------------*/
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	/*-----------------------------------------------------------------------*/
};

#endif