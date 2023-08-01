/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spapyan <spapyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:43:14 by spapyan           #+#    #+#             */
/*   Updated: 2023/07/27 20:45:20 by spapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template<typename T>
void    easyfind(T& container, int value)
{
    if (std::find(container.begin(), container.end(), value) != container.end())
        std::cout << "Found." << std::endl;
    else
        std::cout << "Not found." << std::endl;
}