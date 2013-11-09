// LxTx.h
//
// LightwaveRF 434MHz tx interface for Arduino
// 
// Author: Bob Tidey (robert@tideys.net)

#include <Arduino.h>

extern void lwtx_setup(int pin, byte repeats, byte invert, int uSec);

extern void lwtx_setTickCounts( byte lowCount, byte highCount, byte trailCount, byte gapCount);

extern void lwtx_settranslate(boolean txtranslate);

extern boolean lwtx_free();

extern void lwtx_send(byte* msg);
