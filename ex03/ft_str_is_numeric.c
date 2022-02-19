/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:37:48 by mcavusog          #+#    #+#             */
/*   Updated: 2022/02/16 12:37:52 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	n;
	int	numeric;

	numeric = 1;
	n = 0;
	while (str[n])
	{
		if (str[n] >= 48 && str[n] <= 57)
			numeric = 1;
		else
			return (0);
		n++;
	}
	return (numeric);
}
