declare class HX711 {
  constructor(clockPin: number, dataPin: number, gain?: number)

  read(): number
  setScale(scale: number): void
  setOffset(offset: number): void
  tare(times?: number): void
  setGain(gain?: number): void
  getUnits(times?: number): number
  getOffset(): number
  getScale(): number
}

export = HX711
