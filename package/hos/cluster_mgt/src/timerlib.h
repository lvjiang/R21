/* 
 * Copyright (C) 2008
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111, USA.
 *
 * Author(s): Mauro Bisson
 */

/* 
 * This C module implements a simple timer library. 
 */

#ifndef TIMERLIB_H
#define TIMERLIB_H

typedef int 	TimerID;
typedef void 	*TimerArg;

extern TimerID scan_timer;
extern TimerID uprf_timer;
extern TimerID rfag_timer;

#define RECV_SCAN_INTERVAL_TIMER	60
#define GET_RADIO_INFO_TIMER		10
#define RSSI_AGING_TIMER			60*5

#define SIGSCAN		1
#define SIGUPRF		2
#define SIGRFAG		3

#define SIGNAL_STR(m)	\
				((SIGSCAN == m) ? "scan" :\
				(SIGUPRF == m) ? "radio_info" :\
				(SIGRFAG == m) ? "rssi_aging" : "unkown")


/*
 * Initializes the timer library. It is important that the calling thread and
 * any other thread in the process block the signal SIGALRM.
 *
 * Return: 1 in case of success; 0 otherwise.
 */
int timer_init();

/*
 * Tears down any data allocated for the library.
 */
void timer_destroy();

/*
 * Adds a timer to expire "sec" seconds + "usec" milliseconds after the
 * invocation. When the timer will expire, function "hndlr" will be executed
 * with arg "hndlr_arg". The id of the timer (>=0) is returned.
 *
 * Return: id>=0 in case of success; -1 in case of error.
 *
 * Remarks: sec and usec must define a future time relative to "now". If
 * one is negative or both equal zero the funtion will return -1. The
 * library don't manipulate in any way the address pointed by "hndlr_arg",
 * it is responsibility of the calling thread to free any  memory, if 
 * allocated (a good place is at the end of "hndlr" function ;).
 * There is no costraint about relative time definition, you can set a two
 * second timer as (sec,usec)=(2,0) or (sec,usec)=(0,2000000).
 * Since this library implementation do not rely on "sigaction()" syscall,
 * inside "hndlr" it is perfectly legal to call any not signal safe and 
 * pthread_* function. The only limitation is that timer_destroy() MUST
 * NOT be called inside hndlr.
 * Note that this fuction can be called inside "hndlr" to create 
 * "chain timers".
 */
int timer_add(long /*sec*/, long /*usec*/, void(* /*hndlr*/)(void *), 
	      void * /*hndlr_arg*/);

/*
 * Remove from the queue the timer of identifier "id", if it retured
 * from a previous succesful call to timer_add().
 *
 * Remarks: if "id" is a value not returned by timer_add() nothing happens.
 */
void timer_rem(int /*id*/, int isFree);

/*
 * Prints the content of the timer queue (do not use, it's for debug purpose).
 */
void timer_print();
void time_now();

#endif
