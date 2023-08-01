/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spapyan <spapyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:27:29 by spapyan           #+#    #+#             */
/*   Updated: 2023/07/28 16:27:29 by spapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <exception>

class Span
{
private:
    std::list<int>  _list;
    unsigned int    _n;

    Span(void);

public:
    Span(unsigned int);
    Span(const Span&);
    ~Span(void);

    Span&           operator=(const Span&);
    void            addNumber(int);
    void            addNumber(std::list<int>::const_iterator, std::list<int>::const_iterator);
    unsigned int    longestSpan(void) const;
    unsigned int    shortestSpan(void) const;

    const std::list<int>* getList(void) const;
};

std::ostream& operator<<(std::ostream&, const Span&);