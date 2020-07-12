#include "../main.hpp"
#include <gtest/gtest.h>



TEST (Test1, add) {


    ASSERT_EQ(5,add_workout(1) ); 

}


TEST (Test2, add) {


    EXPECT_EQ(6,add_workout(2) ); 

}


TEST (Test3, bool) {

    ASSERT_FALSE(b);
 
}


TEST (Test4, bool) {


    ASSERT_TRUE(b);

}


