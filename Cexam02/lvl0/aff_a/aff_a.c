/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:39:24 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 10:44:33 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char*argv[])
{

	++argv;
	if (argc != 2)
	{
		write(1, "a\n", 2);
	}
	else
	{
		write(1, "a\n", 2);
	}
}
