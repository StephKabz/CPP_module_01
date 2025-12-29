/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 20:41:50 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/29 20:56:38 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL){};

void	HumanB::attack()
{
	if (weapon != NULL)
		std::cout << name << " attack with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attack with their hands" << std::endl;
};

void	HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
};

HumanB::~HumanB(){};