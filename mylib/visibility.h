#if defined(_WIN32) || defined(__CYGWIN__)
    #ifdef mylib_EXPORTS
        #ifdef __GNUC__
            #define MYLIB_EXPORT __attribute__((dllexport))
        #else
            #define MYLIB_EXPORT __declspec(dllexport)
        #endif
    #else
        #ifdef __GNUC__
            #define MYLIB_EXPORT __attribute__((dllimport))
        #else
            #define MYLIB_EXPORT __declspec(dllimport)
        #endif
    #endif
#else
    #if __GNUC__ >= 4
        #define MYLIB_EXPORT __attribute__((visibility("default")))
    #else
        #define MYLIB_EXPORT
    #endif
#endif
