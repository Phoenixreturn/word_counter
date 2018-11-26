#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <iostream>
#include <string>
#include <exception>
#include "../src/WordCounterUtils.h"


std::string globalWord;
WordCounterUtils *wordCounter;

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	if (argc == 2) {
		globalWord = argv[1];
		wordCounter = new WordCounterUtils(globalWord);
	}
	else {
		return EXIT_FAILURE;
	}   
	//wordCounter = new WordCounterUtils("C:\\ABBA.txt");

	return RUN_ALL_TESTS();
}

TEST(word_count, allWords)
{
    EXPECT_EQ(wordCounter->wordCount(), 3);
}


TEST(word_count, firstWord)
{
	EXPECT_EQ(wordCounter->wordOccurency("my"), 12);
}

TEST(word_count, secondWord)
{
	EXPECT_EQ(wordCounter->wordOccurency("friend"), 3);
}

TEST(word_count, thirdWord)
{
	EXPECT_EQ(wordCounter->wordOccurency("hello"), 2);
}