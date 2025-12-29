/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 22:27:09 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/28 01:03:15 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name){
	Zombie	*zombie;

	zombie = new Zombie(name);
	if (!zombie)
	{
		std::cout << "Allocation failed!" << std::endl;
		return (NULL);
	}
	return (zombie);
};
