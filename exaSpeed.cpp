#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* The company Inspectors Objectives International's (IOI), is in charge in the world of carrying out the control of diverse problems, but they need your help. According to studies, one of the biggest causes of accidents on the roads is the speed at which people drive.

At first they placed cameras that detected the speed of vehicles passing through it, but they realized that people could stop before reaching the camera and they would never realize if this person exceeded the speed limit during the journey, so they decided to place a camera at the beginning and end of the road, and see if their average speed was higher than established.

The president of the company Cristian Henao requests create a program that says whether or not the vehicle exceeded the speed limit.


Input will be given by an integer N, which represents the kilometers of the road, then there will be an integer S which represents the speed limit then there will be N lines representing the speed in each given kilometer in an integer K.
Print "YES" if the person exceeded the speed limit in case the average speed exceeds the allowed speed limit, otherwise print "NO".

 */

int main() {
    int N, S, K;
    float prom, acumSpeed=0;
    cin>>N>>S;

    for(int i=0;i<N;i++){
        cin>>K;
        acumSpeed+=K;
    }
    
    prom=acumSpeed/N;

    if (prom<=S){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }


    return 0;
}