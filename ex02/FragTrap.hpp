/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:27:44 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/03 18:29:52 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP


#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap {
	public :
	/*----------------------  Orthodox Canonical Form  ----------------------*/
		FragTrap		();
		FragTrap		(FragTrap const & src);
		FragTrap&		operator =(const FragTrap& b);
		~FragTrap		();
	/*-----------------------------------------------------------------------*/

	/*----------------------  constructor  ----------------------*/
		FragTrap		(std::string Name);
	/*-----------------------------------------------------------*/

	/*----------------------  FragTrap functions  ----------------------*/
		void 			highFivesGuys();
	/*-----------------------------------------------------------------------*/

	/*----------------------  public member functions  ----------------------*/
		void 			attack(const std::string& target);
	/*-----------------------------------------------------------------------*/
};


#endif

