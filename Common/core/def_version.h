#ifndef __AGS_CN_CORE__DEFVERSION_H
#define __AGS_CN_CORE__DEFVERSION_H

#define ACI_VERSION_STR      "3.4.1.15"
#if defined (RC_INVOKED) // for MSVC resource compiler
#define ACI_VERSION_MSRC_DEF  3,4,1,15
#endif

#ifdef NO_MP3_PLAYER
#define SPECIAL_VERSION "NMP"
#else
#define SPECIAL_VERSION ""
#endif

#define ACI_COPYRIGHT_YEARS "2011-2018"

#endif // __AGS_CN_CORE__DEFVERSION_H
