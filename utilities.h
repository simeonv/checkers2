///////////////////////////////////////////////////////////////////////////////
#ifndef UTILITIES_H
#define UTILITIES_H
///////////////////////////////////////////////////////////////////////////////

#include "objects.h"

// Convert a standard board position into a pair of X,Y board coordintes (top left corner).
void PositionToCoordinate(Position pos, int& row, int& col);

// Convert a pair of X,Y board coords (top left corner) into a standard board position.
void CoordinatesToPosition(int row, int col, Position& pos);

///////////////////////////////////////////////////////////////////////////////
#endif
///////////////////////////////////////////////////////////////////////////////
