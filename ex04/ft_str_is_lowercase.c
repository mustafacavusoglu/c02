/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:42:50 by mcavusog          #+#    #+#             */
/*   Updated: 2022/02/16 12:54:04 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	n;
	int	lower;

	n = 0;
	lower = 1;
	while (str[n])
	{
		if (str[n] >= 97 && str[n] <= 122)
		{
			lower = 1;
		}
		else
		{
			return (0);
		}
		n++;
	}
	return (lower);
}
