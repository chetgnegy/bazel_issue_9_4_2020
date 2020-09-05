#include "MinimalExample/ComplicatedLib.h"

ComplicatedLib::ComplicatedLib()
  : k_(40) {}

int ComplicatedLib::GetAnswer() {
  return k_ + 2;
}
