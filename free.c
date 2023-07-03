/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:54:18 by mcarneir          #+#    #+#             */
/*   Updated: 2023/07/03 17:04:21 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		free(map[i++]);
	free (map);
}

void	free_array(char **map, int lines)
{
	int	i;

	i = 0;
	while (i <= lines)
		free(map[i++]);
	free (map);
}

void	free_game(t_game *game)
{
	if (!game)
		return ;
	if (game->map)
		free_map(game->map);
	free(game);
}
