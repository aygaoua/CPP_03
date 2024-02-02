/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:20:34 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/02 15:17:36 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	private:

	public:
	/*----------------------  Orthodox Canonical Form  ----------------------*/
	ClapTrap();
	ClapTrap(ClapTrap const & src);
	ClapTrap&		operator =(const ClapTrap& b);
	~ClapTrap();
}

#endif