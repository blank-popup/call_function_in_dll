#ifdef DLLTEST_EXPORT
#define DLLTEST __declspec(dllexport)
#else
#define DLLTEST __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLLTEST int add(int x, int y);

#ifdef __cplusplus
}
#endif