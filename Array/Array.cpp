// Array.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()
{
    //Масив - це набір однотипних даних, об'єднаний загaльним ім'ям.

    /*int train[3];
    train[0] = 3;
    train[1] = 1;
    train[2] = 4;
    cout << "vagon 1 : " << train[0] << endl;
    cout << "vagon 2 : " << train[1] << endl;
    cout << "vagon 3 : " << train[2] << endl;

    const int size = 12;
    //cin >> size; //100000000000000000000000000
    int marks[size];
    marks[0] = 12;
    marks[1] = 1;
    marks[2] = 2;
    marks[3] = 5;
    marks[4] = 11;
    marks[5] = 10;
    marks[6] = 10;
    marks[7] = 8;
    marks[8] = 12;
    marks[9] = 12;
    marks[10] = 12;
    marks[11] = 12;

    cout << "marks : " << marks[0] << " " << marks[5] << " " << marks[11] << " " << marks[6] << endl;

    //1
    int arr[5];
    //2
    const int size = 5;
    double arr[size];
    */

    //Перший спосіб — ініціалізація при створенні.
   /* const int size = 10;
    int arr[size] = { 1,2,3,4,5,6,7,8,9,10 };

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;*/


    //int arr2[size] = { 1,2,3 }; // 1230000000

    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr2[i] << " ";
    //}
    //cout << endl;

    //int arr3[size] = { }; // 0000000000
    //arr3[5] = 77; //00007700000
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr3[i] << " ";
    //}
    //cout << endl;

    //// Другий спосіб — ініціалізація масиву за допомогою	циклу.
    //int arr4[size]{};
    //for (int i = 0; i < i < size; i++)
    //{
    //    cout << "enter number" << i + 1 << " ------>  ";
    //    cin >> arr4[i];
    //}
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr4[i] << " ";
    //}

    //Написати програму, яка знаходить суму всіх від'ємних	значень у масиві.
    //const int SIZE = 10;
    //int summa = 0;
    //int first_negative;
    //int first_positive;
    ////int arr5[SIZE] = { 5, 7, -8, -9, 14, 12, -2, -3, 6, 8 };
    //int arr5[SIZE] = {10, 25, 36, 85,  };
    //int max = arr5[0], min = arr5[0];
    //  
    //for (int i = 0; i < SIZE; i++)
    // {
    // cout <<arr5[i] << " ";
    // }
    //for (int i = 0; i < SIZE; i++)
    //{
    //    if (arr5[i] < 0)
    //    {
    //        first_negative = arr5[i];
    //        break;
    //    }
    //}

    //for (int i = SIZE-1; i >= 0; i--)
    //{
    //    if (arr5[i]>0)
    //    {
    //     last_positive = arr5[i];
    //     break;
    //     }
    //}

    //for (int i = 0; i < SIZE; i++)
    //{

    //    if (arr5[i] < 0) {
    //        summa += arr5[i];
    //    }
    //    if (arr5[i] < min)
    //    {
    //        min = arr5[i];
    //      }
    //    if (arr5[i] > max)
    //    {
    //        max = arr5[i];
    //    }
    //}
    //cout << "\nSumma negative elements : " << summa << endl;
    //cout << "\nMax element : " << max << endl;
    //cout << "\nMin element : " << min << endl;
    //cout << "\nFirst negative element : " << first_negative << endl;
    //cout << "\nLast positive  element : " << last_positive << endl;



   /* cout << endl;
    cout << "Practical work 1" << endl;
    cout << endl;


    int a[10];
    int product = 1;

    cout << " Enter 10 elements of the array." << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "Array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    for (int i= 0; i < 10; i++)
    {
        product *= a[i];
    }

    cout << " Product of the array elements: " << product << endl;*/


    //cout << endl;
    //cout << "Practical work 2" << endl;
    //cout << endl;

    //const int size = 7;
    //int  countMinus = 0;
    //int  countPlus = 0;
    //int a2[size] = { 5, 7, -8, -9, 14, 12, -2 };

    //cout << "Array: ";
    //for (int i = 0; i < size; i++)
    //{
    //    cout << a2[i] << " ";
    //}
    //
    //for (int i = 0; i < 7; i++)
    //{
    //    if (a2[i] < 0)
    //        countMinus++;
    //    if (a2[i] > 0)
    //        countPlus++;
    //}
    //cout << endl;
    //cout << "Number of negative elements: " << countMinus << endl;
    //cout << "Number of positive elements: " << countPlus << endl;



   /*cout << endl;
    cout << "Practical work 3" << endl;
    cout << endl;

    long a3[7] = { 5, 7, -8, -9, 14, 12, -2 };
    long sum = 0;
    cout << "Array: ";
    for (long i = 0; i < 7; i++)
    {
        cout << a3[i] << " ";
    }
    for (long i = 0; i < 7; i++)
    {
        if (a3[i] % 2 == 0) {
            sum += a3[i];
        }
    }
    cout << "\nSum of even elements: " << sum << endl;*/


    //cout << endl;
    //cout << "Practical work 4" << endl;
    //cout << endl;

    //long a4[10];
    //for (int i = 0; i < 10; i++)
    //{
    //    a4[i] = pow(2, i);
    //    cout << a4[i] << " ";
    //}
    //cout << endl;
    //for (int i = 9; i >= 0; i--)
    //{
    //    cout << a4[i] << " ";
    //}

    //cout << endl;
    //cout << "Practical work 5" << endl;
    //cout << endl;


    //int a5[] = { 5, 7, -8, -9, 14, 12, -2 };

    //for (int i = 0; i < 7; i++)
    //{
    //    if (a5[i] < 0)
    //        a5[i] = a5[i] * -1;

    //    cout << a5[i] << " ";
    //}


    cout << endl;
    cout << "Homework 1" << endl;
    cout << endl;


    int profit[12] = { 35000, 84000, 36000, 83000, 26000, 33000, 65000, 20000, 45000, 35000, 84000, 36000 };

    int fromMonth;
    cout << "Enter the month number from which the analysis should star: ";
    cin >> fromMonth;
    int toMonth;
    cout << "Enter the month number up to which the analysis should be performend: ";
    cin >> toMonth;

    int max = profit[fromMonth - 1];
    int min = profit[toMonth - 1];

    int maxMonth = fromMonth;
    int minMonth = fromMonth;

    for (int i = fromMonth - 1; i < toMonth; i++)
    {
        if (profit[i] > max)
        {
            max = profit[i];
            maxMonth = i + 1;
        }
        if (profit[i] < min)
        {
            min = profit[i];
            minMonth = i + 1;
        }

    }

    string month[12] = { "January", "February", "March", "April", "May", "Juni", "July", "August", "September", "Oktober", "November", "December" };

    cout << " The maximum profit was " << max << " in month " << month[maxMonth-1] << endl;
    cout << " The minimum profit was " << min << " in month " << month[minMonth-1] << endl;


















}


