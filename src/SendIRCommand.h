#include <Arduino.h>
#include "IRCommands.h"
#include <IRremote.hpp>

String input;


void SendIRCommand(String input){
  if (input == "OnOff"){
      IrSender.sendNEC(IRAddress, OnOff, 0);
      Serial.println("OnOff");
    }
    if (input == "Skip"){
      IrSender.sendNEC(IRAddress, Skip, 0);
      Serial.println("Skip");
    }
    if (input == "BrightnessDown"){
      IrSender.sendNEC(IRAddress, BrightnessDown, 0);
      Serial.println("BrightnessDown");
    }
    if (input == "BrightnessUp"){
      IrSender.sendNEC(IRAddress, BrightnessUp, 0);
    }
    if (input == "Red"){
      IrSender.sendNEC(IRAddress, Red, 0);
    }
    if (input == "Green"){
      IrSender.sendNEC(IRAddress, Green, 0);
    }
    if (input == "Blue"){
      IrSender.sendNEC(IRAddress, Blue, 0);
    }
    if (input == "White"){
      IrSender.sendNEC(IRAddress, White, 0);
    }
    if (input == "LighterRed"){
      IrSender.sendNEC(IRAddress, LighterRed, 0);
    }
    if (input == "LighterGreen"){
      IrSender.sendNEC(IRAddress, LighterGreen, 0);
    }
    if (input == "Magenta"){
      IrSender.sendNEC(IRAddress, Magenta, 0);
    }
    if (input == "Pink"){
      IrSender.sendNEC(IRAddress, Pink, 0);
    }
    if (input == "DarkerOrange"){
      IrSender.sendNEC(IRAddress, DarkerOrange, 0);
    }
    if (input == "Turquoise"){
      IrSender.sendNEC(IRAddress, Turquoise, 0);
    }
    if (input == "EggPlant"){
      IrSender.sendNEC(IRAddress, EggPlant, 0);
    }
    if (input == "Fuchia"){
      IrSender.sendNEC(IRAddress, Fuchia, 0);
    }
    if (input == "Orange"){
      IrSender.sendNEC(IRAddress, Orange, 0);
    }
    if (input == "Azure"){
      IrSender.sendNEC(IRAddress, Azure, 0);
    }
    if (input == "Indigo"){
      IrSender.sendNEC(IRAddress, Indigo, 0);
    }
    if (input == "PaleBlue"){
      IrSender.sendNEC(IRAddress, PaleBlue, 0);
    }
    if (input == "Yellow"){
      IrSender.sendNEC(IRAddress, Yellow, 0);
    }
    if (input == "SkyBlue"){
      IrSender.sendNEC(IRAddress, SkyBlue, 0);
    }
    if (input == "RedViolet"){
      IrSender.sendNEC(IRAddress, RedViolet, 0);
    }
    if (input == "Cerulean"){
      IrSender.sendNEC(IRAddress, Cerulean, 0);
    }
    if (input == "RedUp"){
      IrSender.sendNEC(IRAddress, RedUp, 0);
    }
    if (input == "RedDown"){
      IrSender.sendNEC(IRAddress, RedDown, 0);
    }
    if (input == "GreenUp"){
      IrSender.sendNEC(IRAddress, GreenUp, 0);
    }
    if (input == "GreenDown"){
      IrSender.sendNEC(IRAddress, GreenDown, 0);
    }
    if (input == "BlueUp"){
      IrSender.sendNEC(IRAddress, BlueUp, 0);
    }
    if (input == "BlueDown"){
      IrSender.sendNEC(IRAddress, BlueDown, 0);
    }
    if (input == "Quick")
    {
      IrSender.sendNEC(IRAddress, Quick, 0);
    }
    if (input == "Slow")
    {
      IrSender.sendNEC(IRAddress, Slow, 0);
    }
    if (input == "Fade3")
    {
      IrSender.sendNEC(IRAddress, Fade3, 0);
    }
    if (input == "Fade7")
    {
      IrSender.sendNEC(IRAddress, Fade7, 0);
    }
    if (input == "Flash")
    {
      IrSender.sendNEC(IRAddress, Flash, 0);
    }
    if (input == "DIY1")
    {
      IrSender.sendNEC(IRAddress, DIY1, 0);
    }
    if (input == "DIY2")
    {
      IrSender.sendNEC(IRAddress, DIY2, 0);
    }
    if (input == "DIY3")
    {
      IrSender.sendNEC(IRAddress, DIY3, 0);
    }
    if (input == "DIY4")
    {
      IrSender.sendNEC(IRAddress, DIY5, 0);
    }
    if (input == "DIY6")
    {
      IrSender.sendNEC(IRAddress, DIY6, 0);
    }
    if (input == "Auto")
    {
      IrSender.sendNEC(IRAddress, Auto, 0);
    }
    if (input == "Jump3"){
      IrSender.sendNEC(IRAddress, Jump3, 0);
    }
    if (input == "Jump7"){
      IrSender.sendNEC(IRAddress, Jump7, 0);
    }
}