#include "BaseApplication.hpp"

namespace MyEngine{
    BaseApplication g_App;
    IApplication* g_pApp = &g_App;
}