#include <iostream>
#include <vector>
#include <string>
#include <cctype> 
#include <cmath>

using namespace std;

int doubles (){

    double num;
    double max = 0;

    cout<< "Enter positive doubles, and 0 or -1 to quit: " << endl;

    while (cin >> num && num > 0){
    
        cout << "You entered: " << num << endl;
        if (num){
            if (num > max){
                max = num;
            }
        }
    }
   cout << " Thank you, the maximum is: " << max << endl;     
   
   return 0;
}

/* ++ ASCII art functions for rock, paper, scissors ++ */

void print_rock(){
    cout << " __.--.--._" <<endl;
    cout << "/  | _|  | `|" <<endl;
    cout << "|  |` |  |  |" <<endl;
    cout << "| /`--:--:__/ " <<endl;
    cout << "|/  /      |" <<endl;
    cout << "(  ' \\     |" <<endl;
    cout << " \\    `.  /" <<endl;
    cout << "  |      |" <<endl;
    cout << "  |      |" <<endl;
}
void print_paper(){
    cout << "    --.--." << endl;
    cout << "   |  |  |" << endl;
    cout << ".\"\"|  |  |_" << endl;
    cout << "|  |  |  | `|" << endl;
    cout << "|  | _|  |  |" << endl;
    cout << "|  |` )  |  |" << endl;
    cout << "| /'  /     /" << endl;
    cout << "|/   /      |" << endl;
    cout << "(   ' \\     |" << endl;
    cout << "\\      `.  /" << endl;
    cout << " |        |" << endl;
    cout << " |        |" << endl;
}
void print_scissors(){
    cout << ".\"\".   .\"\"." << endl;
    cout << "|  |  /  /" << endl;
    cout << "|  | /  /" << endl;
    cout << "|  |/ .--._" << endl;
    cout << "|    _|  | `|" << endl;
    cout << "|  /` )  |  |" << endl;
    cout << "| /  /'--:__/ " << endl;
    cout << "|/  /      |" << endl;
    cout << "(  ' \\     |" << endl;
    cout << " \\    `.  /" << endl;
    cout << "  |      |" << endl;
    cout << "  |      |" << endl;
}

void rock_paper_scissors(){
    
    char choice;

    srand(time({}));
    int cp = rand() % 3; // 0 = Rock, 1 = Paper, 2 = Scissors
   
    cout << "Let's play Rock, Paper, Scissors!" << endl;
    cout << "Choose your weapon wisely... " << endl;
    cout << "R/r -  Rock" << endl;
    cout << "P/p -  Paper" << endl;
    cout << "S/s -  Scissors" << endl;

    cin >> choice;
    choice = toupper(choice);
   
    if(choice == 'R'){
        print_rock();
        cout << "You chose Rock!" << endl;
    }
    else if (choice == 'P'){
        print_paper();
        cout << "You chose Paper!" << endl;
    }
    else if (choice == 'S'){
        print_scissors();
        cout << "You chose Scissors!" << endl;
    }
    else {
        cout << "Invalid choice, please choose R, P, or S next time." << endl;
        return;
    }
    
    if (cp == 0){
        
        print_rock();
        cout << "Computer chose Rock!" << endl;

        if (choice == 'R'){
            cout << "It's a tie! You both entered rock" << endl;
        }
        else if (choice == 'P'){
            cout << "You win! Paper beats rock :)" << endl;
        }
        else if (choice == 'S'){
            cout << "You lose! Rock beats paper :(" << endl;
        }
    }
    else if (cp == 1){
        print_paper();
        cout << "Computer chose Paper!" << endl;

        if (choice == 'R'){
            cout << "You lose! Paper beats rock :(" << endl;
        }
        else if (choice == 'P'){
            cout << "It's a tie! You both chose paper" << endl;
        }
        else if (choice == 'S'){
            cout << "You win! Scissors beats paper :)" << endl;
        }
    }
    else if (cp == 2){
        print_scissors();
        cout << "Computer chose Scissors!" << endl;

        if (choice == 'R'){
            cout << "You win! Rock beats scissors :)" << endl;
        }
        else if (choice == 'P'){
            cout << "You lose! Scissors beats paper :(" << endl;
        }
        else if (choice == 'S'){
            cout << "It's a tie! You both chose scissors" << endl;
        }
    }

    return;
}

void stnd_deviation(){

    cout << " How many numnbers do you want to enter? " << endl;
    int n;
    cin >> n;
    cout << " Please enter " << n << " numbers: " << endl;
    
    vector<double> numbers;
    double input;
    double sum = 0;
    double dos = 0;

    for(int i = 0; i <n ; i++){
        cout << " Enter number " << i+1 << ": ";
        cin >> input;
        numbers.push_back(input);
        sum += input;
    }
    double mean = sum/n;
    
    for (double num : numbers){
        dos += (num - mean) * (num - mean);
    }
    double std_deviation = sqrt(dos/n);
    
    cout << " The standard deviation is: " << std_deviation << endl;
    return;
}

void bar_chart(){

    vector<int> V{1, 3, 5, 0, 2};

    for (int value : V){
        for (int i = 0; i < value; ++i){
            cout << "=";
        }
        cout << endl;
    }
    return;
}

int main(){

    //doubles();
    //rock_paper_scissors();
    //stnd_deviation();
    bar_chart();

    cout << "Goodbye!" << endl;
    return 0;
}