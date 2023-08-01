/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spapyan <spapyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:11:59 by spapyan           #+#    #+#             */
/*   Updated: 2023/07/28 16:11:59 by spapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>

int main(int ac, char **av)
{
    if (ac != 2)
        return 0;

    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    std::vector<int> vect(arr, arr + sizeof(arr) / sizeof(int));
    std::list<int>  list(arr, arr + sizeof(arr) / sizeof(int));

    easyfind(vect, std::atoi(av[1]));
    easyfind(list, std::atoi(av[1]));

    return 0;
}