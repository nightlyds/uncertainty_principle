#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

#define dwd displacement_with_degree
#define mwd mass_with_degree

long double displacement;
long double displacement_with_degree;
long double momentum;
long double mass;
long double mass_with_degree;
long double speed;
long double plank_constant = 6.626176 / powl(10, 34);

int exponentiation()
{
    int x;
    while (!false)
    {
        cout << "Write degree (max and min is 37 and -37): ";
        cin >> x;
        if (x > -37 && x < 38 && x != 0)
        {
            if (x > 0)
            {
                if (mwd == 0)
                {
                    mwd = mass * powl(10, x);
                }
                else if (dwd == 0)
                {
                    dwd = displacement * powl(10, x);
                }
            }
            if (x < 0)
            {
                if (mwd == 0)
                {
                    mwd = powl(10, x) * mass;
                }
                else if (dwd == 0)
                {
                    dwd = powl(10, x) * displacement;
                }
            }
            break;
        }
        else
        {
            cout << "It`s not correct number" << endl;
            int y;
            cout << "Do you want go back? (1 or 2): " << endl;
            cin >> y;
            if (y == 1)
            {
                break;
            }
            else
            {
                continue;
            }
        }
    }
}
void mass_fun()
{
    while (!false)
    {
        cout << "Write your mass (without degree, if it has): ";
        cin >> mass;
        if (mass > 0)
        {
            break;
        }
        else
        {
            cout << "It`s not correct number" << endl;
        }
    }
    cout << "Has the mass degree? (1 or 2)?" << endl;
    int answer;
    cin >> answer;
    if (answer == 1)
    {
        exponentiation();
    }
}
void displacement_fun()
{
    while (!false)
    {
        cout << "Write your displacement (without degree, if it has): ";
        cin >> displacement;
        if (displacement > 0)
        {
            break;
        }
        else
        {
            cout << "It`s not correct number" << endl;
        }
    }
    cout << "Has the displacement degree? (1 or 2)?" << endl;
    int answer;
    cin >> answer;
    if (answer == 1)
    {
        exponentiation();
    }
}
void calculation()
{
    speed = plank_constant / (dwd * mwd);
    cout << "Speed is: " << speed << endl;
}
void momentum_fun()
{
    momentum = mwd * speed;
    cout << "Momentum is: " << momentum << endl;
}
void first_screen()
{
    cout << "Hey, I am is a uncertainty principle program" << endl;
}
int main()
{
    first_screen();
    mass_fun();
    displacement_fun();
    cout << "Mass is: " << mwd << endl;
    cout << "Displacement is: " << dwd << endl;
    calculation();
    momentum_fun();
}