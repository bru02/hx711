#pragma once

#include <inttypes.h>

class HX711
{

private:
  uint8_t mGainBits;
  float mScale;
  int32_t mOffset;
  int32_t mLatestData;
  int32_t mMedianData;
  int64_t mSum;

  uint8_t mClockPin;
  uint8_t mDataPin;
  uint8_t mTimes;
  bool mReading;
  bool mIsMedian;

public:
  bool mDataReady;
  HX711(uint8_t clockPin, uint8_t dataPin);
  void setGain(uint8_t gain);
  void read();
  int32_t readAverage();
  int32_t readMedian();
  int32_t getRawValue();
  int32_t getRawValueMedian();
  float getUnits(uint8_t times = 10);
  float getUnitsMedian(uint8_t times = 10);
  void tare(uint8_t times = 10);
  void setScale(float scale);
  void setOffset(int32_t offset);
  void powerDown();
  void powerUp();
  int32_t getOffset();
  float getScale();
  int32_t getLatestData();

};
