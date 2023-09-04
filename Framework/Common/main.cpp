#include <stdio.h>
#include "IApplication.hpp"

using namespace MyEngine;

namespace MyEngine{
    extern IApplication* g_pApp;
}

int main(int argc, char** argv) {
    int ret;
    
    if ((ret = g_pApp->Initialize()) != 0) {
        printf("Application initialize failed!\n");
        return ret;
    }

    while (!g_pApp->IsQuit())
    {
        g_pApp->Tick();
    }
    
    g_pApp->Finalize();

    return 0;
}