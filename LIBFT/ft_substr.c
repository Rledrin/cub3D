/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacruype <lacruype@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:05:39 by lacruype          #+#    #+#             */
/*   Updated: 2019/10/18 18:47:57 by lacruype         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;

	i = 0;
	if (!(dst = ft_calloc(sizeof(char), 1)))
		return (0);
	if ((dst == (char*)s) || (start > ft_strlen(s)))
	{
		dst[i] = '\0';
		return (dst);
	}
	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	if (dst)
		dst[i] = '\0';
	return (dst);
}
