/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeum <jkeum@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:34:31 by jkeum             #+#    #+#             */
/*   Updated: 2020/10/23 15:09:02 by jkeum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

char	*ft_strjoin_gnl(char *save, char *buff)
{
	int		i;
	int		j;
	int		save_len;
	int		buff_len;
	char	*dest;

	save_len = ft_strlen(save);
	buff_len = ft_strlen(buff);
	if (!(dest = (char *)malloc(save_len + buff_len + 1)))
		return (NULL);
	i = -1;
	while (++i < save_len)
		dest[i] = save[i];
	j = -1;
	while (++j < buff_len)
		dest[i + j] = buff[j];
	dest[i + j] = '\0';
	free(save);
	return (dest);
}
