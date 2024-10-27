#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int correction;
    int mFront, mSize, mCap, last cin >> mFront >> mSize >> mCap >> last;
    cin >> correction;
    switch (correction)
    {
    case 0:
        if ((mFront + mSize) % mCap > last || mCap < mSize ||)
        {
            cout << "WRONG";
        }
        else
        {
            cout << "OK"
        }

    case 1:
        if (mFront % mCap != (last + mCap - mSize) % mCap)
        {
            mFront = (last + mCap - mSize) % mCap;
            cout << "WRONG" << mFront;
        }
        else
        {
            cout << "OK"
        };
    case 2:
        if ((last + mCap - mSize %) mCap != mFront % mCap)
        {
            mSize = last + mCap - mFront % mCap;
            cout << "WRONG" << mSize;
        }
        else
        {
            cout << "OK";
        }

        ;
    case 3:
    
    if ()
    {
        
    }
    else
    {
        /* code */
    }
    ;

    case 4:;
    }

    return 0;
}


