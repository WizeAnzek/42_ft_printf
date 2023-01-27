/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:05:53 by gugolini          #+#    #+#             */
/*   Updated: 2023/01/17 15:08:04 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int a)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] == (unsigned char) a)
			return ((char *)&src[i]);
		i++;
	}
	if (a == '\0')
		return ((char *)&src[i]);
	return (NULL);
}
