#include "BaseApplication.hpp"

int MyEngine::BaseApplication::Initialize()
{
    m_bQuit = false;

    return 0;
}

void MyEngine::BaseApplication::Finalize()
{

}

void MyEngine::BaseApplication::Tick()
{

}

bool MyEngine::BaseApplication::IsQuit()
{
    return m_bQuit;
}