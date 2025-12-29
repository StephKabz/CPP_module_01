/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 02:54:04 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/28 03:17:50 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	name = "";
};

void	Zombie::announce(){
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
};

void	Zombie::setName(std::string name){
	this->name = name;
};

Zombie::~Zombie(){
	std::cout << name << " Has been vaporizzzeeeed!" << std::endl;
};