/* from 500D */
/* requires UILock.h and NotifyGUIEvent.h */

    { { 0x06, 0x05, 0x03, 0x16, ARG0, 0x00 }, .description = "PROP_BATTERY_CHECK", .out_spells = {
        { 0x06, 0x05, 0x03, 0x16, 0x00, 0x00 },
        { 0 } } },

    { { 0x08, 0x06, 0x01, 0x23, 0x00, ARG0, 0x00 }, .description = "PROP_CARD1_STATUS", .out_spells = { /* spell #8 */
        { 0x08, 0x06, 0x01, 0x23, 0x00, ARG0, 0x00 },
        { 0 } } },

    { { 0x08, 0x06, 0x01, 0x24, 0x00, ARG0, 0x00 }, .description = "PROP_CARD2_STATUS", .out_spells = { /* spell #8 */
        { 0x08, 0x06, 0x01, 0x24, 0x00, ARG0, 0x00 },
        { 0 } } },
