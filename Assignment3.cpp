

#include <iostream>
#include <time.h>
using namespace std;

//generate the number of events that occur during the game
void generate_events(int& number_of_events) {

    number_of_events = rand() % 20 + 1;

   

}

//generate type of event
/*void generate_event_type(int number_of_events, int& event_type) {

    for (int w = 0; w < number_of_events; w++) {

        event_type = rand() % 6 + 1;
    }
}*/

// generate event conditions
void generate_event_conditions(int event_type, int number_of_events,
    bool& team_a_shot_at_target, bool& team_b_shot_at_target,
    bool& team_a_free_kick, bool& team_b_free_kick,
    bool& team_a_penalty_kick, bool& team_b_penalty_kick)
    {



    for (int x = 0; x < number_of_events; x++)
    {
        if (event_type == 1) 
        {
            team_a_shot_at_target = true;
            
        }
        else if (event_type == 2)
        {
            team_b_shot_at_target = true;
            
        }
        else if (event_type == 3)
        {
            team_a_free_kick = true;
            
        }
        else if (event_type == 4) 
        {
            team_b_free_kick = true;
            
        }
        else if (event_type == 5) 
        {
            team_a_penalty_kick = true;
            
        }
        else if (event_type == 6) 
        {
            team_b_penalty_kick = true;
            
        }
        
    }
}

//decide whether a goal was scored after a shot on target

void check_shots_on_target_scored(bool team_a_shot_at_target, bool team_b_shot_at_target, int number_of_events, bool& team_a_goal, 
    int& team_a_goals_scored, bool& team_a_goalie, bool& team_a_missed_net,
bool& team_a_defender, bool& team_b_goal, int& team_b_goals_scored,
bool& team_b_goalie, bool& team_b_missed_net, bool& team_b_defender){
    team_a_goals_scored = 0;
    
        if (team_a_shot_at_target == true) {
            int team_a_shot = rand() % 3;

            if (team_a_shot == 0) {
                 team_a_goal = true;
                team_a_goals_scored = team_a_goals_scored + 1;
                
            }
            else if (team_a_shot == 1) {
                team_a_goal == true;
                
            }
            else if (team_a_shot == 2) {
                team_a_missed_net == true;
               
            }
            else if (team_a_shot == 3) {
                team_a_defender == true;
                
            }
           
        }
    

    
    if (team_b_shot_at_target == true) {
        int team_b_shot = rand() % 3;

        if (team_b_shot == 0) {
            team_b_goal == true;
            team_b_goals_scored = team_b_goals_scored + 1;
        }
        else if (team_b_shot == 1) {
            team_b_goalie == true;
            
        }
        else if (team_b_shot == 2) {
            team_b_missed_net == true;
            
        }
        else if (team_b_shot == 3) {
            team_b_defender == true;
            
        }
        
    
    }
}


//decide whether a goal was scored on a free kick

void check_free_kicks_scored( int team_a_goals_scored,
    int team_b_goals_scored, int number_of_events,
    bool& team_b_no_card, bool& team_b_yellow, bool& team_b_red, bool team_a_goal, bool team_a_goalie,
    bool team_a_missed_net, bool team_a_defender, bool& team_a_no_card, bool& team_a_yellow, bool& team_a_red,
    bool team_b_goal, bool team_b_goalie, bool team_b_missed_net, bool team_b_defender, bool team_a_free_kick, bool team_b_free_kick ) {
    for (int p = 0; p < number_of_events; p++) {
        if (team_a_free_kick == true) {

            int team_a_kick = rand() % 3;

            int team_b_foul = rand() % 2;

            if (team_b_foul == 0) {
                team_b_no_card == true;
               
            }
            else if (team_b_foul == 1) {
                team_b_yellow == true;
               
            }
            else if (team_b_foul == 2) {
                team_b_red == true;
                
            }

            if (team_a_kick == 0) {
                team_a_goal == true;
                team_a_goals_scored = team_a_goals_scored + 1;
                
            }
            else if (team_a_kick == 1) {
                team_a_goalie == true;
            }
            else if (team_a_kick == 2) {
                team_a_missed_net == true;
               
            }
            else if (team_a_kick == 3) {
                team_a_defender == true;
               
            }
        }


    }


    for (int a = 0; a < number_of_events; a++) {
        if (team_b_free_kick == true) {

            int team_b_kick = rand() % 3;

            int team_a_foul = rand() % 2;

            if (team_a_foul == 0) {
                team_a_no_card == true;
               
            }
            else if (team_a_foul == 1) {
                team_a_yellow == true;
            }
            else if (team_a_foul == 2) {
                team_a_red == true;
            }

            if (team_b_kick == 0) {
                team_b_goal == true;
                team_b_goals_scored = team_b_goals_scored + 1;
                
            }
            else if (team_b_kick == 1) {
                team_b_goalie == true;
                
            }
            else if (team_b_kick == 2) {
                team_b_missed_net == true;
                
            }
            else if (team_b_kick == 3) {
                team_b_defender == true;
               
            }
           
        }
    }
} 



