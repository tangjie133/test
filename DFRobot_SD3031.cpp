void DFRobot_SD3031::enableFrequency(eFrequency_t fr)
{
  uint8_t reg2,reg3;
  readReg(SD3031_REG_CTR2, &reg2, 1);
  readReg(SD3031_REG_CTR3, &reg3, 1);
  reg2 = 0xEF;
  reg3 = reg3 | fr;
  writeReg(SD3031_REG_CTR2, &reg2, 1);
  writeReg(SD3031_REG_CTR3, &reg3, 1);

}
