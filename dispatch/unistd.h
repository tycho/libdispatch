/*
Credit: 

   David Chisnall
   http://comments.gmane.org/gmane.comp.desktop.etoile.devel/1556

*/

#ifdef __block
#       undef __block
#       define __block __glibc_block
#       include_next "unistd.h"
#       undef __block
#       define __block __attribute__((__blocks__(byref)))
#else
#       include_next "unistd.h"
#endif
