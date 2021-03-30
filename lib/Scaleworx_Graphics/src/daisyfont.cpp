#include <Arduino.h>
#include "daisyfont.h"

static const uint8_t PROGMEM glyphs[] = {
  1,1,1,1,0, // Space
  0b00101110,1,0,  // !
  0b00000110,1,
  0b00000110,1,0, // "
  0b00010100,
  0b00111110,
  0b00010100,
  0b00111110,
  0b00010100,1,0,  // #
  0b00100100,
  0b00101010,
  0b01111111,
  0b00101010,
  0b00010010,1,0, // $
  0b00110010,
  0b00001000,
  0b00001000,
  0b00100110,1,0,  // %
  0b00111110,
  0b00111110,
  0b00111110,1,0,  // &
  0b00000110,1,0,  // '
  0b00011100,
  0b00100010,1,0,  // (
  0b00100010,
  0b00011100,1,0,  // )
  0b00010100,
  0b00001000,
  0b00010100,1,0,  // *
  0b00001000,
  0b00011100,
  0b00001000,1,0,  // +
  0b01000000,
  0b00110000,1,0,  // ,
  0b00001000,
  0b00001000,
  0b00001000,1,0,  // -
  0b00100000,1,0,  // .
  0b00000110,
  0b00001000,
  0b00110000,1,0,  // /
  0b00111110,
  0b00100010,
  0b00111110,1,0,  // 0
  1,1,0b00111110,1,0,  // 1
  0b00111010,
  0b00101010,
  0b00101110,1,0,  // 2
  0b00101010,
  0b00101010,
  0b00111110,1,0,  // 3
  0b00001110,
  0b00001000,
  0b00111110,1,0,  // 4
  0b00101110,
  0b00101010,
  0b00111010,1,0,  // 5
  0b00111110,
  0b00101010,
  0b00111010,1,0,  // 6
  0b00000010,
  0b00000010,
  0b00111110,1,0,  // 7
  0b00111110,
  0b00101010,
  0b00111110,1,0,  // 8
  0b00101110,
  0b00101010,
  0b00111110,1,0,  // 9
  0b00010100,1,0,  // :
  0b01000000,
  0b00110100,1,0,  // ;
  0b00001000,
  0b00010100,
  0b00100010,1,0,  // <
  0b00010100,
  0b00010100,
  0b00010100,1,0,  // =
  0b00100010,
  0b00010100,
  0b00001000,1,0,  // >
  0b00000010,
  0b01011010,
  0b00000100,1,0,  // ?
  0b00111100,
  0b01000010,
  0b01011010,
  0b01010010,
  0b01011100,1,0,  // @
  0b00111100,
  0b00001010,
  0b00111100,1,0,  // A
  0b00111110,
  0b00101010,
  0b00010100,1,0,  // B
  0b00011100,
  0b00100010,
  0b00100010,1,0,  // C
  0b00111110,
  0b00100010,
  0b00011100,1,0,  // D
  0b00111110,
  0b00101010,
  0b00100010,1,0,  // E
  0b00111110,
  0b00001010,
  0b00000010,1,0,  // F
  0b00011100,
  0b00100010,
  0b00111010,1,0,  // G
  0b00111110,
  0b00001000,
  0b00111110,1,0,  // H
  0b00100010,
  0b00111110,
  0b00100010,1,0,  // I
  0b00010000,
  0b00100010,
  0b00011110,1,0,  // J
  0b00111110,
  0b00001000,
  0b00010100,
  0b00100010,1,0,  // K
  0b00111110,
  0b00100000,
  0b00100000,1,0,  // L
  0b00111110,
  0b00000010,
  0b00001100,
  0b00000010,
  0b00111110,1,0,  // M
  0b00111110,
  0b00000110,
  0b00011000,
  0b00111110,1,0,  // N
  0b00011100,
  0b00100010,
  0b00100010,
  0b00011100,1,0,  // O
  0b00111110,
  0b00001010,
  0b00001110,1,0,  // P
  0b00011100,
  0b00100010,
  0b00110010,
  0b00101100,1,0,  // Q
  0b00111110,
  0b00001010,
  0b00110100,1,0,  // R
  0b00100100,
  0b00101010,
  0b00010010,1,0,  // S
  0b00000010,
  0b00111110,
  0b00000010,1,0,  // T
  0b00111110,
  0b00100000,
  0b00111110,1,0,  // U
  0b00001110,
  0b00110000,
  0b00001110,1,0,  // V
  0b00001110,
  0b00110000,
  0b00001100,
  0b00110000,
  0b00001110,1,0,  // W
  0b00110110,
  0b00001000,
  0b00110110,1,0,  // X
  0b00000110,
  0b00111000,
  0b00000110,1,0,  // Y
  0b00110010,
  0b00101010,
  0b00100110,1,0,  // Z
  0b00111110,
  0b00100010,1,0,  // [
  0b00110000,
  0b00001000,
  0b00000110,1,0,  // \- 
  0b00100010,
  0b00111110,1,0,  // ]
  0b00000100,
  0b00000010,
  0b00000100,1,0,  // ^
  0b00100000,
  0b00100000,
  0b00100000,1,0,  // _
  0b00000010,
  0b00000100,1,0,  // `
  0b00010000,
  0b00101000,
  0b00011000,
  0b00100000,1,0,  // a
  0b00111110,
  0b00101000,
  0b00010000,1,0,  // b
  0b00010000,
  0b00101000,
  0b00101000,1,0,  // c
  0b00010000,
  0b00101000,
  0b00111110,1,0,  // d
  0b00111000,
  0b01010100,
  0b01011000,1,0,  // e
  0b00111100,
  0b00001010,
  0b00000010,1,0,  // f
  0b00010000,
  0b10101000,
  0b01111000,1,0,  // g
  0b00111110,
  0b00001000,
  0b00110000,1,0,  // h
  0b00110100,1,0,  // i
  0b10000000,
  0b10000000,
  0b01110000,1,0,  // j
  0b00111110,
  0b00010000,
  0b00101000,1,0,  // k
  0b00000010,
  0b00111110,1,0,  // l
  0b00111000,
  0b00001000,
  0b00110000,
  0b00001000,
  0b00110000,1,0,  // m
  0b00111000,
  0b00001000,
  0b00110000,1,0,  // n
  0b00111000,
  0b00101000,
  0b00111000,1,0,  // o
  0b11111000,
  0b00101000,
  0b00010000,1,0,  // p
  0b00010000,
  0b00101000,
  0b11111000,1,0,  // q
  0b00110000,
  0b00001000,
  0b00001000,1,0,  // r
  0b00100000,
  0b00111000,
  0b00001000,1,0,  // s
  0b00000100,
  0b00111110,
  0b00000100,1,0,  // t
  0b00111000,
  0b00100000,
  0b00111000,1,0,  // u
  0b00011000,
  0b00100000,
  0b00011000,1,0,  // v
  0b00011100,
  0b00100000,
  0b00011000,
  0b00100000,
  0b00011100,1,0,  // w
  0b00101000,
  0b00010000,
  0b00101000,1,0,  // x
  0b10011000,
  0b10100000,
  0b01111000,1,0,  // y
  0b00001000,
  0b00111000,
  0b00100000,1,0,  // z
  0b00001000,
  0b00110110,
  0b01000001,1,0,  // {
  0b00111110,1,0,  // |
  0b01000001,
  0b00110110,
  0b00001000,1,0,  // }
  0b00000110,
  0b00000010,
  0b00000100,
  0b00000110,1,0,  // ~
};
DaisyFontClass daisyFont(' ',glyphs);