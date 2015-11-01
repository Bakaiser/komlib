/* kominterface.h -- interface of the komlib kom file I/O library
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
//Now the issue is making the eports in the Definition file be recognized as valid exports and so it does not error or give any Warnings
//This has to be done just right so that Every Version of MSVC or Visual Studio can Compile the DLL without problems AKA no Errors/Warnings.
//Same is True for people what use the Borland C++ Builder Compiler.

#ifndef KOMINTERFACE_H
#define KOMINTERFACE_H
#ifdef __cplusplus
extern "C" {
#endif

#define KOMLIB_VERSION "1.3.0"
#define KOMLIB_VERNUM 0x1300
#define KOMLIB_VER_MAJOR 1
#define KOMLIB_VER_MINOR 3
#define KOMLIB_VER_REVISION 0
#define KOMLIB_VER_SUBREVISION 0
#endif

#ifdef __cplusplus
}
#endif /* KOMINTERFACE_H */