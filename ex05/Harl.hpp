/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 22:42:19 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/30 22:50:06 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <string>
#include <fstream>

class Harl
{
private:
	void	debug();
	void	info();
	void	warning();
	void	error();
public:
	Harl();
	~Harl();
	void	complain(std::string level);
};



#endif