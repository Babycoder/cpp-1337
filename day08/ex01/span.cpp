/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:19:07 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/10 03:05:31 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(): _size(0)
{
	_vector.assign(0, 0);
}

Span::Span(unsigned int N): _size(N)
{
	
}

Span::Span(Span const & src): _size(src._size)
{
	_vector.assign(src._vector.begin(), src._vector.end());
}

Span::~Span()
{

}

std::vector<int>	&	Span::getVector(void)
{
	return _vector;
}

Span	&	Span::operator=(Span const & rhs)
{
	_size = rhs._size;
	_vector.assign(rhs._vector.begin(),rhs._vector.end());
	return *this;
}

void		Span::addNumber(int nb)
{
	if (_vector.size() >= _size)
		throw limitException();
	_vector.push_back(nb);
	
}


int					Span::longestSpan(void)
{
	if (_vector.size() < 2)
		return (0);
	std::sort(_vector.begin(), _vector.end());

	return (*(_vector.end() - 1) - *_vector.begin());
}

int					Span::shortestSpan(void)
{
	int					ret = 2147483647;
	int					prev;

	if (_vector.size() < 2)
		return (0);
	std::sort(_vector.begin(), _vector.end());
	prev = *_vector.begin();
	for (std::vector<int>::iterator it = _vector.begin() + 1 ; it != _vector.end() ; it++)
	{
		if (ret > *it - prev)
			ret = *it - prev;
		prev = *it;
	}
	return (ret);
}

std::ostream	&		operator<<(std::ostream & o, Span & rhs)
{
	for (std::vector<int>::iterator i = rhs.getVector().begin() ; i < rhs.getVector().end(); i++)
	{
		o << *i << std::endl;
	}
	return o;
}