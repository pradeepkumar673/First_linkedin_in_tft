#include <TFT_eSPI.h>
#include <DigitalRainAnimation.hpp>

TFT_eSPI tft = TFT_eSPI();
DigitalRainAnimation<TFT_eSPI> matrix_effect = DigitalRainAnimation<TFT_eSPI>();

void setup() {
  Serial.begin(115200);
  Serial.println("\n\n TFT_eSPI ShowCase");

  tft.begin();
  tft.setRotation(1);

  matrix_effect.init(&tft);
  matrix_effect.setTextAnimMode(AnimMode::SHOWCASE, "\nHello, Friends :)    \nI am PRADEEPKUMAR.    \nThis is MY first LINKEDIN post     \nI will be making more interesting stuff in future     \nfollow me, bye for now :)                 ");
}

void loop() {
  matrix_effect.loop();
}