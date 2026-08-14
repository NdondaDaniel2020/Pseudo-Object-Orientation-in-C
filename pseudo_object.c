/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pseudo_object.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:23:41 by nmatondo          #+#    #+#             */
/*   Updated: 2024/08/08 08:13:36 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pseudo_object.h"

void	person_print(t_person *self)
{
	printf("Name: %s Age: %d Height: %d\n", self->name, self->age, self->height);
}

t_person	*new_person(char *name, uint8_t age, uint8_t height)
{
	t_person	*self;

	self = malloc(sizeof(t_person));
	if (self == NULL)
		return (NULL);
	strcpy(self->name, name);
	self->age = age;
	self->height = height;
	self->show = &person_print;
	return (self);
}

int	main(void)
{
	t_person	*person;

	person = (t_person *)new_person("Fabio", 43, 173);
	if (person != NULL)
	{
		person->show(person);
		free(person);
	}
	return (0);
}

