#include "./logging.h"


namespace DX_LOGGING 
{

    static const void DX_Print(std::string value, std::string title = "")
    {
        if (title != "")
            std::cout << title << ": ";

        std::cout << value << "\n";
    }

    static const void DX_Print(int value, std::string title = "")
    {
        if (title != "")
            std::cout << title << ": ";

        std::cout << value << "\n";
    }

    static const void DX_Print(float value, std::string title = "")
    {
        if (title != "")
            std::cout << title << ": ";
        std::cout << value << "\n";
    }

    static const void DX_Print(double value, std::string title = "")
    {
        if (title != "")
            std::cout << title << ": ";

        std::cout << value << "\n";
    }

    static const void DX_Print(long value, std::string title = "")
    {
        if (title != "")
            std::cout << title << ": ";

        std::cout << value << "\n";
    }


    template <typename T>
    static const void DX_Print(std::vector<T> values, std::string title = "")
    {
        if (title != "")
            std::cout << title << ": ";

        std::cout << "[";

        for (T val : values)
        {
            std::cout << val << ", ";
        }

        std::cout << "]" << std::endl;

    }
}