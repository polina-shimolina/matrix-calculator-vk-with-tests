//
// Created by Polina on 24.10.2022.
//

#include "gtest/gtest.h"
#include <iostream>
#include "matrix.h"

class matrixClass : public testing::Test {
protected:
    matrix *_matrix;

    void SetUp() {
        float** masiv = new float* [3];
        float mas1[3] = { 6, 9, 5 };
        float mas2[3] = { 8, 3, 2 };
        float mas3[3] = { 1, 4, 7 };
        masiv[0] = mas1;
        masiv[1] = mas2;
        masiv[2] = mas3;
        matrix m(masiv, 3, 3);
        _matrix = new matrix(masiv, 3, 3);
    }
    void TearDown() {
        delete _matrix;
    }
};

TEST(MatrixInit, withNullArgs) {
float** masiv = new float* [3];
float mas1[3] = { 6, 9, 5 };
float mas2[3] = { 8, 3, 2 };
float mas3[3] = { 1, 4, 7 };
masiv[0] = mas1;
masiv[1] = mas2;
masiv[2] = mas3;
matrix m(masiv, 3, 3);


EXPECT_EQ(m.get_det(), -263);
}
