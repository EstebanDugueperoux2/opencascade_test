#pragma once

#ifdef _WIN32
  #define opencascade_test_EXPORT __declspec(dllexport)
#else
  #define opencascade_test_EXPORT
#endif

opencascade_test_EXPORT void opencascade_test();
