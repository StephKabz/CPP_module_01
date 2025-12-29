/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 03:21:11 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/28 04:08:16 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv){
	if (argc == 1)
	{
		std::cout << "Enter the number of Zombies and their name!" << std::endl;
		return (0);
	}
	if (argc > 3 || argc == 2)
	{
		std::cout << "The programme requires 2 arguments!" << std::endl;
		return (0);
	}
	int	N = std::atoi(argv[1]);
	if (N <= 0 || N > 50)
	{
		std::cout << "Error! Enter a valid number between 1 and 50!" << std::endl;
		return (0);
	}

	Zombie	*horde;
	horde = zombieHorde(N, argv[2]);
	std::cout << "========== ZOMBIE HORDE ==========" << std::endl;
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zombie " << i << " ";
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}