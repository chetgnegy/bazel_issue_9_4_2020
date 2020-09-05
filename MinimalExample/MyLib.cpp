#include "MinimalExample/MyLib.h"

#include "MinimalExample/ComplicatedLib.h"

int MyLib::GetAnswer() {
  ComplicatedLib complicated;
  return complicated.GetAnswer();
}
