/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:31:07 by mcavusog          #+#    #+#             */
/*   Updated: 2022/02/19 13:08:45 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fputchar(char c)
{
	write(1, &c, 1);
}

void	print(char c)
{
	if (c < 16)
	{
		if (c < 10)
		{
			fputchar(c + '0');
		}
		else
		{
			fputchar(c - 10 + 'a');
		}
	}
	else
	{
		print(c / 16);
		print(c % 16);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 31 && str[i] < 127)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\0", 2);
			print(str[i]);
		}
		i++;
	}
}
