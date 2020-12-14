#include "conversion_systems.h"
#include <gtest/gtest.h>
namespace {
TEST(Conversion_Systems_Test, BinaryToDecimal){
EXPECT_EQ(10,Binary_to_Decimal(1010);
}
TEST(Conversion_Systems_Test, DecimalToBinary){
EXPECT_EQ(1010,Decimal_to_Binary(10));
}
TEST(Conversion_Systems_Test,DecimalToOctal){
EXPECT_EQ(7,Decimal_to_Octal(7));
}
TEST(Conversion_Systems_Test,OctalToDecimal){
EXPECT_EQ(6,Octal_to_Decimal(6));
}
}
