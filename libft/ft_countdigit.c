/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaespino <aaespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:53:20 by aaespino          #+#    #+#             */
/*   Updated: 2023/10/06 15:06:37 by aaespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_countdigit(long num)
{
	int count;
	
	count = 1;
	if (num < 0)
		count++;
	while (num >= 10)
	{
		count++;
		num /= 10;
	}
	return(count);
}