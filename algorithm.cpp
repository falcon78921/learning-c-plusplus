// Problem Statement:
// Create a program that displays the average scores
// from Metacritic's MetaScore and Rotten Tomatoes'
// Tomatometer score for a particular movie. The average score
// must be displayed on a 10-point scale. The movie title
// and scores will be inputted by the user.

#include <iostream>
#include <string>

using namespace std;

int main()
{

    // Get the name of the movie
    string movieName = "";
    cout << "What is the name of the movie? \n";
    getline(cin, movieName);

    // Get the Metacritic's MetaScore
    int metaScore = 0;
    cout << "What is the Metacritic MetaScore for " << movieName << "?\n";
    cin >> metaScore;

    // Get the Rotten Tomatoes' Tomatometer score
    int tomatoScore = 0;
    cout << "What is the Rotten Tomatoes Tomatometer score for " << movieName << "?\n";
    cin >> tomatoScore;

    // Calculate the average of the two scores
    double averageScore = double(metaScore + tomatoScore) / 2;

    // Rescale the average
    double rescaledScore = averageScore / 10;

    // Display the calculation result
    cout << "Our calculated average for " << movieName << " is: " << rescaledScore << "\n";

    return 0;

}