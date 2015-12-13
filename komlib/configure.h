/* kominterface.c -- interface of the komlib kom file I/O library
  version 1.3.0, October 31st, 2015

  Copyright (C) 2015 Sean Hunt

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
  4. You may Add your Name to the Copyright line above when you help get
     things working right.
  5. Do not Remove my name from the Above Copyright line though.
  6. Do not Attempt to make this file able to decrypt Elsword's lua files
     without the authors consent.
  7. If your Elsword Account gets banned for use of hacks by you making it
     able to Decrypt the lua files the authors are not held responsible for
     your (the user/editor) stupidity.
  8. This uses code that is originally from the edited version of the python
     unpack/pack *.py files that require Python 2.7.x  and does not work in 
     Python 3.x however it cannot decrypt the lua files it can however allow
     you to open the *.x, *.y files in PMD/PMX Editor. The other files. *.tga,
     *.dds files can be Edited as well. Some kom files however, cannot be 
     modified at all.
*/

//supports KoG GC Team MASSFILE v1.3

#ifndef CONFIGURE_H
#define CONFIGURE_H
#  define KOM_DecompressFile    KOM_DecompressFile
#  define KOM_CompressFile      KOM_CompressFile
#ifndef KEXTERN
#  define KEXTERN extern
#endif
#ifndef KEXPORT
#  define KEXPORT
#endif

#ifndef OF /* function prototypes */
#  ifdef STDC
#    define OF(args)  args
#  else
#    define OF(args)  ()
#  endif
#endif
#endif /* CONFIGURE_H */