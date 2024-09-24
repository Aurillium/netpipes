#include <stdlib.h>
#include "items.h"

char* item_type_to_str(item_type_t item_type) {
    switch(item_type) {
        case AIR:
            return "⬛️";
        case PIPE:
            return "🧊";
        case SOURCE:
            return "🌊";
        case SINK:
            return "💧";
        default:
            return "";
    }
}

char* item_type_to_name(item_type_t item_type) {
    switch(item_type) {
        case AIR:
            return "Air";
        case SOURCE:
            return "Source";
        case SINK:
            return "Sink";
        default:
            return "?";
    }
}
