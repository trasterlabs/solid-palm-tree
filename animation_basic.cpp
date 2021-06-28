#include "animation_basic.h"

/**
 * Pequeño programa que sirve para generar la secuencia que vamos a utilizar a la hora de crear Ux.
 * Animación 01
 * |<-----OK----->|
 * |<-----OK[---->|
 * |<-----OK-[--->|
 * |<-----OK--[-->|
 * |<-----OK---[->|
 * |<-----OK----[>|
 */
char * prepareTheAnimation01WithFrame ( unsigned char frame )
{
    static char buffer[] = "|<-----OK----->|";
    if ( frame >= 1 && frame <= 5 )
    {
        buffer[ frame + 8 ] = '[';
    }
    if ( frame >= 2 && frame <= 6 )
    {
        buffer[ frame + 7 ] = '-';
    }
    return buffer;
}

/**
 * Pequeño programa que sirve para generar la secuencia que vamos a utilizar a la hora de crear Ux.
 * Animación 01
 * |<-----OK----->|
 * |<----]OK----->|
 * |<---]-OK----->|
 * |<--]--OK----->|
 * |<-]---OK----->|
 * |<]----OK----->|
 */
char * prepareTheAnimation02WithFrame ( unsigned char frame )
{
    static char buffer[] = "|<-----OK----->|";
    if ( frame >= 0 && frame <= 4 )
    {
        buffer[ 7 - frame - 1 ] = ']';
    }
    if ( frame >= 1 && frame <= 5 )
    {
        buffer[ 7 - frame ] = '-';
    }
    return buffer;
}
