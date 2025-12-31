/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 01:06:37 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/31 01:26:59 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
};
void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
};

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
};

int	indexComplaint(std::string level)
{
	if (level == "DEBUG")
		return (0);
	if (level == "INFO")
		return (1);
	if (level == "WARNING")
		return (2);
	if (level == "ERROR")
		return (3);
	return (-1);
};

void	Harl::complain(std::string level)
{
	int	idx = indexComplaint(level);
	switch (idx)
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		Harl::debug();
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		Harl::info();
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		Harl::warning();
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		Harl::error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
};

Harl::~Harl(){};