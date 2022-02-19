/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:56:02 by mcavusog          #+#    #+#             */
/*   Updated: 2022/02/16 14:21:07 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	n;
	int	print;

	n = 0;
	print = 1;
	while (str[n])
	{
		if (str[n] >= 32 && str[n] <= 127)
			print = 1;
		else
			return (0);
		n++;
	}
	return (print);
}
