#ifndef _WIEGANDOUT_H
#define _WIEGANDOUT_H

class WiegandOut{
  public:
    WiegandOut(int data0, int data1, bool debug = false);
    void begin(int pinD0, int pinD1);
    void send(uint64_t data, uint8_t bits, bool useFacilityCode);

  private:
    void sendD1();
    void sendD0();
    void createParity(uint64_t data, uint8_t bits, bool useFacilityCode);
    int _pinData0;
    int _pinData1;
    int _evenParity;
    int _oddParity;
    bool _debug = false;

    uint64_t createDataMask(uint8_t bits);
};

#endif // _WIEGANDOUT_H