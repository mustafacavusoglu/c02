/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:40:56 by mcavusog          #+#    #+#             */
/*   Updated: 2022/02/16 16:45:02 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (str[n] >= 97 && str[122])
		{
			str[n] -= 32;
		}
		n++;
	}
	return (str);
}
