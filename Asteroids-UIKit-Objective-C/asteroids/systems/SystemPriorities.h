
#ifndef Ash_SystemPriorities_h
#define Ash_SystemPriorities_h

typedef enum
{
    preUpdate = 1,
    update,
    movement,
    resolveCollisions,
    stateMachines,
    animate,
    render
}
SystemPriorities;

#endif
