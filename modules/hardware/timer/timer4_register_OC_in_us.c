/*  
 *  Copyright Droids Corporation, Microb Technology, Eirbot (2006)
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
 *  Revision : $Id: timer4_register_OC_in_us.c,v 1.2 2009/03/15 21:51:19 zer0 Exp $
 *
 */

#include <stdint.h>
#include <string.h>

#include <aversive/timers.h>

#include <timer.h>
#include <timer_definitions.h>
#include <timer_intr.h>
#include <timer_config.h>


#if defined TIMER4A_ENABLED && defined SIG_OUTPUT_COMPARE4A
DEFINE_REGISTER_OC_INTR_IN_US(4,4A)
#endif

#if defined TIMER4B_ENABLED && defined SIG_OUTPUT_COMPARE4B
DEFINE_REGISTER_OC_INTR_IN_US(4,4B)
#endif

#if defined TIMER4C_ENABLED && defined SIG_OUTPUT_COMPARE4C
DEFINE_REGISTER_OC_INTR_IN_US(4,4C)
#endif

