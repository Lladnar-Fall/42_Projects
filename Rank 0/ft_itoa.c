/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutucir <rlutucir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:32:41 by rlutucir          #+#    #+#             */
/*   Updated: 2025/07/23 16:22:15 by rlutucir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int n);

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	len = get_len(n);
	num = n;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
		num = -num;
	while (len > 0)
	{
		str[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

int	get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

// #include <stdio.h>

// int main()
// {
//     int num = 99;
//     printf("%s\n", ft_itoa(num));
// 	free(num);
// }