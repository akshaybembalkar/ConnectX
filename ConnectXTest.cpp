/**
 * Unit Tests for ConnectX class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "ConnectX.h"
 
class ConnectXTest : public ::testing::Test
{
	protected:
		ConnectXTest(){}
		virtual ~ConnectXTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};
/*
TEST(ConnectXTest, sanityCheck)
{
	ASSERT_TRUE(true);
}*/

TEST(ConnectXTest, constructorCheck)
{
	ConnectX connect(3,3,2);
	connect.placePiece(2);
	connect.placePiece(2);
	connect.showBoard();
	ASSERT_EQ(2,connect.at(2,2));
}

TEST(ConnectXTest, checkLocationAt)
{
	ConnectX connect(-2,-3,0);
	connect.placePiece(-3);
	connect.showBoard();
	ASSERT_EQ(-1,connect.at(-2,-3));
}

TEST(ConnectXTest, checkWhoesTurn)
{
	ConnectX connect(3,3,-2);
	ASSERT_EQ(2,connect.whoseTurn());
}

TEST(ConnectXTest, checkTurn)
{
	ConnectX connect(4,4,2);
	ASSERT_EQ(2,connect.whoseTurn());
}


TEST(ConnectXTest, insertAtInvalidPosition){
	ConnectX connect(3,3,2);
	connect.placePiece(2);
	connect.placePiece(3);
	connect.placePiece(4);
	connect.placePiece(1);
	ASSERT_EQ(2,connect.at(2,2));
}


/*
TEST(ConnectXTest, checkwhoesTurn){
		ConnectX connect(3,4,3);
		ASSERT_EQ(connect.BLACK,1);
}*/




