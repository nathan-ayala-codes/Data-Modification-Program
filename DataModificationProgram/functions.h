#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;



class DataModification
{
    private: 
    vector<int> data;
    public:
    void setVector(vector<double>);
    void setSize(int);
    void swap(double, double);
    void sortVector(vector<double>);
    double findMax(vector<double>);
    double findMin(vector<double>);
    double findAverage(vector<double>);
    double findSum(vector<double>);
};

void DataModification::swap(double x, double y)
{
    double temp = x;
    x = y;
    y = temp;
}

void DataModification::setVector(vector<double> data)
{
   vector<double>* dataPtr = &data;
}

void DataModification::sortVector(vector<double> dataPtr)
{
    for (int i = dataPtr.size() - 1; i > 0; i--)
    {
        for (int j = i - 1; j > -1;j--)
        {
            if (dataPtr[j] > dataPtr[i])
            {
                swap(dataPtr[i], dataPtr[j]);
            }
        }
    }
}

double DataModification::findMax(vector<double> dataPtr)
{
    double max = dataPtr[0];
    for (int i = 0; i < dataPtr.size();i++)
    {
        if(dataPtr[i] > max)
        {
            max = dataPtr[i];
        }
    }

    return max;
}

double DataModification::findMin(vector<double> dataPtr)
{
    double min = dataPtr[0];
    for (int i = 0; i < dataPtr.size();i++)
    {
        if(dataPtr[i] < min)
        {
            min = dataPtr[i];
        }
    }
    return min;
}
double DataModification::findAverage(vector<double> dataPtr)
{
    double sum = 0.0;
    for (int i = 0; i < dataPtr.size();i++)
    {
        sum += dataPtr[i];
    }
    return sum / dataPtr.size();
}

double DataModification::findSum(vector<double> dataPtr)
{
    double sum = 0;
    for (int i = 0; i < dataPtr.size(); i++)
    {
        sum += dataPtr[i];
    }
    return sum;
}