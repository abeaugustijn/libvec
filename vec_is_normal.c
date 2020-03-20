/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_is_normal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 22:23:41 by abe               #+#    #+#             */
/*   Updated: 2020/03/20 12:00:42 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"
#include <stdbool.h>

/*
**	Function to check whether a vector is normalized.
**
**	@param {t_vec3f} vec
**
**	@return {bool}
*/

bool		vec_is_normal(t_vec3f vec)
{
	return (vec_float_compare(vec_len(vec), 1));
}
