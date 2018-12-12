#include <stdio.h>
#include "OwlEngine.h"
#include "Battlefield.h"

Battlefield *gBattlefield = nullptr;

void Init()
{
    gBattlefield = new Battlefield();
}

void Cleanup()
{    
    owlassert(gBattlefield);
    if (gBattlefield)
    {
        delete gBattlefield;
        gBattlefield = nullptr;
    }
}

void SimpleDemo()
{

}

int main()
{    
    printf("\nInitializing...");
    Init();
    
    printf("\nWorking...");
    SimpleDemo();

    printf("\nShutting down...");
    Cleanup();

    printf("\nPress Enter to exit");
    getchar();
    return 0;
}