/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutucir <rlutucir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:44:40 by rlutucir          #+#    #+#             */
/*   Updated: 2025/07/21 14:19:18 by rlutucir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*new;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = 0;
	len = end - start;
	new = malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = s1[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

// #include <stdio.h>
// int main()
// {
// 	char *str1 = "  string  ";
// 	char *s = " ";
// 	int ans = ft_strtrim(str1, s);
// 	printf("%d", ans);
// }