/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 10:13:37 by zmakhube          #+#    #+#             */
/*   Updated: 2016/05/17 08:11:53 by zmakhube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int number;

	i = 0;
	sign = 1;
	number = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i = 1;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10;
		number += str[i] - '0';
		i++;
	}
	return (number * sign);
}
