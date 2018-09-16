#pragma once
#include <string>
#include <iostream>
#include <vector>

/* Cracking the coding interview 5.1 */
int insertion(int num1, int num2, int i, int j);
void test_insertion();

/* Cracing the coding nterview 5.2*/
std::string binary_to_string(double n);
void test_binary_to_string();

/* Cracking the coding interview 5.3 */
int flip_to_win(unsigned int n);
void test_flip_to_win();

/*
LeetCode 461
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, calculate the Hamming distance.
*/
int hamming_distance(int x, int y);

/*
LeetCode 338
Given a non negative integer number num. For every numbers i in the range 0 <= i <= num calculate the number of 1's in their binary representation and return them as an array.
*/
std::vector<int> count_bits(int n);
void test_count_bits();
