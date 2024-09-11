/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isallali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:09:07 by isallali          #+#    #+#             */
/*   Updated: 2024/09/03 16:02:15 by isallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*origine;

	origine = str;
	while (*origine)
	{
		if (*origine >= 'A' && *origine <= 'Z')
			*origine += 32;
		origine++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*orgn;
	int		c;

	c = 1;
	orgn = str;
	orgn = ft_strlowcase(orgn);
	while (*orgn)
	{
		if ((*orgn >= 'a' && *orgn <= 'z') || (*orgn >= '0' && *orgn <= '9'))
		{
			if ((*orgn >= 'a' && *orgn <= 'z') && c == 1)
				*orgn -= 32;
			c = 0;
		}
		else
			c = 1;
		orgn++;
	}
	return (str);
}
