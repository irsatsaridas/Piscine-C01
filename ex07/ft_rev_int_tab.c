/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 22:57:28 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/25 23:20:20 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int hold;
	int i;
	int j;

	i = 0;
	j = 1;
	while (j < size) 
	{
		while (i < size - j)
		{
			hold = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = hold;
			i++;
		}
		i = 0;
		j++;
	}
}

int main()
{
	int a[4] = {1, 2, 3, 4};
	ft_rev_int_tab(a, 4);
	int i = 0;
	while (i < 4)
	{
		write(1, &a[i], 1);
		i++;
	}
}
