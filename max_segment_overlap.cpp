#include <iostream>
#include <algorithm>
#include <vector>
#include "headers/utils.h"

enum Position
{
    BEGIN,
    END,
    NONE
};

class Point
{
    private:
        // fields
        float value;
        Position position;
    
    public:
        // constructors
        Point() : position(Position::NONE)
        {
        }

        Point(float value) : value(value)
        {
        }

        Point(float value, Position position) : value(value), position(position)
        {
        }

        // properties
        float  getValue()             {return value;}
        void   setValue(float value)  {this->value = value;}

        Position  getPosition()                {return position;}
        void      setPosition(Position value)  {position = value;}
};

void assignPositions(Point* p1, Point* p2)
{
    if(p1->getValue() > p2->getValue())
    {
        p1->setPosition(Position::END);
        p2->setPosition(Position::BEGIN);
    }
    else
    {
        p1->setPosition(Position::BEGIN);
        p2->setPosition(Position::END);
    }
}

int main(int argc, char* argv[])
{
    //  o-----------o
    //  .      o-------------------------------------o
    //  .      .    .        o------------------------------------0
    //  .      .    .        .        o---------------------o     .
    //  .      .    .        .        .       o-----------------------------o
    //  .      .    .        .        .       .      .      .     .         .
    //  .      .    .        .        .       .      .      .     .         .
    //____________________________________________________________________________
    // 1.0    1.5  2.0      2.3      3.0     3.2    3.5    5.2   6.0       6.2


    std::vector<std::vector<float>*> v = std::vector<std::vector<float>*>();

    std::vector<float>* temp; 
    
    temp = new std::vector<float>();
    temp->push_back(1.0f);
    temp->push_back(2.0f);
    v.push_back(temp);

    temp = new std::vector<float>();
    temp->push_back(1.5f);
    temp->push_back(3.5f);
    v.push_back(temp);

    temp = new std::vector<float>();
    temp->push_back(6.0f);
    temp->push_back(2.3f);
    v.push_back(temp);

    temp = new std::vector<float>();
    temp->push_back(3.0f);
    temp->push_back(5.2f);
    v.push_back(temp);

    temp = new std::vector<float>();
    temp->push_back(3.2f);
    temp->push_back(6.2f);
    v.push_back(temp);

    std::vector<Point*> pointVector = std::vector<Point*>();

    for(int i = 0; i < v.size(); i++)
    {
        Point* points[2];
        for(int j = 0; j < v.at(i)->size(); j++)
            points[j] = new Point(v.at(i)->at(j));

        assignPositions(points[0], points[1]);
        pointVector.push_back(points[0]);
        pointVector.push_back(points[1]);
    }

    std::sort(pointVector.begin(), pointVector.end(), [](Point* p1, Point* p2) {return p1->getValue() < p2->getValue();});

    float max_x = pointVector.at(0)->getValue();
    int max_stack = 0;
    int stack = 0;

    for(int i = 0; i < pointVector.size(); i++)
    {
        Point* temp = pointVector.at(i);
        if(temp->getPosition() == Position::BEGIN)
            stack++;
        else
            stack--;

        if(stack > max_stack)
        {
            max_stack = stack;
            max_x = temp->getValue();
        }
    }

    print(max_x);
    print(max_stack);

    return 0;
}