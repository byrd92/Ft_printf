/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:57:17 by egarcia-          #+#    #+#             */
/*   Updated: 2019/11/20 09:57:57 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;

	if (s)
	{
		if (!(str = malloc(((int)len + 1) * sizeof(char))))
			return (NULL);
		ft_bzero(str, len);
		if (start <= ft_strlen(s))
			ft_strlcpy(str, s + start, len + 1);
		return (str);
	}
	return (0);
}
