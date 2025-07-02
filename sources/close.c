/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-rudd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:50:34 by yde-rudd          #+#    #+#             */
/*   Updated: 2025/02/21 16:53:17 by yde-rudd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3D.h"

int	close_window(void)
{
	exit(0);
	return (0);
}

void	print_error(char *str)
{
	printf(BOLD_RED"Error:\n"RESET);
	printf(BOLD_RED"%s\n"RESET, str);
}
