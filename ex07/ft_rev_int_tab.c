/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 22:57:28 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/27 13:24:48 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	hold;
	int	element;
	int	rep;

	element = 0;
	rep = 1;
	while (rep < size)
	{
		while (element < size - rep)
		{
			hold = tab[element];
			tab[element] = tab[element + 1];
			tab[element + 1] = hold;
			element++;
		}
		element = 0;
		rep++;
	}
}
