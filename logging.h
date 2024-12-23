#pragma once
#include <iostream>
#include <vector>
#include <variant>

typedef std::variant<std::string, int, float, double, long> DX_Printable_Types;

namespace DX_LOGGING
{  
    static const void DX_Print(std::string value);
    static const void DX_Print(std::string value[]);

    static const void DX_Print(int value);
    static const void DX_Print(float value);
    static const void DX_Print(double value);
    static const void DX_Print(long value);

    template <typename T>
    static const void DX_Print(std::vector<T> vec);
}

#ifdef DEBUG 
#define DebugPrint(x) DX_LOGGING::DX_Print(x)
#else
#define DebugPrint(x)
#endif

