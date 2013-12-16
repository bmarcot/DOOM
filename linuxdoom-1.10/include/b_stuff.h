/**
 * Copyright (c) 2013-2014 Benoit Marcot
 *
 * This file is part of u-DOOM.
 *
 * U-DOOM IS FREE SOFTWARE: YOU CAN REDISTRIBUTE IT AND/OR MODIFY
 * IT UNDER THE TERMS OF THE GNU GENERAL PUBLIC LICENSE AS PUBLISHED BY
 * THE FREE SOFTWARE FOUNDATION, EITHER VERSION 3 OF THE LICENSE, OR
 * (AT YOUR OPTION) ANY LATER VERSION.
 *
 * FOOBAR IS DISTRIBUTED IN THE HOPE THAT IT WILL BE USEFUL,
 * BUT WITHOUT ANY WARRANTY; WITHOUT EVEN THE IMPLIED WARRANTY OF
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.  SEE THE
 * GNU GENERAL PUBLIC LICENSE FOR MORE DETAILS.
 *
 * YOU SHOULD HAVE RECEIVED A COPY OF THE GNU GENERAL PUBLIC LICENSE
 * ALONG WITH FOOBAR.  IF NOT, SEE <HTTP://WWW.GNU.ORG/LICENSES/>.
 *
 * -----------------------------------------------------------------------------
 *
 * This file contains stuff related to u-DOOM port, i.e. things not present in
 * the legacy source code and used to build u-DOOM.
 *
 */

#ifndef B_STUFF_H
#define B_STUFF_H

/*
 * this macro comes from 'ideasman42':
 *   http://stackoverflow.com/questions/3599160/unused-parameter-warnings-in-c-code
 */
#ifdef __GNUC__
#  define UNUSED(x) unused_ ## x __attribute__((__unused__))
#else
#  define UNUSED(x) unsued_ ## x
#endif

#endif /* !B_STUFF_H */