// decide whether a goal has been scored after a penalty kick

void check_penalty_kicks_scored(bool team_a_penalty_kick, bool team_b_penalty_kick, int number_of_events,
    bool& team_b_no_card, bool& team_b_yellow, bool& team_b_red, bool team_a_goal, bool team_a_goalie,
    bool team_a_missed_net, bool team_a_defender, bool team_a_no_card, bool team_a_yellow, bool team_a_red,
    bool team_b_goal, bool team_b_goalie, bool team_b_missed_net, bool team_b_defender, int team_a_goals_scored,
    int team_b_goals_scored)
{
    if(team_a_penalty_kick == true)
    {
    for (int l = 0; l < number_of_events; l++) 
    {
        
            int team_a_kick_penalty = rand() % 3;

            int team_b_foul_penalty = rand() % 2;

            if (team_b_foul_penalty == 0) {
                team_b_no_card == true;
                
            }
            else if (team_b_foul_penalty == 1) {
                team_b_yellow == true;
                
            }
            else if (team_b_foul_penalty == 2) {
                team_b_red == true;
            }
            if (team_a_kick_penalty == 0) {
                team_a_goal == true;
                team_a_goals_scored = team_a_goals_scored + 1;
                
            }
            else if (team_a_kick_penalty == 1) {
                team_a_goalie == true;
               
            }
            else if (team_a_kick_penalty == 2) {
                team_a_missed_net == true;
                
            }
            else if (team_a_kick_penalty == 3) {
                team_a_defender == true;
            }
        }

    
}
   if (team_b_penalty_kick == true) {
    for (int b =0; b< number_of_events; b++){
    

        int team_b_kick_penalty = rand() % 3;

        int team_a_foul_penalty = rand() % 2;

        if (team_a_foul_penalty == 0) {
            team_a_no_card == true;
            
        }
        else if (team_a_foul_penalty == 1) {
            team_a_yellow == true;
            
        }
        else if (team_a_foul_penalty == 2) {
            team_a_missed_net == true;
        }

        if (team_b_kick_penalty == 0) {
            team_b_goal == true;
            team_b_goals_scored = team_b_goals_scored + 1;
            
        }
        else if (team_b_kick_penalty == 1) {
            team_b_goalie == true;
            
        }
        else if (team_b_kick_penalty == 2) {
            team_b_missed_net == true;
           
        }
        else if (team_b_kick_penalty == 3) {
            team_b_defender == true;
          
        }

      
    }
    }
}

void output_events(bool team_a_shot_at_target, bool team_b_shot_at_target,
    bool team_a_free_kick, bool team_b_free_kick,
    bool team_a_penalty_kick, bool team_b_penalty_kick, bool team_a_goal,
    bool team_a_goalie, bool team_a_missed_net,
    bool team_a_defender, bool team_b_goal, int team_b_goals_scored,
    bool team_b_goalie, bool team_b_missed_net, bool team_b_defender, bool team_b_no_card,
    bool team_b_yellow, bool team_b_red, bool team_a_no_card, bool team_a_yellow,
    bool team_a_red) {

    for ()

    if (team_a_shot_at_target == true) {
        cout << "Team A had a shot at the net \n";

    }
        if (team_a_goal == true) {
            cout << "Team A scored a goal! \n";
        }
        else if (team_a_goalie == true) {
            cout << "Team A's shot was blocked by the goalkeeper \n";
        }
        else if (team_a_missed_net == true) {
            cout << "Team A's shot missed the net \n";
        }
        else if (team_a_defender == true) {
            cout << "Team A's shot was blocked by a defender \n";
        }
        
    

        if (team_b_shot_at_target == true) {
            cout << "Team B had a shot at the net \n";
        }
        if (team_b_goal == true) {
            cout << "Team B scored a goal! \n";
        }
        else if (team_b_goalie == true) {
            cout << "Team B's shot was blocked by the goalkeeper \n";
        }
        else if (team_b_missed_net == true) {
            cout << "Team B's shot missed the net \n";
        }
        else if (team_b_defender == true) {
            cout << "Team B's shot was blocked by a defender \n";
        }
    

        if (team_a_free_kick == true) {
            cout << "Team B has committed a foul and Team A was awarded a free kick \n";
        }
        if (team_b_no_card == true){
            cout << "No card was given for the foul Team B committed \n";
        }
        else if (team_b_yellow == true) {
            cout << "Team B was given a yellow card \n";
        }
        else if (team_b_red == true) {
            cout << "Team B was given a red card \n";
        }
        if (team_a_no_card == true) {
            cout << "No card was given for the foul Team A committed \n";
        }
        else if (team_a_yellow == true) {
            cout << "Team A was given a yellow card \n";
        }
        else if (team_a_red == true) {
            cout << "Team A was given a red card \n";
        }
        else if (team_b_free_kick == true) {
            cout << "Team A has commtted a foul and Team B was awarded a free kick \n";
        }
        
        if (team_a_penalty_kick == true) {
            cout << "Team B comitted a foul and Team A was awarded a penalty kick \n ";
        }
        if (team_b_penalty_kick == true) {
            cout << "Team A committed a foul and Team B was awarded a penalty kick \n";

        }

}


