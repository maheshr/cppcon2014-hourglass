#ifndef __TEAM_API_H__
#define __TEAM_API_H__

#include "visibility.h"

// Team C API
#ifdef __cplusplus
extern "C" {
#endif

typedef struct team *team_t;

MYLIB_EXPORT
team_t team_construct(const char* name);

MYLIB_EXPORT
void team_destruct(team_t obj);

MYLIB_EXPORT
void team_add(team_t obj, const char* name);

MYLIB_EXPORT
int team_count(team_t obj);

#ifdef __cplusplus
}
#endif

#endif // __TEAM_API_H__
