/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 19:53:06 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/29 20:39:49 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {};

void	HumanA::attack()
{
	std::cout << name << " attack with their " << weapon.getType() << std::endl;
};

HumanA::~HumanA(){};