void output_stats() {
   // for (int current_event = 0; current_event <= number_of_events; current_event++) {
      //  if (current_event == number_of_events / 2) {

        
}

int main()
{
    int number_of_events = 0; 
    int event_type = 0;
    bool team_a_shot_at_target = false;
    bool team_b_shot_at_target = false;
    bool team_a_free_kick = false;
    bool team_b_free_kick = false;
    bool team_a_penalty_kick = false;
    bool team_b_penalty_kick = false;
    bool team_a_goal = false;
    int team_a_goals_scored = 0;
    bool team_a_goalie = false;
    bool team_a_missed_net = 0;
    bool team_a_defender = false;
    bool team_b_goal = false;
    bool team_b_goalie = false;
    bool team_b_missed_net = false;
    bool team_b_defender = false;
    int team_b_goals_scored = 0;
    bool team_a_no_card = false;
    bool team_b_no_card = false;
    bool team_a_yellow = false;
    bool team_b_yellow = false;
    bool team_a_red = false;
    bool team_b_red = false;
    
    srand((unsigned) time(0));

    generate_events(number_of_events);
    cout << "number of event" << number_of_events << endl; 
   // generate_event_type(number_of_events, event_type);
   // cout << "event type" << event_type << endl;

    for (int h = 0; h < number_of_events; h++) {
        
      event_type = rand() % 6 + 1;
      generate_event_conditions(event_type,number_of_events,
         team_a_shot_at_target,team_b_shot_at_target,
         team_a_free_kick, team_b_free_kick,
        team_a_penalty_kick, team_b_penalty_kick);
     
          check_shots_on_target_scored(team_a_shot_at_target, team_b_shot_at_target, number_of_events, team_a_goal,
              team_a_goals_scored, team_a_goalie, team_a_missed_net,
              team_a_defender, team_b_goal, team_b_goals_scored,
              team_b_goalie, team_b_missed_net, team_b_defender);
          check_free_kicks_scored(team_b_goals_scored, team_a_goals_scored, number_of_events, team_a_no_card, team_a_yellow,
              team_a_red, team_b_no_card, team_b_yellow, team_b_red,
              team_a_free_kick, team_b_free_kick, team_a_goal,
              team_a_goalie, team_a_missed_net,
              team_a_defender, team_b_goal,
              team_b_goalie, team_b_missed_net, team_b_defender);
          check_penalty_kicks_scored(team_b_goals_scored, team_a_goals_scored, number_of_events, team_a_no_card, team_a_yellow,
              team_a_red, team_b_no_card, team_b_yellow, team_b_red, team_a_penalty_kick, team_b_penalty_kick,
              team_a_goal,
              team_a_goalie, team_a_missed_net,
              team_a_defender, team_b_goal,
              team_b_goalie, team_b_missed_net, team_b_defender);
      }

   output_events(team_a_shot_at_target, team_b_shot_at_target,
       team_a_free_kick, team_b_free_kick,
       team_a_penalty_kick, team_b_penalty_kick, team_a_goal,
       team_a_goalie, team_a_missed_net,
       team_a_defender, team_b_goal, team_b_goals_scored,
       team_b_goalie, team_b_missed_net, team_b_defender, team_b_no_card,
       team_b_yellow, team_b_red, team_a_no_card, team_a_yellow,
       team_a_red);
}
