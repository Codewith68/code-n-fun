#include<iostream>
using namespace std;
class IPL_TEAM{
    public:
    string captain;
    string team_name;
    int no_of_trophies;
    int budget;
    int no_of_trophies_won(){
        return no_of_trophies;
    }
};
int main(){
    // static allocation
    IPL_TEAM team1;
    team1.captain = "Rohit Sharma";
    team1.team_name = "Mumbai Indians";
    team1.no_of_trophies = 5;
    team1.budget = 1000;
    cout << "Team Name: " << team1.team_name << endl;
    cout << "Captain: " << team1.captain << endl;
    cout << "No of Trophies: " << team1.no_of_trophies << endl;
    cout << "Budget: " << team1.budget << endl;
    cout << "No of Trophies Won: " << team1.no_of_trophies_won() << endl;
    // dynamic allocation
    IPL_TEAM *team2 = new IPL_TEAM;
    team2->captain = "MS Dhoni";
    team2->team_name = "Chennai Super Kings";
    team2->no_of_trophies = 4;
    team2->budget = 800;
    cout << "Team Name: " << team2->team_name << endl;
    cout << "Captain: " << team2->captain << endl;
    cout << "No of Trophies: " << team2->no_of_trophies << endl;
    cout << "Budget: " << team2->budget << endl;
    cout << "No of Trophies Won: " << team2->no_of_trophies_won() << endl;
    // deallocating memory
    delete team2;
    team2 = nullptr; // setting pointer to null after deletion
    cout<<team2->captain<<endl; // this will give error because team2 is deleted
}