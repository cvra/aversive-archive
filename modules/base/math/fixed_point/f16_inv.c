/*  
 *  Copyright Droids Corporation, Microb Technology, Eirbot (2005)
 * 
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Revision : $Id: f16_inv.c,v 1.6 2008/05/14 13:27:12 zer0 Exp $
 *
 */

#include <stdio.h>
#include <f16.h>
#include <f16_to_s16.h>
#include <s16_to_f16.h>


f16 f16_inv(f16 f)
{
	if (F16_IS_ZERO(f))
		return F16_NAN;

	return s16_to_f16( ((int16_t)0x7fff) / (f16_to_s16(f)/2) );
}

