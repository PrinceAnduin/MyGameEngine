#pragma once
#include "IApplication.hpp"

namespace MyEngine{
    class BaseApplication: implements IApplication{
    public:
        virtual int Initialize();
        virtual void Finalize();
        virtual void Tick();
        virtual bool IsQuit();

    protected:
        // Flag if quit the main loop
        bool m_bQuit;
    };
}