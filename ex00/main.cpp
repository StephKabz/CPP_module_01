/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 22:27:45 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/28 02:47:19 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv){
	if (argc == 1)
	{
		std::cout << "Enter names for the 2 Zombies!" << std::endl;
		return (0);
	}
	if (argc > 3 || argc == 2)
	{
		std::cout << "Maximum of 2 names for the Zombies" << std::endl;
		return (0);
	}
	Zombie *heapZombie;

	heapZombie = newZombie(argv[1]);
	std::cout << "========== HEAP ZOMBIE ==========" << std::endl;
	heapZombie->announce();
	delete heapZombie;
	
	std::cout << "========== STACK ZOMBIE ==========" << std::endl;
	randomChump(argv[2]);
	return (0);
};