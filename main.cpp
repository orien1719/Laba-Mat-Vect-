#include "Vector.h"
#include "Matrix.h"

void whitespace()
{
  std::cout << "\n\n\n----------------------------------\n\n\n\n";
}

int main()
{
  TVector<int> vector1;
  TVector<int> vector2(5, 2);
  TVector<int> vector3(vector2);
  vector1.Resize(5);
  std::cin >> vector2;
  for (int i = 0; i < vector1.GetLength(); i++)
    vector1[i] = rand() % 50 + 10;
  whitespace();

  vector3 = vector1 + vector2;
  std::cout << "vector3 = vector1 + vector2 =\n" << vector1 << "+  " << vector2 << "=  " << vector3 << "\n";
  whitespace();
  vector3 = vector1 - vector2;
  std::cout << "vector3 = vector1 - vector2 =\n" << vector1 << "-  " << vector2 << "=  " << vector3 << "\n";
  whitespace();
  vector1 = vector2 * vector3;
  std::cout << "vector1 = vector2 * vector3 =\n" << vector2 << "*  " << vector3 << "=  " << vector1 << "\n";
  whitespace();
  vector3 = vector1 / vector2;
  std::cout << "vector3 = vector1 / vector2 =\n" << vector1 << "/  " << vector2 << "=  " << vector3 << "\n";
  whitespace();

  TMatrix<int> Matrix1;
  TMatrix<int> Matrix2(2, 3);
  TMatrix<int> Matrix3(Matrix2);
  TMatrix<int> Matrix4(4, 5);
  int** indexes;
  std::cin >> Matrix2;
  std::cout << Matrix2;
  whitespace();

  for (int i = 0; i < Matrix3.GetWidth(); i++)
    for (int j = 0; j < Matrix3.GetLength(); j++)
      Matrix3[i][j] = rand();
  std::cout << "Matrix3 = \n" << Matrix3;
  whitespace();

  Matrix1 = Matrix2 + Matrix3;
  std::cout << "Matrix1 = Matrix2 + Matrix3 =\n"
    << Matrix2 << "\n + \n\n" << Matrix3 << "\n = \n\n" << Matrix1 << "\n";
  whitespace();

  Matrix2 = Matrix3 - Matrix1;
  std::cout << "Matrix2 = Matrix3 - Matrix1 =\n"
    << Matrix3 << "\n - \n\n" << Matrix1 << "\n = \n\n" << Matrix2 << "\n";
  whitespace();

  Matrix1.Resize(2, 2);
  Matrix2.Resize(2, 2);
  Matrix3.Resize(2, 2);
  Matrix3 = Matrix2 * Matrix1;
  std::cout << "Matrix3 = Matrix2 * Matrix1 =\n"
    << Matrix2 << "\n * \n\n" << Matrix1 << "\n = \n\n" << Matrix3 << "\n";
  whitespace();

  for (int i = 0; i < Matrix4.GetWidth(); i++)
    for (int j = 0; j < Matrix4.GetLength(); j++)
      Matrix4[i][j] = rand() % 50;
  vector1 = Matrix4 * vector2;
  std::cout << "vector1 = Matrix4 * vector2 = \n" << Matrix4 << "\n *\n\n" << vector2 << "\n\n =\n\n" << vector1;
  whitespace();


  
  std::cout << "vector1 = " << vector1;
  whitespace();

  TMatrix<int> Matrix5(vector2.GetLength(), Matrix4.GetLength());
  Matrix4.Resize(1, Matrix4.GetLength());
  Matrix5 = vector2 * Matrix4;
  std::cout << "Matrix5 = vector2 * Matrix4 = \n" << vector2 << "\n *\n\n" << Matrix4
    << "\n\n = \n\n" << Matrix5;
  whitespace();

  return 0;
}