/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 01:18:59 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/31 01:26:39 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Use ./harlFilter (DEBUG, INFO, WARNING, ERROR)!" << std::endl;
		return (0);
	}
	Harl	harl;
	harl.complain(argv[1]);
	return (0);
}
