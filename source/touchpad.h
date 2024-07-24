#ifndef __TOUCHPAD__
#define __TOUCHPAD__

#define TOUCHPAD_DELAY	45

extern touchpad_report_t* tpreport;

void initTP();
void endTP();
void readTP();
int getTouchedZone5();
int getTouchedZone4();
int getTouchedZone9();
int getX_Velocity();
int getY_Velocity();
int isTPTouched();
int isTPPressed();
int isTouchPad();

#endif
