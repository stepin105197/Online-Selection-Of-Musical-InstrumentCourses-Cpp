#include "Ext.h"
#include <gtest/gtest.h>
namespace {
TEST(OnlineTest, Veena) {
  EXPECT_EQ(500, Veena());
  
}
TEST(OnlineTest, Violin) {
  EXPECT_EQ(400, Violin());
 
}
TEST(OnlineTest, Flute) {
  EXPECT_EQ(400, Flute());
 
}
TEST(OnlineTest, Tabla) {
  EXPECT_EQ(300, Tabla());
 
}
}
