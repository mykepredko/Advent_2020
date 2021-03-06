/*
 ============================================================================
 Name        : Advent_2020_Day_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
#define SEATWIDTH 12
struct seatStruct {
  int value;
  char seatCode[SEATWIDTH];
} ;
struct seatStruct boardingPasses[] = {
#ifdef doTest
    "BFFFBBFRRR"
  , "FFFBBBFRRR"
  , "BBFFBBFRLL"
  , "*"
#else
    { 0, "BFBFFFFLLL" }
  , { 0, "BBFBBFBRLL" }
  , { 0, "BFBBFFFRRR" }
  , { 0, "FBFFBBBLLL" }
  , { 0, "FFBBFBBRLL" }
  , { 0, "BBBFFFFLRL" }
  , { 0, "BFBBBFBRRR" }
  , { 0, "FBBFFFBLRL" }
  , { 0, "FFBFBBFLLR" }
  , { 0, "FBFFFFBLRL" }
  , { 0, "BBFFBBFRLL" }
  , { 0, "BBFBBBBLLR" }
  , { 0, "FFBBBBFRLR" }
  , { 0, "BBFFBFFRLR" }
  , { 0, "BFFBBFFRRL" }
  , { 0, "BBFBBBFLLR" }
  , { 0, "FBFBBBBRRL" }
  , { 0, "BFFFBFFLRL" }
  , { 0, "FBFFFBFRLL" }
  , { 0, "FBBBFFBLRR" }
  , { 0, "FFFBFBBRLR" }
  , { 0, "FBBFBBFLLR" }
  , { 0, "FBFBFFFLRL" }
  , { 0, "BFFBFBFLLR" }
  , { 0, "BBFBFBBRRL" }
  , { 0, "BFFBBFBRLR" }
  , { 0, "FBFBFFFRRL" }
  , { 0, "BFBFFBBRRL" }
  , { 0, "FBFBFBFLLL" }
  , { 0, "BFFBFFBRRL" }
  , { 0, "FFBBBBBRRL" }
  , { 0, "FFFBFBFRLR" }
  , { 0, "BBFFFBBLRL" }
  , { 0, "BFBFBFFRLL" }
  , { 0, "BFBFFFBRLR" }
  , { 0, "FBBBFFFRRR" }
  , { 0, "BBFFFBFRLL" }
  , { 0, "FBBBFBFRLL" }
  , { 0, "FFBBBFFLRR" }
  , { 0, "FBFBBFBLRL" }
  , { 0, "FBBBBBFLLR" }
  , { 0, "FBFFBBBLRL" }
  , { 0, "FFFBBFFRRL" }
  , { 0, "FBBBFFFRLR" }
  , { 0, "BBFBFFFRLR" }
  , { 0, "BBFBBFBLLL" }
  , { 0, "FBFFBBBRRL" }
  , { 0, "BFFFFBFRRR" }
  , { 0, "FBBFFBFLRR" }
  , { 0, "FBFBBBFLRL" }
  , { 0, "BFBBBBBRRL" }
  , { 0, "BBFFFFBLRL" }
  , { 0, "FBFFFBFLLL" }
  , { 0, "FFFBBFFLLR" }
  , { 0, "FBBBFBFLRR" }
  , { 0, "BBBFFBFRRL" }
  , { 0, "BFBFFFFRLR" }
  , { 0, "FFBFFFBRLR" }
  , { 0, "FBFFBFBRLL" }
  , { 0, "FBBFFFFRLL" }
  , { 0, "FFFBBFBRRR" }
  , { 0, "FBBBBFFLRR" }
  , { 0, "BFBBBFBRLR" }
  , { 0, "BFFFFFFRRR" }
  , { 0, "FFBBBBFRRR" }
  , { 0, "BFFBFBFRRL" }
  , { 0, "BFFBFFFRLR" }
  , { 0, "BBFFBFBLRR" }
  , { 0, "FBFFFBBLLL" }
  , { 0, "FBFFFFFRLR" }
  , { 0, "BFBBFBFLRR" }
  , { 0, "FBBBBBBLRL" }
  , { 0, "BFFFFBBLRR" }
  , { 0, "BFFBFFFRRR" }
  , { 0, "FBFFFBFLRL" }
  , { 0, "BFBBFFBLRR" }
  , { 0, "BBFBBBBLLL" }
  , { 0, "BBFBBBFRRL" }
  , { 0, "FBBBBBBRLR" }
  , { 0, "BFFBFBFLRR" }
  , { 0, "BFFBFFFLLR" }
  , { 0, "FBBBBBFLRL" }
  , { 0, "FBFFFBFRRL" }
  , { 0, "FFBBBBFRRL" }
  , { 0, "BFBBBBBRLR" }
  , { 0, "FBBBBBFRRL" }
  , { 0, "FFBFBFFLLL" }
  , { 0, "BBBFFFFRRL" }
  , { 0, "BBFBBFBRRR" }
  , { 0, "BFBFFFFRLL" }
  , { 0, "FBFFFFFLLR" }
  , { 0, "FFFBBFFLRL" }
  , { 0, "FBFFBFFLRR" }
  , { 0, "FBFFBBFRLR" }
  , { 0, "FFBBBFBLLR" }
  , { 0, "BFFFFBFLRR" }
  , { 0, "BBFBFBFRRR" }
  , { 0, "FBBFBBBLLL" }
  , { 0, "FBBFBFBLLL" }
  , { 0, "FBBBFFBLRL" }
  , { 0, "BBBFFBFRRR" }
  , { 0, "FBBBFBFLRL" }
  , { 0, "FBFFFBFRRR" }
  , { 0, "FBFFBFBRRR" }
  , { 0, "FFBBFFBRLL" }
  , { 0, "BFBFBFBLLR" }
  , { 0, "BBFFFFBRRR" }
  , { 0, "FBBBBBBLLR" }
  , { 0, "FBBBBFFRLR" }
  , { 0, "BBFBBFFLRL" }
  , { 0, "BFBBFBFLLR" }
  , { 0, "FBFFFFFRLL" }
  , { 0, "FFBBFFFLLR" }
  , { 0, "BBFFFBFRRR" }
  , { 0, "BFBBBFFLLR" }
  , { 0, "BBFFFFBRLR" }
  , { 0, "FFBFBBFRLR" }
  , { 0, "BFBFFFBLLL" }
  , { 0, "FBFFBFFLLL" }
  , { 0, "FBBBFBBRLR" }
  , { 0, "BBFBFFFLLR" }
  , { 0, "FBFFFBBRLR" }
  , { 0, "BFFBFBBLLL" }
  , { 0, "BFFBBFFLLR" }
  , { 0, "FBBFFBBRLR" }
  , { 0, "BBFBFFBRLL" }
  , { 0, "FBFBBBFRRL" }
  , { 0, "BFBBBFBLLR" }
  , { 0, "BBFFBBBRLL" }
  , { 0, "BBBFFFBLRL" }
  , { 0, "BBFBFFBRLR" }
  , { 0, "BFFBBBFRRR" }
  , { 0, "FFFBFBBRLL" }
  , { 0, "FBFBFBBRLL" }
  , { 0, "BFFFFFBRLR" }
  , { 0, "FBFFBBBRRR" }
  , { 0, "FBFFBBFLRL" }
  , { 0, "BFFFBBBRLL" }
  , { 0, "FBBBBFFLLL" }
  , { 0, "BBFBFFFRRR" }
  , { 0, "BFBFBBFLLL" }
  , { 0, "FFBBFBFRRL" }
  , { 0, "FFFBBBBRLR" }
  , { 0, "BFFBBBBRLL" }
  , { 0, "FFBFBBFRRL" }
  , { 0, "FBFBFBFRLL" }
  , { 0, "BBBFFFBRRL" }
  , { 0, "BBBFFBFRLR" }
  , { 0, "FBFBFBFLLR" }
  , { 0, "BBFBBFFRLL" }
  , { 0, "FBFBFFFLLR" }
  , { 0, "BBFBFBFRRL" }
  , { 0, "BFFBBFBRRL" }
  , { 0, "FFBFFBFRLR" }
  , { 0, "BFFBBFBRRR" }
  , { 0, "FFBBFFBRRL" }
  , { 0, "BFFFFBBRRL" }
  , { 0, "FBBBBFFRLL" }
  , { 0, "FBBBFFBRRR" }
  , { 0, "FBBFFBFLLL" }
  , { 0, "BBBFFBFRLL" }
  , { 0, "FFFBBFBLLR" }
  , { 0, "BFFBBFFLRR" }
  , { 0, "BFBFBFFLLL" }
  , { 0, "BFBFFBBLRL" }
  , { 0, "FFFBBFBLRR" }
  , { 0, "BBFFBFBLLL" }
  , { 0, "FBBBFBFRRL" }
  , { 0, "BFBBBBBLLR" }
  , { 0, "BBFBFBBLLL" }
  , { 0, "FFBFBFFLRR" }
  , { 0, "BFFFFFFLLR" }
  , { 0, "BFBFBFFRRL" }
  , { 0, "BFBFBBFLLR" }
  , { 0, "FBBBBFFLLR" }
  , { 0, "FFBBFFBLLL" }
  , { 0, "BBFFBFBRRR" }
  , { 0, "FFFBBFBLRL" }
  , { 0, "FBFBFFBLRL" }
  , { 0, "BFBBBBBLLL" }
  , { 0, "BFFFFBFRRL" }
  , { 0, "FBFFFFFLRL" }
  , { 0, "BFFFBFBLRL" }
  , { 0, "BFFBFBFLLL" }
  , { 0, "BBFBBBFRRR" }
  , { 0, "FBFBFFBLRR" }
  , { 0, "FBFBBBBRLL" }
  , { 0, "BBFFFFFLRL" }
  , { 0, "FBBFFFBRRR" }
  , { 0, "FBFFFBBRLL" }
  , { 0, "BFFFBFFLLL" }
  , { 0, "BFFBBFFLRL" }
  , { 0, "FFBFFFBLLL" }
  , { 0, "BFBFBBBLLL" }
  , { 0, "FBBFBFBLRR" }
  , { 0, "FBFFBFFLLR" }
  , { 0, "FBFFBBFRRR" }
  , { 0, "BBFFFBFLLR" }
  , { 0, "BBFBBFBLRL" }
  , { 0, "FBFBBBFRRR" }
  , { 0, "BBFFFFBLLR" }
  , { 0, "FFBFBFBLRL" }
  , { 0, "FFBBBBBLLR" }
  , { 0, "FBFBFBBLRR" }
  , { 0, "FFBBBFFRLL" }
  , { 0, "FBBFBFBRLL" }
  , { 0, "BBFBFFBRRL" }
  , { 0, "BFBFFBFLRR" }
  , { 0, "BFBFFBBRLR" }
  , { 0, "FBBFFFFRRL" }
  , { 0, "FBFFFFFLLL" }
  , { 0, "FBFBBFBRLR" }
  , { 0, "BBFBBFBLRR" }
  , { 0, "BFBBBFFRLR" }
  , { 0, "FBFFBBBLRR" }
  , { 0, "FBFBFBBRRL" }
  , { 0, "BBFFBBFLRL" }
  , { 0, "BBFFFFBLRR" }
  , { 0, "FFBBFFBLLR" }
  , { 0, "BFBBFBBLRR" }
  , { 0, "BBFBFBBRLL" }
  , { 0, "BBFFFBFLLL" }
  , { 0, "FBBFBBBRRR" }
  , { 0, "BFBFBBFRLL" }
  , { 0, "FFBBFFBLRL" }
  , { 0, "FFFBBBFRRR" }
  , { 0, "BFBFFFBLRR" }
  , { 0, "BBFBFBBRRR" }
  , { 0, "BFBFFBBLLR" }
  , { 0, "BFFFBBBRLR" }
  , { 0, "FFBBBBBRLL" }
  , { 0, "FFFBBFBLLL" }
  , { 0, "FBFBBBBLRR" }
  , { 0, "FFBFFBBRLL" }
  , { 0, "BFBBBBFLLL" }
  , { 0, "BFFFBFFRLL" }
  , { 0, "BBFFFBFLRR" }
  , { 0, "BFBFFFFLRR" }
  , { 0, "BFBFBBBRLR" }
  , { 0, "BBFBBBFLRL" }
  , { 0, "FBBFFFFLLR" }
  , { 0, "FFFBBBBLLL" }
  , { 0, "BBBFFBFLLL" }
  , { 0, "FBFFBBBRLL" }
  , { 0, "FBFBFFFLLL" }
  , { 0, "FBBFFBFLLR" }
  , { 0, "BFBFBBFRRL" }
  , { 0, "BFFFFBBRLL" }
  , { 0, "FBFBFFBLLL" }
  , { 0, "BBFFFFFLLL" }
  , { 0, "FFBBBBFLLR" }
  , { 0, "FBFBBBFLLR" }
  , { 0, "BFBBFFBRRL" }
  , { 0, "FBBFFBBRLL" }
  , { 0, "BFBFFFFLLR" }
  , { 0, "BBFBFFFLRL" }
  , { 0, "BFFFBFBLRR" }
  , { 0, "FBBFBBFRRR" }
  , { 0, "FFBFBFFRRL" }
  , { 0, "BBFFFBBLLR" }
  , { 0, "BFBFBFFLRL" }
  , { 0, "BFBFFFBLRL" }
  , { 0, "FBFBBBFLLL" }
  , { 0, "FBBFFBBLLL" }
  , { 0, "BBBFFBFLLR" }
  , { 0, "BFFFBBFLRL" }
  , { 0, "BFFFBFFLLR" }
  , { 0, "BBBFFFFLRR" }
  , { 0, "BBFFBFFLLR" }
  , { 0, "BBFFFBBRRR" }
  , { 0, "BBBFFFBLLR" }
  , { 0, "BFBBBBFRLR" }
  , { 0, "FBBFBBBRLL" }
  , { 0, "BFBBFFBRLL" }
  , { 0, "FBFBFBFLRR" }
  , { 0, "BBFFFBFLRL" }
  , { 0, "FBFBFFBRLL" }
  , { 0, "FBBFBFBRLR" }
  , { 0, "FFBFBBFLRL" }
  , { 0, "BBFBBBFLRR" }
  , { 0, "BFFBFBBLRL" }
  , { 0, "BFFBBBBRLR" }
  , { 0, "BFFFFFBRRR" }
  , { 0, "FBBFFFBRRL" }
  , { 0, "BFBFFBFLLR" }
  , { 0, "FBBFBBFLRL" }
  , { 0, "FBBBBBBLRR" }
  , { 0, "BFBBBFBRRL" }
  , { 0, "BFFFBFBLLL" }
  , { 0, "FBFFFBBRRR" }
  , { 0, "FFBBFFBRLR" }
  , { 0, "BBFFFFFRRL" }
  , { 0, "FFBFBBBRRL" }
  , { 0, "FFBFBBFLRR" }
  , { 0, "BFFFBBBRRL" }
  , { 0, "FFBFBFBLRR" }
  , { 0, "BBFFBFBRLL" }
  , { 0, "BBFBBFBRRL" }
  , { 0, "BBFBBFFRLR" }
  , { 0, "FBBFBFFRLR" }
  , { 0, "BFBBFFBLLL" }
  , { 0, "BBFBFBFRLL" }
  , { 0, "FFBBBFFLLL" }
  , { 0, "FFBBBBBLRR" }
  , { 0, "FBBFBBFRRL" }
  , { 0, "BBFFBFBRLR" }
  , { 0, "BFFFBBFRRL" }
  , { 0, "BBFBBFFLLR" }
  , { 0, "FBFFBBFLRR" }
  , { 0, "BFBFBBBLLR" }
  , { 0, "FFFBBBBRLL" }
  , { 0, "BBFFFFFLRR" }
  , { 0, "BFBBFFBLRL" }
  , { 0, "BFBBFFFLLR" }
  , { 0, "FFFBFBFLLL" }
  , { 0, "FFBFFFFLLR" }
  , { 0, "FBFFFBFLLR" }
  , { 0, "BBBFFFFLLR" }
  , { 0, "BFFBFFFLLL" }
  , { 0, "FFFBBFBRRL" }
  , { 0, "FBBFFFFLLL" }
  , { 0, "FFFBBBFRLL" }
  , { 0, "BBFBBBBLRR" }
  , { 0, "FFFBBBFLRR" }
  , { 0, "FFBBFBFRRR" }
  , { 0, "BFBFBBBLRL" }
  , { 0, "BBFBBBFLLL" }
  , { 0, "FBBBFFBRLR" }
  , { 0, "BFFFBBBRRR" }
  , { 0, "FFBBBBFLRR" }
  , { 0, "FFBBFBBRRL" }
  , { 0, "FBBFFBFRLR" }
  , { 0, "BBFFBBFRRR" }
  , { 0, "BBFBBFBRLR" }
  , { 0, "BFFBBFBLRR" }
  , { 0, "FFBBBBBLRL" }
  , { 0, "BBFFBBBRRR" }
  , { 0, "BFFFBFBRRR" }
  , { 0, "BFFFFFFRRL" }
  , { 0, "BBFFBFBLRL" }
  , { 0, "FBFFFFBLRR" }
  , { 0, "FBFBBFFRRL" }
  , { 0, "BFBFFFBLLR" }
  , { 0, "FFFBFBBLRL" }
  , { 0, "BFFFFFFRLL" }
  , { 0, "BBFFFBBRRL" }
  , { 0, "FFBFBFBRRL" }
  , { 0, "FBBFBFFLLL" }
  , { 0, "FBFFBFBLRR" }
  , { 0, "BFFFFBBRLR" }
  , { 0, "FFBFFFBLRR" }
  , { 0, "BFBFFFBRRL" }
  , { 0, "FBBFFBFRLL" }
  , { 0, "FBFBBFBRRR" }
  , { 0, "FBBBFBFLLR" }
  , { 0, "FBBFFFBLLR" }
  , { 0, "BFFFFBFLLR" }
  , { 0, "FBBBBBBRLL" }
  , { 0, "BBBFFFFRLL" }
  , { 0, "BFFFBBBLRL" }
  , { 0, "FFFBFBFLLR" }
  , { 0, "FBFBBBBLLR" }
  , { 0, "FBFFBFFRRR" }
  , { 0, "BFFFBBBLLL" }
  , { 0, "BFBBFFBRRR" }
  , { 0, "FBBBBFFRRR" }
  , { 0, "BFBFBBFLRR" }
  , { 0, "BFFBFFBLRL" }
  , { 0, "BBFBFFFRLL" }
  , { 0, "FFFBBFBRLL" }
  , { 0, "FBBFFFFRLR" }
  , { 0, "FFBBFBBRLR" }
  , { 0, "BBFFFBBLLL" }
  , { 0, "BBFFFBBRLL" }
  , { 0, "FBBFFFFRRR" }
  , { 0, "BFBFBFBLRR" }
  , { 0, "FFBFFFFRRR" }
  , { 0, "FBFBFBFLRL" }
  , { 0, "FFBFBBFLLL" }
  , { 0, "FFBFBBBRLR" }
  , { 0, "BFBFFFBRLL" }
  , { 0, "FFBFFBBLRL" }
  , { 0, "BFBBBBBRLL" }
  , { 0, "BBFBFFBLRR" }
  , { 0, "FBFFFFBRLR" }
  , { 0, "FFBBBFBRRR" }
  , { 0, "BFBFBBBRRR" }
  , { 0, "FBBBBBFRRR" }
  , { 0, "FBBFBBBLRR" }
  , { 0, "BBFBBBBRRL" }
  , { 0, "BFFBBBFRLL" }
  , { 0, "BBFBFBFLLR" }
  , { 0, "FFBBFFBRRR" }
  , { 0, "BFFFBBBLLR" }
  , { 0, "BFFFBBBLRR" }
  , { 0, "FFFBFBFRRR" }
  , { 0, "BFBFBFBRRL" }
  , { 0, "FFBBBFBRRL" }
  , { 0, "FFFBBBBRRR" }
  , { 0, "FBFFBFFRRL" }
  , { 0, "BFFBFFFRRL" }
  , { 0, "FFFBBBFLRL" }
  , { 0, "FBBBBFFLRL" }
  , { 0, "FFBFFBBRLR" }
  , { 0, "FBBFBBBLRL" }
  , { 0, "FFBFFFFLRR" }
  , { 0, "FBFFBFBRLR" }
  , { 0, "FBBFBBBRRL" }
  , { 0, "FFBBBFBRLL" }
  , { 0, "BFFFFFBLRL" }
  , { 0, "FFFBBFFRLR" }
  , { 0, "BFBFFFBRRR" }
  , { 0, "FFBBFFFLRL" }
  , { 0, "FBBBBFBRLR" }
  , { 0, "FFBBBBFRLL" }
  , { 0, "FFBFFBBLLR" }
  , { 0, "FBFFFFBLLL" }
  , { 0, "FBFBBBBLLL" }
  , { 0, "BFFFBFBRRL" }
  , { 0, "FBBBBBFLLL" }
  , { 0, "FFBBFFFRLL" }
  , { 0, "FBBBFFFLLR" }
  , { 0, "BFFBBBBLLR" }
  , { 0, "BFBFBFFRLR" }
  , { 0, "BFBFFBBLLL" }
  , { 0, "FBFBBFFLRR" }
  , { 0, "FFBBFFFRRL" }
  , { 0, "FBFBBFFRLL" }
  , { 0, "BFFFFBFLLL" }
  , { 0, "FBBBFBBLLL" }
  , { 0, "FBFBFFFRLR" }
  , { 0, "BFFBBBBLRL" }
  , { 0, "FFBFFFFRLL" }
  , { 0, "BFBBFBBLLR" }
  , { 0, "FFBBFBBLRL" }
  , { 0, "FBFBBFBLRR" }
  , { 0, "FBBBBBBRRL" }
  , { 0, "FFBFBBFRRR" }
  , { 0, "FBFFBBFRLL" }
  , { 0, "FBBFFFBRLL" }
  , { 0, "BFFFBFBRLR" }
  , { 0, "BFFBFFBLRR" }
  , { 0, "BBBFFFBRLL" }
  , { 0, "BFBFFBBLRR" }
  , { 0, "BFBBBFBRLL" }
  , { 0, "BBFBFBFRLR" }
  , { 0, "FFFBFBBRRL" }
  , { 0, "BFFFFBBLLR" }
  , { 0, "FBFFBBBRLR" }
  , { 0, "BFBFFBFRLL" }
  , { 0, "FBFBFFBRRL" }
  , { 0, "BFFFFFFLLL" }
  , { 0, "BFFFBBFLLR" }
  , { 0, "BFFFBFBRLL" }
  , { 0, "BFBBBBBLRL" }
  , { 0, "BFFFFBFRLR" }
  , { 0, "BBFBFBFLRL" }
  , { 0, "FBBBBBFRLL" }
  , { 0, "BBFFBFFLRR" }
  , { 0, "FBFBFFBRLR" }
  , { 0, "FFBBBFBLRR" }
  , { 0, "FBBFFFBLRR" }
  , { 0, "BFBBBFBLRL" }
  , { 0, "BFFFBFBLLR" }
  , { 0, "BBFFBBFRLR" }
  , { 0, "BFBBFFFLRR" }
  , { 0, "BFFBFBBRLR" }
  , { 0, "FFBBFFFLLL" }
  , { 0, "FBBBFBFLLL" }
  , { 0, "BFBBBBFLRL" }
  , { 0, "FFBBBBBRRR" }
  , { 0, "FBBFFFBLLL" }
  , { 0, "BFBBFBBLLL" }
  , { 0, "FBBBBFBRLL" }
  , { 0, "FBBFBFFLRL" }
  , { 0, "BFFBBFBLLL" }
  , { 0, "FBBBFBBRRR" }
  , { 0, "BFFBFBFRLL" }
  , { 0, "BBFFBBBLRL" }
  , { 0, "BFBFBFBLRL" }
  , { 0, "FBBBFFFLLL" }
  , { 0, "BFFFBFFRRL" }
  , { 0, "FFBFFBFLLR" }
  , { 0, "BFFBFBBLRR" }
  , { 0, "BFFFFFBRLL" }
  , { 0, "BFBFBBBLRR" }
  , { 0, "FFFBBBBLRL" }
  , { 0, "BFBBBBBRRR" }
  , { 0, "BFFBFBFRLR" }
  , { 0, "BFFBBFFLLL" }
  , { 0, "BBFBBFFRRL" }
  , { 0, "FBBBFFFLRL" }
  , { 0, "FBFFBFFRLL" }
  , { 0, "FBFFFBFLRR" }
  , { 0, "FBBBFBBLLR" }
  , { 0, "BBFFFFBLLL" }
  , { 0, "BFFFBBFRLR" }
  , { 0, "BBFBFBBLRR" }
  , { 0, "FBBFBBBRLR" }
  , { 0, "FBFFFBBRRL" }
  , { 0, "FBBBFFBLLR" }
  , { 0, "FFBBBBFLLL" }
  , { 0, "BFFBFFBLLL" }
  , { 0, "FFBFBFBLLR" }
  , { 0, "BBFFBBBLLL" }
  , { 0, "BBFFFFFRLL" }
  , { 0, "BBFFFBBLRR" }
  , { 0, "FFFBBBFRRL" }
  , { 0, "BFFBFBBRRR" }
  , { 0, "BFFBBFFRLL" }
  , { 0, "FFFBBBFLLL" }
  , { 0, "FBFFFFFRRR" }
  , { 0, "FBBFBBFLRR" }
  , { 0, "FFBBFBFRLL" }
  , { 0, "FFFBFBFRLL" }
  , { 0, "FBBBFBBRLL" }
  , { 0, "BBFFBFFLRL" }
  , { 0, "FFFBBBBLLR" }
  , { 0, "BFFBFBBRLL" }
  , { 0, "BFBFFBFRLR" }
  , { 0, "BFFBFBBLLR" }
  , { 0, "BFFFBBFLLL" }
  , { 0, "BFFFFBFLRL" }
  , { 0, "FBFBBBBRRR" }
  , { 0, "FFBBBBFLRL" }
  , { 0, "BBFFFFBRLL" }
  , { 0, "FFBBBFFRRR" }
  , { 0, "FBFBBFBLLR" }
  , { 0, "FBBBFBBLRR" }
  , { 0, "BBBFFFFLLL" }
  , { 0, "BBFBBFBLLR" }
  , { 0, "BFBBFFBRLR" }
  , { 0, "BFBBBBFRRL" }
  , { 0, "FBBFFBBLRL" }
  , { 0, "BFFBFBFRRR" }
  , { 0, "BFBFBBFLRL" }
  , { 0, "FBFBBFFRLR" }
  , { 0, "FBBFBBFRLL" }
  , { 0, "FFBBFBFLRR" }
  , { 0, "BFBBFBFRRL" }
  , { 0, "BFBBBFFLRR" }
  , { 0, "BFBBFBBRRR" }
  , { 0, "FFBBBBBRLR" }
  , { 0, "BFBBFBFRLR" }
  , { 0, "FFBFFBFRRR" }
  , { 0, "BFFFFBBLRL" }
  , { 0, "BFFBBFBLLR" }
  , { 0, "BFFBBBFLRR" }
  , { 0, "FFBFFFBRLL" }
  , { 0, "BBBFFFBLLL" }
  , { 0, "FBBFBBFLLL" }
  , { 0, "BBFFFBFRRL" }
  , { 0, "FBBBFFFLRR" }
  , { 0, "FBBFBFBRRR" }
  , { 0, "FBBBFFFRRL" }
  , { 0, "BFFBBBFLLL" }
  , { 0, "BFBBFBBLRL" }
  , { 0, "FFBBFBBLLL" }
  , { 0, "BFBBBBFLLR" }
  , { 0, "FBFFFFBRRR" }
  , { 0, "FBBFFFFLRR" }
  , { 0, "FFFBFBBLLR" }
  , { 0, "BFBBFFFLRL" }
  , { 0, "FFBFFBBLRR" }
  , { 0, "FFBFBFBRLL" }
  , { 0, "FFBFFFBLRL" }
  , { 0, "FFFBBFFRRR" }
  , { 0, "FBBFBFFLRR" }
  , { 0, "FBFFBFBRRL" }
  , { 0, "BBFFBBFLLR" }
  , { 0, "FFBFFFBRRL" }
  , { 0, "BBFFBFFRRR" }
  , { 0, "FFBBBFBLRL" }
  , { 0, "FBBFFBFLRL" }
  , { 0, "FBFBBBFRLL" }
  , { 0, "BFFFFBBLLL" }
  , { 0, "BFFBBBBRRR" }
  , { 0, "FFBFBFBRRR" }
  , { 0, "FFBFBBBLLL" }
  , { 0, "BBFFBFFLLL" }
  , { 0, "BFFBFBBRRL" }
  , { 0, "FFBBFBFLRL" }
  , { 0, "FFBBFFFRLR" }
  , { 0, "BFBFBFFLLR" }
  , { 0, "BFBFBBFRLR" }
  , { 0, "FFFBFBBLRR" }
  , { 0, "BFFBFFBRRR" }
  , { 0, "BFFBFFFLRR" }
  , { 0, "FFBFFFBRRR" }
  , { 0, "FBBBFFBLLL" }
  , { 0, "FBFFBFBLLR" }
  , { 0, "BBFBFFBLLL" }
  , { 0, "FFBFBBFRLL" }
  , { 0, "BBFFFFBRRL" }
  , { 0, "FBFBFBBLLR" }
  , { 0, "FBFBFBBLLL" }
  , { 0, "FBBFBFFRRR" }
  , { 0, "FBFBBFBLLL" }
  , { 0, "BBFFBBFLRR" }
  , { 0, "BBFBFFBLRL" }
  , { 0, "FBFBFBBLRL" }
  , { 0, "BFFFFFBLLL" }
  , { 0, "BFFBBBFLLR" }
  , { 0, "BFBBBBBLRR" }
  , { 0, "FBFBBFBRLL" }
  , { 0, "FBFFFFBLLR" }
  , { 0, "BBFFBBBLRR" }
  , { 0, "FBFFFFFRRL" }
  , { 0, "FBFBFBFRLR" }
  , { 0, "BFFFBBFRLL" }
  , { 0, "BFFBFFBLLR" }
  , { 0, "BFBFFFFRRL" }
  , { 0, "FFBFFBFRRL" }
  , { 0, "FBBFBFFRLL" }
  , { 0, "FFBBBFBRLR" }
  , { 0, "BFBBBFFLRL" }
  , { 0, "FBBBBFBRRL" }
  , { 0, "FFFBFBFRRL" }
  , { 0, "BBFBBBFRLR" }
  , { 0, "BFFBFBFLRL" }
  , { 0, "BFFBBFBLRL" }
  , { 0, "FBFBFBFRRR" }
  , { 0, "FBBFFBBRRL" }
  , { 0, "FBFFBFFLRL" }
  , { 0, "BFBFFFFRRR" }
  , { 0, "FFBBFBFLLL" }
  , { 0, "FFFBBFBRLR" }
  , { 0, "BBFFBBBLLR" }
  , { 0, "BBFBFBFLRR" }
  , { 0, "BFFFFFBLLR" }
  , { 0, "BBFBFBBRLR" }
  , { 0, "FBFBFFFLRR" }
  , { 0, "BFBFFBFLLL" }
  , { 0, "BBFBBFFLLL" }
  , { 0, "FBBBFBBRRL" }
  , { 0, "FBFBFBBRLR" }
  , { 0, "FFBBBFFLLR" }
  , { 0, "BFFFFFBLRR" }
  , { 0, "BBFBFFFLRR" }
  , { 0, "FFBFBBBRLL" }
  , { 0, "BBFBFBFLLL" }
  , { 0, "BBFBBFFRRR" }
  , { 0, "BBFBBFFLRR" }
  , { 0, "FFBFBBBRRR" }
  , { 0, "FBFBFBFRRL" }
  , { 0, "BFFFFFFLRR" }
  , { 0, "BFBFBBFRRR" }
  , { 0, "FFFBBFFLLL" }
  , { 0, "FBFBBFFLRL" }
  , { 0, "FBFFBBBLLR" }
  , { 0, "BFFBBBBLLL" }
  , { 0, "FFBFFBFLLL" }
  , { 0, "FBFBFFBRRR" }
  , { 0, "BFBBBFFRRR" }
  , { 0, "BBBFFFFRRR" }
  , { 0, "BFBFBFBLLL" }
  , { 0, "FFBFBBBLRR" }
  , { 0, "BBFFBBBRLR" }
  , { 0, "FFBBFFBLRR" }
  , { 0, "BFBFBBBRRL" }
  , { 0, "FFBBFFFLRR" }
  , { 0, "FFFBBBBRRL" }
  , { 0, "BFBBFBFLLL" }
  , { 0, "FBBBBFBLRR" }
  , { 0, "BBFBFFFRRL" }
  , { 0, "FFBBFBFLLR" }
  , { 0, "BFFFFBBRRR" }
  , { 0, "BBFFBBFLLL" }
  , { 0, "FBFFBFBLLL" }
  , { 0, "BFBBFFFLLL" }
  , { 0, "FFBFFFBLLR" }
  , { 0, "FBFFFBBLLR" }
  , { 0, "BFBBBFFRRL" }
  , { 0, "FBFBBBFRLR" }
  , { 0, "FFBFFBFLRR" }
  , { 0, "BBFFFFFLLR" }
  , { 0, "FBBFBFFLLR" }
  , { 0, "BBFFBFBRRL" }
  , { 0, "BFBFBFFLRR" }
  , { 0, "BBFBFFFLLL" }
  , { 0, "BBFFFBBRLR" }
  , { 0, "BFBFFBBRLL" }
  , { 0, "BFBFBFBRLR" }
  , { 0, "BBFBBBBRLL" }
  , { 0, "BFBBFBBRLL" }
  , { 0, "FFBFBBBLRL" }
  , { 0, "BFBFBBBRLL" }
  , { 0, "FBBFBFBLRL" }
  , { 0, "FBFFFBBLRR" }
  , { 0, "BBFFBBBRRL" }
  , { 0, "BFBFFBFRRR" }
  , { 0, "BBBFFFBLRR" }
  , { 0, "FFBBBFFRRL" }
  , { 0, "FBBFFBFRRL" }
  , { 0, "BFFFBFFRLR" }
  , { 0, "FBFFBFFRLR" }
  , { 0, "FFFBFBBLLL" }
  , { 0, "FFBFBFFRRR" }
  , { 0, "BBFFBFFRRL" }
  , { 0, "FFFBFBFLRL" }
  , { 0, "BFFBBFFRRR" }
  , { 0, "FFBBBFFLRL" }
  , { 0, "FBFBFFBLLR" }
  , { 0, "FBFFBBFRRL" }
  , { 0, "BFFBBFFRLR" }
  , { 0, "BFFBFFBRLR" }
  , { 0, "BFFBFFFLRL" }
  , { 0, "FBFFFFFLRR" }
  , { 0, "FFFBBBBLRR" }
  , { 0, "BFBBFFBLLR" }
  , { 0, "BFBBFBBRLR" }
  , { 0, "BFFFFBFRLL" }
  , { 0, "BBFFFBFRLR" }
  , { 0, "FBFBFFFRRR" }
  , { 0, "FFFBBFFLRR" }
  , { 0, "FBBBBFBLLR" }
  , { 0, "FBBBBBFRLR" }
  , { 0, "FFBFBFBLLL" }
  , { 0, "FBFBBFFLLL" }
  , { 0, "BBFBBBBRLR" }
  , { 0, "BBFFBBFRRL" }
  , { 0, "BBFBBBFRLL" }
  , { 0, "BFBBFBFLRL" }
  , { 0, "BFBBBFFRLL" }
  , { 0, "FBFBFBBRRR" }
  , { 0, "FBBBBBBLLL" }
  , { 0, "BFBFFBBRRR" }
  , { 0, "FBBFFBBRRR" }
  , { 0, "BFFFFFBRRL" }
  , { 0, "FFBBFFFRRR" }
  , { 0, "FFBFFBBLLL" }
  , { 0, "BBBFFBFLRR" }
  , { 0, "BBFBBBBRRR" }
  , { 0, "FBFBFFFRLL" }
  , { 0, "FBBBFBFRRR" }
  , { 0, "FBBBBFFRRL" }
  , { 0, "BFFFFFFLRL" }
  , { 0, "FBBBBBFLRR" }
  , { 0, "BFFBBBFLRL" }
  , { 0, "BFBBFFFRLR" }
  , { 0, "FFBFFFFRLR" }
  , { 0, "FFBBBFFRLR" }
  , { 0, "BFBBFBBRRL" }
  , { 0, "FFBFBFFLLR" }
  , { 0, "BBBFFFFRLR" }
  , { 0, "BBFFFFFRLR" }
  , { 0, "FBBFFBBLLR" }
  , { 0, "BFBFFBFRRL" }
  , { 0, "BFFFBFFLRR" }
  , { 0, "FFBFBFBRLR" }
  , { 0, "BFFFBFFRRR" }
  , { 0, "BFFBBBBRRL" }
  , { 0, "FFBBBBBLLL" }
  , { 0, "BFFBBBFRLR" }
  , { 0, "FBFFFBFRLR" }
  , { 0, "FFBFBFFRLR" }
  , { 0, "BFBBBFBLLL" }
  , { 0, "FBFBBFBRRL" }
  , { 0, "BBFBFBBLRL" }
  , { 0, "BFBBFBFRLL" }
  , { 0, "BFBBBFFLLL" }
  , { 0, "FBBFBBBLLR" }
  , { 0, "FBFFFFBRRL" }
  , { 0, "FBBBBBBRRR" }
  , { 0, "FBFBBBBLRL" }
  , { 0, "FFFBFBBRRR" }
  , { 0, "FFBFBFFLRL" }
  , { 0, "FBFFBBFLLR" }
  , { 0, "FFBBFBBLRR" }
  , { 0, "BBFBFBBLLR" }
  , { 0, "FFFBFBFLRR" }
  , { 0, "BBBFFFBRRR" }
  , { 0, "FFBFFBBRRR" }
  , { 0, "FFBFFBBRRL" }
  , { 0, "FBBFFFFLRL" }
  , { 0, "FBFBBFFRRR" }
  , { 0, "BFBBFFFRLL" }
  , { 0, "FFFBBBFLLR" }
  , { 0, "FBBBBFBLLL" }
  , { 0, "BBFBBBBLRL" }
  , { 0, "BBFBFFBRRR" }
  , { 0, "BFFBBBBLRR" }
  , { 0, "FBBBBFBRRR" }
  , { 0, "BFBFBFFRRR" }
  , { 0, "BFFBBFBRLL" }
  , { 0, "FFBBBFBLLL" }
  , { 0, "BFBFFBFLRL" }
  , { 0, "BFFFBBFLRR" }
  , { 0, "FBBBBFBLRL" }
  , { 0, "FBBFBFFRRL" }
  , { 0, "FFFBBFFRLL" }
  , { 0, "FBFFFBBLRL" }
  , { 0, "FBBFFFBRLR" }
  , { 0, "FBBFBFBRRL" }
  , { 0, "FFBFFFFRRL" }
  , { 0, "FBFBBFFLLR" }
  , { 0, "FBFFBBFLLL" }
  , { 0, "FBBFBFBLLR" }
  , { 0, "BFFBBBFRRL" }
  , { 0, "FFBBFBBLLR" }
  , { 0, "BFBBFBFRRR" }
  , { 0, "BFFFFFFRLR" }
  , { 0, "FBBBFFFRLL" }
  , { 0, "FFBFFBFLRL" }
  , { 0, "FFBFFFFLRL" }
  , { 0, "BBBFFFBRLR" }
  , { 0, "BFFBFFBRLL" }
  , { 0, "BBBFFBFLRL" }
  , { 0, "FBBBFFBRRL" }
  , { 0, "BFBFBFBRRR" }
  , { 0, "FFFBBBFRLR" }
  , { 0, "BBFFBFBLLR" }
  , { 0, "BFBBBBFRLL" }
  , { 0, "BBFBFFBLLR" }
  , { 0, "FFBBFBBRRR" }
  , { 0, "FBBBFBBLRL" }
  , { 0, "BFBBBBFRRR" }
  , { 0, "BFBFBFBRLL" }
  , { 0, "BFBBFFFRRL" }
  , { 0, "FFBFBFFRLL" }
  , { 0, "FBBFBBFRLR" }
  , { 0, "BFFBFFFRLL" }
  , { 0, "BFBBBFBLRR" }
  , { 0, "BBFFFFFRRR" }
  , { 0, "FBFBBBBRLR" }
  , { 0, "FFBBFBFRLR" }
  , { 0, "FFBFFFFLLL" }
  , { 0, "FBBFFBFRRR" }
  , { 0, "FFBFFBFRLL" }
  , { 0, "FBBFFBBLRR" }
  , { 0, "FBBBFBFRLR" }
  , { 0, "BFBBBBFLRR" }
  , { 0, "FFBFBBBLLR" }
  , { 0, "BFFFBBFRRR" }
  , { 0, "FBBBFFBRLL" }
  , { 0, "FBFBBBFLRR" }
  , { 0, "BBFFBFFRLL" }
  , { 0, "FBFFFFBRLL" }
  , { 0, "FBFFBFBLRL" }
  , { 0, "*"          }
#endif
};
int i;
int j;
int row;
int col;
int seatValue;
struct seatStruct boardingPassTemp;


  for (i = 0; '*' != boardingPasses[i].seatCode[0]; ++i) {
    for (j = row = 0; 7 > j; ++j) {
      row = (row * 2) + (('F' == boardingPasses[i].seatCode[j]) ? 0 : 1);
    }
    for (col = 0; 10 > j; ++j) {
      col = (col * 2) + (('L' == boardingPasses[i].seatCode[j]) ? 0 : 1);
    }
    boardingPasses[i].value = (row * 8) + col;
  }

  for (i = 0; '*' != boardingPasses[i].seatCode[0]; ++i) {
    for (j = 0; '*' != boardingPasses[j + 1].seatCode[0]; ++j) {
      if (boardingPasses[j + 1].value < boardingPasses[j].value) {
        boardingPassTemp      = boardingPasses[j];
        boardingPasses[j]     = boardingPasses[j + 1];
        boardingPasses[j + 1] = boardingPassTemp;
      }
    }
  }

  for (i = 0; '*' != boardingPasses[i].seatCode[0]; ++i) {
    if ((boardingPasses[i].value + 2) == boardingPasses[i + 1].value) {
      break;
    }
  }

  seatValue = boardingPasses[i].value + 1;

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
