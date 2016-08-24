#ifndef COMMON_H_
#define COMMON_H_

#include "include/cef_base.h"

#include <string>
#include <list>

namespace cefpdf {

namespace constants {
    // cef-pdf version number
    const std::string version = "0.1.5";
    // Internal scheme
    const std::string scheme = "cefpdf";
    // Default page size
    const std::string pageSize = "A4";
    // Default character encoding
    const std::string encoding = "utf-8";
}

struct PageSize
{
    std::string name;
    int width, height;
};

struct PageMargin
{
    int type;
    int top, right, bottom, left;
};

enum struct PageOrientation {
    PORTRAIT, LANDSCAPE
};

extern std::list<PageSize> pageSizesMap;

std::string strtolower(std::string s);

} // namespace cefpdf

#endif // COMMON_H_
