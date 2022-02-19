/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:30:40 by mcavusog          #+#    #+#             */
/*   Updated: 2022/02/16 12:30:43 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	n;
	int	alpha;

	n = 0;
	alpha = 1;
	while (str[n])
	{
		if ((str[n] >= 65 && str[n] <= 90) || (str[n] >= 97 && str[n] <= 122))
			alpha = 1;
		else
			return (0);
		n++;
	}
	return (alpha);
}
