/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:45:46 by mcavusog          #+#    #+#             */
/*   Updated: 2022/02/16 13:47:40 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	n;
	int	uppercase;

	n = 0;
	uppercase = 1;
	while (str[n])
	{
		if (str[n] >= 65 && str[n] <= 90)
			uppercase = 1;
		else
			return (0);
		n++;
	}
	return (uppercase);
}
