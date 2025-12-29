/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 02:49:07 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/28 03:17:29 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	~Zombie();
	void	announce();
	void	setName(std::string name);
};

	Zombie	*zombieHorde(int N, std::string name);

#endif