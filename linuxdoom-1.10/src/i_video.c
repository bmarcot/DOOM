// Emacs style mode select   -*- C++ -*-
//-----------------------------------------------------------------------------
//
// $Id:$
//
// Copyright (C) 1993-1996 by id Software, Inc.
// Copyright (C) 2013-2014 by Benoit Marcot
//
// This source is available for distribution and/or modification
// only under the terms of the DOOM Source Code License as
// published by id Software. All rights reserved.
//
// The source is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// FITNESS FOR A PARTICULAR PURPOSE. See the DOOM Source Code License
// for more details.
//
// $Log:$
//
// DESCRIPTION:
//	DOOM graphics stuff for X11, UNIX.
//
//-----------------------------------------------------------------------------

static const char
rcsid[] = "$Id: i_x.c,v 1.6 1997/02/03 22:45:10 b1 Exp $";

#include <stdlib.h>
#include <signal.h>

#include "doomstat.h"
#include "i_system.h"
#include "v_video.h"
#include "d_main.h"

#include "doomdef.h"

#include "b_stuff.h"

//
// I_ShutdownGraphics
//
void I_ShutdownGraphics(void)
{
    // FIXME:

}


//
// I_StartFrame
//
void I_StartFrame (void)
{
    // er?

}


//
// I_GetEvent
//
void I_GetEvent(void)
{
    // FIXME:
}


//
// I_StartTic
//
void I_StartTic (void)
{
    // FIXME:

}


//
// I_UpdateNoBlit
//
void I_UpdateNoBlit (void)
{
    // what is this?

}

//
// I_FinishUpdate
//
void I_FinishUpdate (void)
{
    static int	lasttic;
    int		tics;
    int		i;

    // draws little dots on the bottom of the screen
    if (devparm)
    {
	i = I_GetTime();
	tics = i - lasttic;
	lasttic = i;
	if (tics > 20) tics = 20;

	for (i=0 ; i<tics*2 ; i+=2)
	    screens[0][ (SCREENHEIGHT-1)*SCREENWIDTH + i] = 0xff;
	for ( ; i<20*2 ; i+=2)
	    screens[0][ (SCREENHEIGHT-1)*SCREENWIDTH + i] = 0x0;
    }
}


//
// I_ReadScreen
//
void I_ReadScreen (byte* scr)
{
    memcpy (scr, screens[0], SCREENWIDTH*SCREENHEIGHT);

}


//
// I_SetPalette
//
void I_SetPalette (byte* UNUSED(palette))
{
    // FIXME:

}


//
// I_InitGraphics
//
void I_InitGraphics(void)
{
    static int		firsttime=1;

    printf("I_InitGraphics\n");

    if (!firsttime)
	return;
    firsttime = 0;

    signal(SIGINT, (void (*)(int)) I_Quit);

    // allocate the video framebuffer
    screens[0] = (unsigned char *) malloc (SCREENWIDTH * SCREENHEIGHT);
}
