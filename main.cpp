#include "mbed.h"
//The 4 LED lights will go from dim to bright, then bright to dim one after another.
PwmOut ledPWM1(LED1);
PwmOut ledPWM2(LED2);
PwmOut ledPWM3(LED3);
PwmOut ledPWM4(LED4);


int main()
{
    
    ledPWM1.period(0.001f);
    ledPWM1 = 0.0f;
    ledPWM2.period(0.001f);
    ledPWM2 = 0.0f;
    ledPWM3.period(0.001f);
    ledPWM3 = 0.0f;
    ledPWM4.period(0.001f);
    ledPWM4 = 0.0f;
   
    while (true)
    {
        for (float val = 0.0f; val < 1.0f; val += 0.02f)
        {
            ledPWM1 = val;
            wait(0.05f);
        }
        for (float val = 1.0f; val > 0.0f; val -= 0.02f)
        {
            ledPWM1 = val;
            wait(0.05f);
        }
        wait(0.1f);

        for (float val = 0.0f; val < 1.0f; val += 0.02f)
        {
            ledPWM2 = val;
            wait(0.05f);
        }
        for (float val = 1.0f; val > 0.0f; val -= 0.02f)
        {
            ledPWM2 = val;
            wait(0.05f);
        }
        wait(0.1f);

        for (float val = 0.0f; val < 1.0f; val += 0.02f)
        {
            ledPWM3 = val;
            wait(0.05f);
        }
        for (float val = 1.0f; val > 0.0f; val -= 0.02f)
        {
            ledPWM3 = val;
            wait(0.05f);
        }
        wait(0.1f);

        for (float val = 0.0f; val < 1.0f; val += 0.02f)
        {
            ledPWM4 = val;
            wait(0.05f);
        }
        for (float val = 1.0f; val > 0.0f; val -= 0.02f)
        {
            ledPWM4 = val;
            wait(0.05f);
        }
        wait(0.1f);
    }
}