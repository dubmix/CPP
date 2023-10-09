/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 07:02:55 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/08 09:25:14 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP

# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <list>

template < typename T, class Container = std::deque<T> > // default Container will be deque
class MutantStack: public std::stack<T, Container> // exactly like stack would work
{
    private:

    public:
            MutantStack();
            MutantStack(MutantStack const &src);
            ~MutantStack();

            MutantStack &operator=(MutantStack const &src);

            typedef typename Container::iterator    iterator;

            iterator begin();
            iterator end();
};

# include "MutantStack.tpp"

#endif