/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:56:46 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/27 22:27:08 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->name = name;
};

void	Zombie::announce(){
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
};

Zombie::~Zombie(){
	std::cout << name << " Has been vaporizzzeeeed!" << std::endl;
};
