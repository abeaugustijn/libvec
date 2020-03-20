/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:52:00 by aaugusti          #+#    #+#             */
/*   Updated: 2020/03/20 11:55:17 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

/*
**	Creates a new vector with the given values.
**
**	@param {double} x
**	@param {double} y
**	@param {double} z
**
**	@return {t_vec3f}
*/

t_vec3f			vec_new(double x, double y, double z)
{
	t_vec3f	res;

	res.x = x;
	res.y = y;
	res.z = z;
	return (res);
}
