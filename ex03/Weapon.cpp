/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 19:58:21 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/29 20:16:49 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	this->type = type;
};

void	Weapon::setType(std::string newType){
	type = newType;
};

const std::string&	Weapon::getType(){
	return(type);
};

Weapon::~Weapon(){};