#include "pch.h"

using namespace System;

//Test

int main(array<System::String^>^ args)
{
    Console::OutputEncoding = Text::Encoding::Unicode;

    // Перше завдання
    {
        int N = 5;

        double schoolX = N + 10;
        double schoolY = N + 5;

        int count = 5;

        array<double>^ X = gcnew array<double>(count);
        array<double>^ Y = gcnew array<double>(count);

        X[0] = 10;
        X[1] = 15;
        X[2] = 20;
        X[3] = 25;
        X[4] = 30;

        Y[0] = 5;
        Y[1] = 10;
        Y[2] = 15;
        Y[3] = 20;
        Y[4] = 25;

        Console::WriteLine("School coordinates: ({0}; {1})", schoolX, schoolY);
        Console::WriteLine();
        Console::WriteLine("Booth number\tDistance to school");

        for (int i = 0; i < count; i++)
        {
            double dx = X[i] - schoolX;
            double dy = Y[i] - schoolY;

            double distance = Math::Sqrt(dx * dx + dy * dy);

            Console::WriteLine("{0}\t\t{1}", i + 1, distance);
        }
    }

    // Друге завдання
    {
        int N = 4;

        array<array<int>^>^ X = gcnew array<array<int>^>(N);

        for (int i = 0; i < N; i++)
        {
            X[i] = gcnew array<int>(N);
        }

        X[0][0] = 1;
        X[0][1] = 2;
        X[0][2] = 3;
        X[0][3] = 4;

        X[1][0] = 5;
        X[1][1] = 6;
        X[1][2] = 7;
        X[1][3] = 8;

        X[2][0] = 9;
        X[2][1] = 10;
        X[2][2] = 11;
        X[2][3] = 12;

        X[3][0] = 13;
        X[3][1] = 14;
        X[3][2] = 15;
        X[3][3] = 16;

        Console::WriteLine();
        Console::WriteLine("Initial matrix:");

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                Console::Write("{0,5}", X[i][j]);
            }

            Console::WriteLine();
        }

        for (int i = 0; i < N; i++)
        {
            int j = N - 1 - i;

            int temp = X[i][i];
            X[i][i] = X[i][j];
            X[i][j] = temp;
        }

        Console::WriteLine();
        Console::WriteLine("Matrix after swapping diagonals:");

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                Console::Write("{0,5}", X[i][j]);
            }

            Console::WriteLine();
        }
    }

    return 0;
}
