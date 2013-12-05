#ifndef MISC_UNUSED_H
#define MISC_UNUSED_H

#ifdef __GNUC__
#  define UNUSED(x) unused_ ## x __attribute__((__unused__))
#else
#  define UNUSED(x) unsued_ ## x
#endif

#endif /* !MISC_UNUSED_H */
