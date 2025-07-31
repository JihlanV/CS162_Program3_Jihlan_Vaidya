#include <iostream>
#include <cstring>
using namespace std;

const int NAMESIZE {21};
const int COURSE {7};

struct alexander {
	string name = "Thomas Alexander";
	string location = "kitchen";
	string alibi = "He was with Winchester in the kitchen when it happened.";
	string clue = "He was seen with the same kitchen knife used as the murder weapon earlier.";
	string id = "Male, 6' 5, Caucasian, Blonde Hair, Blue Eyes, Alexander, Thomas";
};

struct winchester {
	string name = "Mark Winchester";
	string location = "kitchen";
	string alibi = "He was with Alexander in the kitchen when it happened.";
	string clue = "He was seen tampering with evidence.";
	string id = "Male, 5' 10, Caucasian, Black Hair, Green Eyes, Winchester, Marcus";
};

struct zhong {
	string name = "Alice Zhong";
	string location = "bathroom";
	string alibi = "She was locked in the bathroom with stomach cramps during the murder.";
	string clue = "Her makeup was found on the victims hands even though they hadn't been seen together.";
	string id = "Female, 5' 2, Asian, Black Hair, Brown Eyes, Zhong, Xiaoling";
};

struct preston {
	string name = "Quinn Preston";
	string location = "living room";
	string alibi = "He was with Grayson in the living room when it happened.";
	string clue = "He was seen near the fuse box when the lights went out.";
	string id = "Male, 6' 4, African American, Black Hair (Dyed Blonde), Brown Eyes, Preston, Quinntell";
};

struct grayson {
	string name = "Sammy Grayson";
	string location = "living room";
	string alibi = "She was with Preston in the living room when it happened.";
	string clue = "She was the first one to discover the body.";
	string id = "Female, 4' 9, Caucasian, Blonde Hair, Green Eyes, Grayson, Samantha";
};

struct body {
	string name = "Sheila Freeman";
	string location = "dining room";
	string clue = "The body is fresh and there's a murderer on the loose.";
	string id = "Female, 5' 5, African American, Black Hair, Brown Eyes, Freeman, Sheila";
};