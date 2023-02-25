#ifndef __SHAPES_LIB_INCLUDED_H__
#define __SHAPES_LIB_INCLUDED_H__

#ifdef _WIN32
 #if defined __MINGW32__ || defined __MINGW64__
  #include "__sys/win32/mingw/proto.h"
 #else

 #endif // __MINGW32__ || __MINGW64__
#else
 #include "__sys/linux/proto.h"
#endif // _WIN32

#endif // __SHAPES_LIB_INCLUDED_H__
