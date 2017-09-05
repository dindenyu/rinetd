/* Copyright © 1997—1999 Thomas Boutell <boutell@boutell.com>
                         and Boutell.Com, Inc.
             © 2003—2017 Sam Hocevar <sam@hocevar.net>

   This software is released for free use under the terms of
   the GNU Public License, version 2 or higher. NO WARRANTY
   IS EXPRESSED OR IMPLIED. USE THIS SOFTWARE AT YOUR OWN RISK. */

#pragma once

extern int match(char const *s, char const *p);
extern int matchNoCase(char const *s, char const *p);
extern int matchBody(char const *s, char const *p, int nocase);

