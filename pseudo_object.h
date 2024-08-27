/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pseudo_object.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:23:41 by nmatondo          #+#    #+#             */
/*   Updated: 2024/08/08 08:13:36 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSEUDO_OBJETO_H
# define PSEUDO_OBJETO_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <inttypes.h>

typedef struct s_person
{
	char	name[10];
	uint8_t	age;
	uint8_t	height;
	void	(*show)(struct s_person *);
}			t_person;

#endif