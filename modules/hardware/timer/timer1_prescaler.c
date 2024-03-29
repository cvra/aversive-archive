/*  
 *  Copyright DroidsDEFINE_STATIC_CONVERSIONS_FUNCSion, Microb Technology, Eirbot (2006)
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
 *  Revision : $Id: timer1_prescaler.c,v 1.3 2007/05/24 13:08:48 zer0 Exp $
 *
 */

#include <stdint.h>

#include <aversive/timers.h>

#include <timer.h>
#include <timer_definitions.h>
#include <timer_prescaler.h>

#include <timer_config.h>


#ifdef CONFIG_MODULE_TIMER_DYNAMIC

#if defined TIMER1_ENABLED && defined TIMER1_AVAILABLE
DEFINE_DYNAMIC_PRESCALER_FUNCS(1)
#endif

#else

#if defined TIMER1_ENABLED && defined TIMER1_AVAILABLE
DEFINE_STATIC_PRESCALER_FUNCS(1)
#endif

#endif

