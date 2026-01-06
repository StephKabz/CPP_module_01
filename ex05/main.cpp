/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 00:23:48 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/31 00:52:51 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	harl;
	std::string input;
	while (true)
	{
		std::cout << "Choose your complaints (DEBUG, INFO, WARNING, ERROR) or EXIT : ";
		std::getline(std::cin, input);
		harl.complain(input);
		if (input == "EXIT")
			break;
	}
	return (0);
}
